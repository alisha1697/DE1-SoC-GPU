	component SDRAM is
		port (
			clk_clk                               : in    std_logic                     := 'X';             -- clk
			gpu_mem_master_0_debug_test_pass      : out   std_logic;                                        -- test_pass
			gpu_mem_master_0_debug_test_fail      : out   std_logic;                                        -- test_fail
			gpu_mem_master_0_debug_state_debug    : out   std_logic_vector(3 downto 0);                     -- state_debug
			gpu_mem_master_0_debug_readback_debug : out   std_logic_vector(31 downto 0);                    -- readback_debug
			reset_reset_n                         : in    std_logic                     := 'X';             -- reset_n
			sdram_clk_clk                         : out   std_logic;                                        -- clk
			sdram_controller_wire_addr            : out   std_logic_vector(12 downto 0);                    -- addr
			sdram_controller_wire_ba              : out   std_logic_vector(1 downto 0);                     -- ba
			sdram_controller_wire_cas_n           : out   std_logic;                                        -- cas_n
			sdram_controller_wire_cke             : out   std_logic;                                        -- cke
			sdram_controller_wire_cs_n            : out   std_logic;                                        -- cs_n
			sdram_controller_wire_dq              : inout std_logic_vector(15 downto 0) := (others => 'X'); -- dq
			sdram_controller_wire_dqm             : out   std_logic_vector(1 downto 0);                     -- dqm
			sdram_controller_wire_ras_n           : out   std_logic;                                        -- ras_n
			sdram_controller_wire_we_n            : out   std_logic                                         -- we_n
		);
	end component SDRAM;

	u0 : component SDRAM
		port map (
			clk_clk                               => CONNECTED_TO_clk_clk,                               --                    clk.clk
			gpu_mem_master_0_debug_test_pass      => CONNECTED_TO_gpu_mem_master_0_debug_test_pass,      -- gpu_mem_master_0_debug.test_pass
			gpu_mem_master_0_debug_test_fail      => CONNECTED_TO_gpu_mem_master_0_debug_test_fail,      --                       .test_fail
			gpu_mem_master_0_debug_state_debug    => CONNECTED_TO_gpu_mem_master_0_debug_state_debug,    --                       .state_debug
			gpu_mem_master_0_debug_readback_debug => CONNECTED_TO_gpu_mem_master_0_debug_readback_debug, --                       .readback_debug
			reset_reset_n                         => CONNECTED_TO_reset_reset_n,                         --                  reset.reset_n
			sdram_clk_clk                         => CONNECTED_TO_sdram_clk_clk,                         --              sdram_clk.clk
			sdram_controller_wire_addr            => CONNECTED_TO_sdram_controller_wire_addr,            --  sdram_controller_wire.addr
			sdram_controller_wire_ba              => CONNECTED_TO_sdram_controller_wire_ba,              --                       .ba
			sdram_controller_wire_cas_n           => CONNECTED_TO_sdram_controller_wire_cas_n,           --                       .cas_n
			sdram_controller_wire_cke             => CONNECTED_TO_sdram_controller_wire_cke,             --                       .cke
			sdram_controller_wire_cs_n            => CONNECTED_TO_sdram_controller_wire_cs_n,            --                       .cs_n
			sdram_controller_wire_dq              => CONNECTED_TO_sdram_controller_wire_dq,              --                       .dq
			sdram_controller_wire_dqm             => CONNECTED_TO_sdram_controller_wire_dqm,             --                       .dqm
			sdram_controller_wire_ras_n           => CONNECTED_TO_sdram_controller_wire_ras_n,           --                       .ras_n
			sdram_controller_wire_we_n            => CONNECTED_TO_sdram_controller_wire_we_n             --                       .we_n
		);

