"""
European Call Option Monte Carlo Pricer -- Python Golden Reference

Variables:
S0    : current stock price
K     : strike price
r     : annual risk-free interest rate
sigma : annual volatility
T     : time to expiry in years
N     : number of Monte Carlo paths
Z     : standard-normal samples
ST    : terminal stock prices
"""

import numpy as np
from scipy.stats import norm


# The confidence level is how wide you want the error band for the Monte
# Carlo estimate to be -- 95% is a common choice. The z-score below is
# derived from that number rather than typed in directly as an unexplained
# constant.
CONFIDENCE_LEVEL = 0.95
CONFIDENCE_Z_SCORE = norm.ppf(0.5 + CONFIDENCE_LEVEL / 2)

# Corner cases were chosen at the extremes of the two parameters that
# actually reshape the payoff distribution, since that shape is what
# determines how well the CLT-based confidence interval holds up:
#
#   deep ITM / deep OTM  -- push moneyness (S0 vs K) to the extremes. This
#     moves P(ITM), the probability a path pays off at all, from near 1 to
#     near 0, which directly controls how skewed the payoff is (deep OTM
#     is almost all exact zeros plus a rare, oversized tail).
#   low sigma / high sigma -- push volatility to the extremes, which scales
#     how much the Gaussian draw moves the terminal price, and therefore
#     how much dynamic range fixed-point hardware would need to cover.
#   short T / long T -- push time-to-expiry to the extremes, scaling both
#     the drift term and sigma*sqrt(T), the other lever on range and skew.
#   base ATM -- the middle-of-the-box reference point, included as a
#     baseline, not because it's the easiest case: measured skew (see
#     corner_coverage_sweep) shows it is not the mildest corner in the box.
CORNER_PARAMETERS = {
    "base ATM": dict(
        S0=100, K=100, r=0.05, sigma=0.20, T=1.0
    ),
    "deep ITM": dict(
        S0=150, K=100, r=0.05, sigma=0.20, T=1.0
    ),
    "deep OTM": dict(
        S0=50, K=100, r=0.05, sigma=0.20, T=1.0
    ),
    "low sigma": dict(
        S0=100, K=100, r=0.05, sigma=0.05, T=1.0
    ),
    "high sigma": dict(
        S0=100, K=100, r=0.05, sigma=0.50, T=1.0
    ),
    "short T": dict(
        S0=100, K=100, r=0.05, sigma=0.20, T=0.1
    ),
    "long T": dict(
        S0=100, K=100, r=0.05, sigma=0.20, T=2.0
    ),
}


# ---------------------------------------------------------------------------
# Black-Scholes reference
# ---------------------------------------------------------------------------

def black_scholes(S0, K, r, sigma, T):
    """Return the Black-Scholes European call and put prices."""

    d1 = (
        np.log(S0 / K)
        + (r + 0.5 * sigma**2) * T
    ) / (sigma * np.sqrt(T))

    d2 = d1 - sigma * np.sqrt(T)

    call_price = (
        S0 * norm.cdf(d1)
        - K * np.exp(-r * T) * norm.cdf(d2)
    )

    put_price = (
        K * np.exp(-r * T) * norm.cdf(-d2)
        - S0 * norm.cdf(-d1)
    )

    return call_price, put_price


# ---------------------------------------------------------------------------
# Monte Carlo pricer
# ---------------------------------------------------------------------------

def monte_carlo_call(
    S0,
    K,
    r,
    sigma,
    T,
    N,
    seed=0,
    clip=None,
    frac_bits=None,
    Z=None,
):
    """Estimate a European call price using N simulated terminal prices."""

    if Z is None:
        rng = np.random.default_rng(seed)
        Z = rng.standard_normal(N)

    if len(Z) != N:
        raise ValueError("The length of Z must equal N.")

    if clip is not None:
        Z = np.clip(Z, -clip, clip)

    if frac_bits is not None:
        scale = 2**frac_bits
        Z = np.round(Z * scale) / scale

    ST = S0 * np.exp(
        (r - 0.5 * sigma**2) * T
        + sigma * np.sqrt(T) * Z
    )

    payoffs = np.maximum(ST - K, 0.0)
    discount_factor = np.exp(-r * T)

    price = discount_factor * np.mean(payoffs)

    standard_error = (
        discount_factor
        * np.std(payoffs, ddof=1)
        / np.sqrt(N)
    )

    return price, standard_error


# ---------------------------------------------------------------------------
# Base-case checks
# ---------------------------------------------------------------------------
# check_base_case() checks that the Monte Carlo call price actually
# converges to Black-Scholes, and that the code behaves the way probability
# theory promises a Monte Carlo estimator should. It varies nothing except
# the random seed -- it isn't tuning a parameter, and it isn't measuring how
# many paths are needed for convergence. It's asking a single yes/no
# question: is this code correct?
#
# Note: "how many paths does this need to converge" is real and worth
# answering, but it's a different experiment than anything here -- it would
# need its own function that sweeps N and plots convergence.

def check_base_case():
    S0 = 100.0
    K = 100.0
    r = 0.05
    sigma = 0.20
    T = 1.0
    N = 100

    bs_call_price, bs_put_price = black_scholes(
        S0, K, r, sigma, T
    )

    # Generate Z outside because it is reused in the E[ST] check.
    rng = np.random.default_rng(1)
    base_Z = rng.standard_normal(N)

    mc_call_price, call_standard_error = monte_carlo_call(
        S0, K, r, sigma, T, N, Z=base_Z
    )

    print(f"Black-Scholes call price : {bs_call_price:.4f}")
    print(
        f"Monte Carlo call price   : {mc_call_price:.4f} "
        f"(SE={call_standard_error:.4f}, "
        f"{100 * call_standard_error / mc_call_price:.3f}% of price)"
    )

    # Run many independent seeds and confirm the interval contains the
    # Black-Scholes price roughly CONFIDENCE_LEVEL of the time, not that it
    # always does.
    num_runs = 200
    coverage_hits = 0

    for run_index in range(num_runs):
        estimated_price, estimated_se = monte_carlo_call(
            S0,
            K,
            r,
            sigma,
            T,
            N,
            seed=100 + run_index,
        )

        error = abs(estimated_price - bs_call_price)

        # CONFIDENCE_Z_SCORE ~= 1.96 when CONFIDENCE_LEVEL = 0.95 -- the
        # half-width of the middle 95% of a bell curve, in units of SE.
        interval_half_width = CONFIDENCE_Z_SCORE * estimated_se

        if error <= interval_half_width:
            coverage_hits += 1

    coverage = coverage_hits / num_runs

    print(
        f"CI coverage over {num_runs} seeds : "
        f"{coverage:.3f} (want approximately {CONFIDENCE_LEVEL:.0%})"
    )

    assert 0.85 <= coverage <= 1.0, (
        f"Confidence-interval coverage is far from {CONFIDENCE_LEVEL:.0%}."
    )

    # Check E[ST] = S0 * exp(rT).
    ST = S0 * np.exp(
        (r - 0.5 * sigma**2) * T
        + sigma * np.sqrt(T) * base_Z
    )

    theoretical_mean_ST = S0 * np.exp(r * T)

    print(
        f"E[ST] measured/theory   : "
        f"{ST.mean():.4f} / {theoretical_mean_ST:.4f}"
    )

    # Independent Monte Carlo put for put-call parity.
    put_rng = np.random.default_rng(2)
    put_Z = put_rng.standard_normal(N)

    put_ST = S0 * np.exp(
        (r - 0.5 * sigma**2) * T
        + sigma * np.sqrt(T) * put_Z
    )

    put_standard_error = (
        np.exp(-r * T)
        * np.std(np.maximum(K - put_ST, 0.0), ddof=1)
        / np.sqrt(N)
    )

    mc_put_price = (
        np.exp(-r * T)
        * np.mean(np.maximum(K - put_ST, 0.0))
    )

    # Same check as the call price above, applied to the put: does the
    # simulated put land within its own confidence interval of the
    # Black-Scholes put? Parity holding doesn't guarantee this on its own --
    # it only guarantees call and put move together correctly, not that
    # either one is individually right.
    print(
        f"Monte Carlo put price    : {mc_put_price:.4f} "
        f"(Black-Scholes put: {bs_put_price:.4f})"
    )
    put_within_ci = (
        abs(mc_put_price - bs_put_price)
        <= CONFIDENCE_Z_SCORE * put_standard_error
    )
    print(f"Put within CI of BS?     : {put_within_ci}")

    parity_left = mc_call_price - mc_put_price
    parity_right = S0 - K * np.exp(-r * T)

    print(
        f"Put-call parity check    : "
        f"C-P={parity_left:.4f} vs "
        f"S0-K*e^(-rT)={parity_right:.4f}"
    )

    # The tolerance here has to be built from the call and put's own noise,
    # not a fixed number -- a flat constant like 0.5 only "happens" to work
    # at whatever N it was eyeballed against, and silently fails (or
    # silently passes when it shouldn't) at any other N. Call and put came
    # from independent simulations, so their combined uncertainty adds
    # same CONFIDENCE_Z_SCORE logic as every other check here.
    parity_standard_error = np.sqrt(
        call_standard_error**2 + put_standard_error**2
    )
    parity_tolerance = CONFIDENCE_Z_SCORE * parity_standard_error

    assert abs(parity_left - parity_right) <= parity_tolerance, (
        "Put-call parity violated."
    )


# ---------------------------------------------------------------------------
# Parameter corner sweep
# ---------------------------------------------------------------------------

def corner_sweep(N=100_000, seed=1):
    print(
        f"\n{'corner':<14}"
        f"{'BS price':>10}"
        f"{'MC price':>10}"
        f"{'SE':>9}"
        f"{'within CI':>11}"
    )

    for corner_name, parameters in CORNER_PARAMETERS.items():
        bs_call_price, _ = black_scholes(**parameters)

        mc_call_price, standard_error = monte_carlo_call(
            **parameters,
            N=N,
            seed=seed,
        )

        within_ci = (
            abs(mc_call_price - bs_call_price)
            <= CONFIDENCE_Z_SCORE * standard_error
        )

        print(
            f"{corner_name:<14}"
            f"{bs_call_price:>10.4f}"
            f"{mc_call_price:>10.4f}"
            f"{standard_error:>9.4f}"
            f"{str(within_ci):>11}"
        )


# ---------------------------------------------------------------------------
# Corner coverage sweep
# ---------------------------------------------------------------------------
# check_base_case()'s coverage test only proves the CI is calibrated at the
# base ATM case. This repeats that same coverage test at every corner in
# CORNER_PARAMETERS, since a heavily skewed payoff (deep OTM: mostly exact
# zeros plus a thin tail) is exactly where the Central Limit Theorem's
# normal approximation for the sample mean is weakest, and where nominal
# 95% coverage is most likely to drift from actual coverage.

def corner_coverage_sweep(N=100_000, num_runs=200):
    print(
        f"\n{'corner':<14}"
        f"{'coverage':>10}"
        f"{'want':>8}"
    )

    for corner_name, parameters in CORNER_PARAMETERS.items():
        bs_call_price, _ = black_scholes(**parameters)

        coverage_hits = 0
        for run_index in range(num_runs):
            estimated_price, estimated_se = monte_carlo_call(
                **parameters,
                N=N,
                seed=1000 + run_index,
            )

            error = abs(estimated_price - bs_call_price)
            interval_half_width = CONFIDENCE_Z_SCORE * estimated_se

            if error <= interval_half_width:
                coverage_hits += 1

        coverage = coverage_hits / num_runs

        print(
            f"{corner_name:<14}"
            f"{coverage:>10.3f}"
            f"{CONFIDENCE_LEVEL:>8.0%}"
        )


# ---------------------------------------------------------------------------
# Gaussian clipping experiment
# ---------------------------------------------------------------------------

def clip_experiment(
    N=2_000_000,
    seed=3,
    clip_levels=(3, 4, 4.5, 5, 5.5, 6),
):
    S0 = 100.0
    K = 100.0
    r = 0.05
    sigma = 0.20
    T = 1.0

    rng = np.random.default_rng(seed)
    Z = rng.standard_normal(N)

    reference_price, reference_se = monte_carlo_call(
        S0, K, r, sigma, T, N, Z=Z
    )

    print(f"\n{'clip':<10}{'price':>10}{'bias %':>12}")

    for clip_limit in clip_levels:
        clipped_price, clipped_se = monte_carlo_call(
            S0,
            K,
            r,
            sigma,
            T,
            N,
            Z=Z,
            clip=clip_limit,
        )

        bias_percent = (
            100
            * (clipped_price - reference_price)
            / reference_price
        )

        # Print the results in a formatted table
        print(
            f"{clip_limit:<10}"
            f"{clipped_price:>10.4f}"
            f"{bias_percent:>12.5f}"
        )


# ---------------------------------------------------------------------------
# Gaussian fractional-bit experiment
# ---------------------------------------------------------------------------

def frac_bits_experiment(
    N=2_000_000,
    seed=3,
    clip=5.0,
    bit_levels=(8, 10, 11, 12, 13, 14, 16),
):
    # Standard parameters for the fractional-bit experiment.
    S0 = 100.0
    K = 100.0
    r = 0.05
    sigma = 0.20
    T = 1.0

    rng = np.random.default_rng(seed)
    Z = rng.standard_normal(N)
    clipped_Z = np.clip(Z, -clip, clip)

    reference_price, reference_se = monte_carlo_call(
        S0, K, r, sigma, T, N, Z=clipped_Z
    )

    # Table header
    print(f"\n{'frac bits':<12}{'price':>10}{'bias %':>12}")

    for num_frac_bits in bit_levels:
        quantized_price, quantized_se = monte_carlo_call(
            S0,
            K,
            r,
            sigma,
            T,
            N,
            Z=clipped_Z,
            frac_bits=num_frac_bits,
        )

        bias_percent = (
            100
            * (quantized_price - reference_price)
            / reference_price
        )

        # Print the results in a formatted table
        print(
            f"{num_frac_bits:<12}"
            f"{quantized_price:>10.4f}"
            f"{bias_percent:>12.5f}"
        )


if __name__ == "__main__":
    print("=== Base case versus Black-Scholes ===")
    check_base_case()

    print("\n=== Parameter corner sweep ===")
    corner_sweep()

    print("\n=== Corner coverage sweep (is 95% CI calibrated at every corner?) ===")
    corner_coverage_sweep()

    print("\n=== Gaussian clipping experiment ===")
    clip_experiment()

    print("\n=== Fractional-bit experiment ===")
    frac_bits_experiment()