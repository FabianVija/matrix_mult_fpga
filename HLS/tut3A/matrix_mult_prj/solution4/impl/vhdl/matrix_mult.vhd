-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity matrix_mult is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    a_address0 : OUT STD_LOGIC_VECTOR (2 downto 0);
    a_ce0 : OUT STD_LOGIC;
    a_q0 : IN STD_LOGIC_VECTOR (39 downto 0);
    b_address0 : OUT STD_LOGIC_VECTOR (2 downto 0);
    b_ce0 : OUT STD_LOGIC;
    b_q0 : IN STD_LOGIC_VECTOR (39 downto 0);
    prod_address0 : OUT STD_LOGIC_VECTOR (4 downto 0);
    prod_ce0 : OUT STD_LOGIC;
    prod_we0 : OUT STD_LOGIC;
    prod_d0 : OUT STD_LOGIC_VECTOR (15 downto 0) );
end;


architecture behav of matrix_mult is 
    attribute CORE_GENERATION_INFO : STRING;
    attribute CORE_GENERATION_INFO of behav : architecture is
    "matrix_mult,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=4.170000,HLS_SYN_LAT=33,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=3,HLS_SYN_FF=387,HLS_SYN_LUT=361,HLS_VERSION=2018_2}";
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_fsm_pp0_stage0 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_state10 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv5_19 : STD_LOGIC_VECTOR (4 downto 0) := "11001";
    constant ap_const_lv5_1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv3_5 : STD_LOGIC_VECTOR (2 downto 0) := "101";
    constant ap_const_lv32_8 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001000";
    constant ap_const_lv32_F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000001111";
    constant ap_const_lv32_10 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010000";
    constant ap_const_lv32_17 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000010111";
    constant ap_const_lv32_18 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011000";
    constant ap_const_lv32_1F : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000011111";
    constant ap_const_lv32_20 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100000";
    constant ap_const_lv32_27 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000100111";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";

    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal indvar_flatten_reg_109 : STD_LOGIC_VECTOR (4 downto 0);
    signal i_reg_120 : STD_LOGIC_VECTOR (2 downto 0);
    signal j_reg_131 : STD_LOGIC_VECTOR (2 downto 0);
    signal exitcond_flatten_fu_142_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal exitcond_flatten_reg_388 : STD_LOGIC_VECTOR (0 downto 0);
    signal ap_CS_fsm_pp0_stage0 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_pp0_stage0 : signal is "none";
    signal ap_block_state2_pp0_stage0_iter0 : BOOLEAN;
    signal ap_block_state3_pp0_stage0_iter1 : BOOLEAN;
    signal ap_block_state4_pp0_stage0_iter2 : BOOLEAN;
    signal ap_block_state5_pp0_stage0_iter3 : BOOLEAN;
    signal ap_block_state6_pp0_stage0_iter4 : BOOLEAN;
    signal ap_block_state7_pp0_stage0_iter5 : BOOLEAN;
    signal ap_block_state8_pp0_stage0_iter6 : BOOLEAN;
    signal ap_block_state9_pp0_stage0_iter7 : BOOLEAN;
    signal ap_block_pp0_stage0_11001 : BOOLEAN;
    signal exitcond_flatten_reg_388_pp0_iter1_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal exitcond_flatten_reg_388_pp0_iter2_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal exitcond_flatten_reg_388_pp0_iter3_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal exitcond_flatten_reg_388_pp0_iter4_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal exitcond_flatten_reg_388_pp0_iter5_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal exitcond_flatten_reg_388_pp0_iter6_reg : STD_LOGIC_VECTOR (0 downto 0);
    signal indvar_flatten_next_fu_148_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_enable_reg_pp0_iter0 : STD_LOGIC := '0';
    signal j_mid2_fu_166_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal j_mid2_reg_397 : STD_LOGIC_VECTOR (2 downto 0);
    signal j_mid2_reg_397_pp0_iter1_reg : STD_LOGIC_VECTOR (2 downto 0);
    signal j_mid2_reg_397_pp0_iter2_reg : STD_LOGIC_VECTOR (2 downto 0);
    signal j_mid2_reg_397_pp0_iter3_reg : STD_LOGIC_VECTOR (2 downto 0);
    signal j_mid2_reg_397_pp0_iter4_reg : STD_LOGIC_VECTOR (2 downto 0);
    signal j_mid2_reg_397_pp0_iter5_reg : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_mid2_v_fu_174_p3 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_mid2_v_reg_403 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_mid2_v_reg_403_pp0_iter1_reg : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_mid2_v_reg_403_pp0_iter2_reg : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_mid2_v_reg_403_pp0_iter3_reg : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_mid2_v_reg_403_pp0_iter4_reg : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_mid2_v_reg_403_pp0_iter5_reg : STD_LOGIC_VECTOR (2 downto 0);
    signal j_1_fu_182_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_8_reg_436 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_9_reg_441 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_10_reg_446 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_11_reg_451 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_12_reg_456 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_13_reg_461 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_7_1_fu_306_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_7_1_reg_476 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_7_3_fu_324_p2 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp_7_3_reg_491 : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_fu_367_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp1_reg_496 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_enable_reg_pp0_iter4 : STD_LOGIC := '0';
    signal tmp1_reg_496_pp0_iter5_reg : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_fu_374_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp3_reg_501 : STD_LOGIC_VECTOR (15 downto 0);
    signal grp_fu_381_p3 : STD_LOGIC_VECTOR (15 downto 0);
    signal tmp2_reg_506 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_enable_reg_pp0_iter5 : STD_LOGIC := '0';
    signal tmp_4_fu_353_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_4_reg_511 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_8_4_fu_359_p2 : STD_LOGIC_VECTOR (15 downto 0);
    attribute use_dsp48 : string;
    attribute use_dsp48 of tmp_8_4_fu_359_p2 : signal is "no";
    signal tmp_8_4_reg_516 : STD_LOGIC_VECTOR (15 downto 0);
    signal ap_block_pp0_stage0_subdone : BOOLEAN;
    signal ap_condition_pp0_exit_iter0_state2 : STD_LOGIC;
    signal ap_enable_reg_pp0_iter1 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter2 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter3 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter6 : STD_LOGIC := '0';
    signal ap_enable_reg_pp0_iter7 : STD_LOGIC := '0';
    signal ap_phi_mux_i_phi_fu_124_p4 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_block_pp0_stage0 : BOOLEAN;
    signal tmp_mid2_fu_188_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_2_fu_192_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_16_cast_fu_363_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal exitcond_fu_160_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal i_1_fu_154_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_6_fu_196_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_16_fu_204_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_14_fu_272_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_15_fu_286_p4 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_7_1_fu_306_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_7_1_fu_306_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_7_3_fu_324_p0 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_7_3_fu_324_p1 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_fu_333_p3 : STD_LOGIC_VECTOR (4 downto 0);
    signal p_shl_cast_fu_340_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_mid2_cast_fu_330_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_2_cast_fu_350_p1 : STD_LOGIC_VECTOR (5 downto 0);
    signal tmp_1_fu_344_p2 : STD_LOGIC_VECTOR (5 downto 0);
    signal ap_CS_fsm_state10 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state10 : signal is "none";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_idle_pp0 : STD_LOGIC;
    signal ap_enable_pp0 : STD_LOGIC;

    component matrix_mult_mac_mbkb IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (7 downto 0);
        din1 : IN STD_LOGIC_VECTOR (7 downto 0);
        din2 : IN STD_LOGIC_VECTOR (15 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;


    component matrix_mult_mac_mcud IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        clk : IN STD_LOGIC;
        reset : IN STD_LOGIC;
        din0 : IN STD_LOGIC_VECTOR (7 downto 0);
        din1 : IN STD_LOGIC_VECTOR (7 downto 0);
        din2 : IN STD_LOGIC_VECTOR (15 downto 0);
        ce : IN STD_LOGIC;
        dout : OUT STD_LOGIC_VECTOR (15 downto 0) );
    end component;



begin
    matrix_mult_mac_mbkb_U1 : component matrix_mult_mac_mbkb
    generic map (
        ID => 1,
        NUM_STAGE => 3,
        din0_WIDTH => 8,
        din1_WIDTH => 8,
        din2_WIDTH => 16,
        dout_WIDTH => 16)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_6_fu_196_p1,
        din1 => tmp_16_fu_204_p1,
        din2 => tmp_7_1_reg_476,
        ce => ap_const_logic_1,
        dout => grp_fu_367_p3);

    matrix_mult_mac_mbkb_U2 : component matrix_mult_mac_mbkb
    generic map (
        ID => 1,
        NUM_STAGE => 3,
        din0_WIDTH => 8,
        din1_WIDTH => 8,
        din2_WIDTH => 16,
        dout_WIDTH => 16)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_14_fu_272_p4,
        din1 => tmp_15_fu_286_p4,
        din2 => tmp_7_3_reg_491,
        ce => ap_const_logic_1,
        dout => grp_fu_374_p3);

    matrix_mult_mac_mcud_U3 : component matrix_mult_mac_mcud
    generic map (
        ID => 1,
        NUM_STAGE => 3,
        din0_WIDTH => 8,
        din1_WIDTH => 8,
        din2_WIDTH => 16,
        dout_WIDTH => 16)
    port map (
        clk => ap_clk,
        reset => ap_rst,
        din0 => tmp_10_reg_446,
        din1 => tmp_11_reg_451,
        din2 => tmp3_reg_501,
        ce => ap_const_logic_1,
        dout => grp_fu_381_p3);





    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter0_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
            else
                if (((ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_0;
                elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter0 <= ap_const_logic_1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter1_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter1 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then
                    if ((ap_const_logic_1 = ap_condition_pp0_exit_iter0_state2)) then 
                        ap_enable_reg_pp0_iter1 <= (ap_const_logic_1 xor ap_condition_pp0_exit_iter0_state2);
                    elsif ((ap_const_boolean_1 = ap_const_boolean_1)) then 
                        ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
                    end if;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter2_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter2 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter3_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter3 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter4_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter4 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter5_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter5 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter6_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter6 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
                end if; 
            end if;
        end if;
    end process;


    ap_enable_reg_pp0_iter7_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_enable_reg_pp0_iter7 <= ap_const_logic_0;
            else
                if ((ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) then 
                    ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
                elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                    ap_enable_reg_pp0_iter7 <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    i_reg_120_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (exitcond_flatten_reg_388 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
                i_reg_120 <= tmp_mid2_v_reg_403;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                i_reg_120 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;

    indvar_flatten_reg_109_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (exitcond_flatten_fu_142_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                indvar_flatten_reg_109 <= indvar_flatten_next_fu_148_p2;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                indvar_flatten_reg_109 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;

    j_reg_131_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (exitcond_flatten_fu_142_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then 
                j_reg_131 <= j_1_fu_182_p2;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                j_reg_131 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                exitcond_flatten_reg_388 <= exitcond_flatten_fu_142_p2;
                exitcond_flatten_reg_388_pp0_iter1_reg <= exitcond_flatten_reg_388;
                j_mid2_reg_397_pp0_iter1_reg <= j_mid2_reg_397;
                tmp_mid2_v_reg_403_pp0_iter1_reg <= tmp_mid2_v_reg_403;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_boolean_0 = ap_block_pp0_stage0_11001)) then
                exitcond_flatten_reg_388_pp0_iter2_reg <= exitcond_flatten_reg_388_pp0_iter1_reg;
                exitcond_flatten_reg_388_pp0_iter3_reg <= exitcond_flatten_reg_388_pp0_iter2_reg;
                exitcond_flatten_reg_388_pp0_iter4_reg <= exitcond_flatten_reg_388_pp0_iter3_reg;
                exitcond_flatten_reg_388_pp0_iter5_reg <= exitcond_flatten_reg_388_pp0_iter4_reg;
                exitcond_flatten_reg_388_pp0_iter6_reg <= exitcond_flatten_reg_388_pp0_iter5_reg;
                j_mid2_reg_397_pp0_iter2_reg <= j_mid2_reg_397_pp0_iter1_reg;
                j_mid2_reg_397_pp0_iter3_reg <= j_mid2_reg_397_pp0_iter2_reg;
                j_mid2_reg_397_pp0_iter4_reg <= j_mid2_reg_397_pp0_iter3_reg;
                j_mid2_reg_397_pp0_iter5_reg <= j_mid2_reg_397_pp0_iter4_reg;
                tmp1_reg_496_pp0_iter5_reg <= tmp1_reg_496;
                tmp_mid2_v_reg_403_pp0_iter2_reg <= tmp_mid2_v_reg_403_pp0_iter1_reg;
                tmp_mid2_v_reg_403_pp0_iter3_reg <= tmp_mid2_v_reg_403_pp0_iter2_reg;
                tmp_mid2_v_reg_403_pp0_iter4_reg <= tmp_mid2_v_reg_403_pp0_iter3_reg;
                tmp_mid2_v_reg_403_pp0_iter5_reg <= tmp_mid2_v_reg_403_pp0_iter4_reg;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (exitcond_flatten_fu_142_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                j_mid2_reg_397 <= j_mid2_fu_166_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_flatten_reg_388_pp0_iter3_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter4 = ap_const_logic_1))) then
                tmp1_reg_496 <= grp_fu_367_p3;
                tmp3_reg_501 <= grp_fu_374_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_flatten_reg_388_pp0_iter4_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter5 = ap_const_logic_1))) then
                tmp2_reg_506 <= grp_fu_381_p3;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_flatten_reg_388_pp0_iter1_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                tmp_10_reg_446 <= a_q0(23 downto 16);
                tmp_11_reg_451 <= b_q0(23 downto 16);
                tmp_12_reg_456 <= a_q0(31 downto 24);
                tmp_13_reg_461 <= b_q0(31 downto 24);
                tmp_8_reg_436 <= a_q0(15 downto 8);
                tmp_9_reg_441 <= b_q0(15 downto 8);
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_flatten_reg_388_pp0_iter5_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                tmp_4_reg_511 <= tmp_4_fu_353_p2;
                tmp_8_4_reg_516 <= tmp_8_4_fu_359_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_flatten_reg_388_pp0_iter2_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001))) then
                tmp_7_1_reg_476 <= tmp_7_1_fu_306_p2;
                tmp_7_3_reg_491 <= tmp_7_3_fu_324_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (exitcond_flatten_fu_142_p2 = ap_const_lv1_0) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0))) then
                tmp_mid2_v_reg_403 <= tmp_mid2_v_fu_174_p3;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, exitcond_flatten_fu_142_p2, ap_enable_reg_pp0_iter0, ap_block_pp0_stage0_subdone, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter6, ap_enable_reg_pp0_iter7)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_pp0_stage0 => 
                if ((not(((exitcond_flatten_fu_142_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))) and not(((ap_enable_reg_pp0_iter7 = ap_const_logic_1) and (ap_enable_reg_pp0_iter6 = ap_const_logic_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone))))) then
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                elsif ((((exitcond_flatten_fu_142_p2 = ap_const_lv1_1) and (ap_enable_reg_pp0_iter0 = ap_const_logic_1) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone)) or ((ap_enable_reg_pp0_iter7 = ap_const_logic_1) and (ap_enable_reg_pp0_iter6 = ap_const_logic_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_subdone)))) then
                    ap_NS_fsm <= ap_ST_fsm_state10;
                else
                    ap_NS_fsm <= ap_ST_fsm_pp0_stage0;
                end if;
            when ap_ST_fsm_state10 => 
                ap_NS_fsm <= ap_ST_fsm_state1;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    a_address0 <= tmp_mid2_fu_188_p1(3 - 1 downto 0);

    a_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
            a_ce0 <= ap_const_logic_1;
        else 
            a_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    ap_CS_fsm_pp0_stage0 <= ap_CS_fsm(1);
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state10 <= ap_CS_fsm(2);
        ap_block_pp0_stage0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_11001 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_pp0_stage0_subdone <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state2_pp0_stage0_iter0 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state3_pp0_stage0_iter1 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state4_pp0_stage0_iter2 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state5_pp0_stage0_iter3 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state6_pp0_stage0_iter4 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state7_pp0_stage0_iter5 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state8_pp0_stage0_iter6 <= not((ap_const_boolean_1 = ap_const_boolean_1));
        ap_block_state9_pp0_stage0_iter7 <= not((ap_const_boolean_1 = ap_const_boolean_1));

    ap_condition_pp0_exit_iter0_state2_assign_proc : process(exitcond_flatten_fu_142_p2)
    begin
        if ((exitcond_flatten_fu_142_p2 = ap_const_lv1_1)) then 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_1;
        else 
            ap_condition_pp0_exit_iter0_state2 <= ap_const_logic_0;
        end if; 
    end process;


    ap_done_assign_proc : process(ap_CS_fsm_state10)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;

    ap_enable_pp0 <= (ap_idle_pp0 xor ap_const_logic_1);

    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_pp0_assign_proc : process(ap_enable_reg_pp0_iter0, ap_enable_reg_pp0_iter4, ap_enable_reg_pp0_iter5, ap_enable_reg_pp0_iter1, ap_enable_reg_pp0_iter2, ap_enable_reg_pp0_iter3, ap_enable_reg_pp0_iter6, ap_enable_reg_pp0_iter7)
    begin
        if (((ap_enable_reg_pp0_iter0 = ap_const_logic_0) and (ap_enable_reg_pp0_iter7 = ap_const_logic_0) and (ap_enable_reg_pp0_iter6 = ap_const_logic_0) and (ap_enable_reg_pp0_iter3 = ap_const_logic_0) and (ap_enable_reg_pp0_iter2 = ap_const_logic_0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_0) and (ap_enable_reg_pp0_iter5 = ap_const_logic_0) and (ap_enable_reg_pp0_iter4 = ap_const_logic_0))) then 
            ap_idle_pp0 <= ap_const_logic_1;
        else 
            ap_idle_pp0 <= ap_const_logic_0;
        end if; 
    end process;


    ap_phi_mux_i_phi_fu_124_p4_assign_proc : process(i_reg_120, exitcond_flatten_reg_388, ap_CS_fsm_pp0_stage0, tmp_mid2_v_reg_403, ap_enable_reg_pp0_iter1, ap_block_pp0_stage0)
    begin
        if (((exitcond_flatten_reg_388 = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
            ap_phi_mux_i_phi_fu_124_p4 <= tmp_mid2_v_reg_403;
        else 
            ap_phi_mux_i_phi_fu_124_p4 <= i_reg_120;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state10)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state10)) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    b_address0 <= tmp_2_fu_192_p1(3 - 1 downto 0);

    b_ce0_assign_proc : process(ap_CS_fsm_pp0_stage0, ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter1)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_const_logic_1 = ap_CS_fsm_pp0_stage0) and (ap_enable_reg_pp0_iter1 = ap_const_logic_1))) then 
            b_ce0 <= ap_const_logic_1;
        else 
            b_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    exitcond_flatten_fu_142_p2 <= "1" when (indvar_flatten_reg_109 = ap_const_lv5_19) else "0";
    exitcond_fu_160_p2 <= "1" when (j_reg_131 = ap_const_lv3_5) else "0";
    i_1_fu_154_p2 <= std_logic_vector(unsigned(ap_const_lv3_1) + unsigned(ap_phi_mux_i_phi_fu_124_p4));
    indvar_flatten_next_fu_148_p2 <= std_logic_vector(unsigned(indvar_flatten_reg_109) + unsigned(ap_const_lv5_1));
    j_1_fu_182_p2 <= std_logic_vector(unsigned(ap_const_lv3_1) + unsigned(j_mid2_fu_166_p3));
    j_mid2_fu_166_p3 <= 
        ap_const_lv3_0 when (exitcond_fu_160_p2(0) = '1') else 
        j_reg_131;
    p_shl_cast_fu_340_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_fu_333_p3),6));
    prod_address0 <= tmp_16_cast_fu_363_p1(5 - 1 downto 0);

    prod_ce0_assign_proc : process(ap_block_pp0_stage0_11001, ap_enable_reg_pp0_iter7)
    begin
        if (((ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter7 = ap_const_logic_1))) then 
            prod_ce0 <= ap_const_logic_1;
        else 
            prod_ce0 <= ap_const_logic_0;
        end if; 
    end process;

    prod_d0 <= tmp_8_4_reg_516;

    prod_we0_assign_proc : process(ap_block_pp0_stage0_11001, exitcond_flatten_reg_388_pp0_iter6_reg, ap_enable_reg_pp0_iter7)
    begin
        if (((exitcond_flatten_reg_388_pp0_iter6_reg = ap_const_lv1_0) and (ap_const_boolean_0 = ap_block_pp0_stage0_11001) and (ap_enable_reg_pp0_iter7 = ap_const_logic_1))) then 
            prod_we0 <= ap_const_logic_1;
        else 
            prod_we0 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_14_fu_272_p4 <= a_q0(39 downto 32);
    tmp_15_fu_286_p4 <= b_q0(39 downto 32);
    tmp_16_cast_fu_363_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_4_reg_511),64));
    tmp_16_fu_204_p1 <= b_q0(8 - 1 downto 0);
    tmp_1_fu_344_p2 <= std_logic_vector(unsigned(p_shl_cast_fu_340_p1) + unsigned(tmp_mid2_cast_fu_330_p1));
    tmp_2_cast_fu_350_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_mid2_reg_397_pp0_iter5_reg),6));
    tmp_2_fu_192_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(j_mid2_reg_397),64));
    tmp_4_fu_353_p2 <= std_logic_vector(unsigned(tmp_2_cast_fu_350_p1) + unsigned(tmp_1_fu_344_p2));
    tmp_6_fu_196_p1 <= a_q0(8 - 1 downto 0);
    tmp_7_1_fu_306_p0 <= tmp_8_reg_436;
    tmp_7_1_fu_306_p1 <= tmp_9_reg_441;
    tmp_7_1_fu_306_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(tmp_7_1_fu_306_p0) * signed(tmp_7_1_fu_306_p1))), 16));
    tmp_7_3_fu_324_p0 <= tmp_12_reg_456;
    tmp_7_3_fu_324_p1 <= tmp_13_reg_461;
    tmp_7_3_fu_324_p2 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(std_logic_vector(signed(tmp_7_3_fu_324_p0) * signed(tmp_7_3_fu_324_p1))), 16));
    tmp_8_4_fu_359_p2 <= std_logic_vector(signed(tmp2_reg_506) + signed(tmp1_reg_496_pp0_iter5_reg));
    tmp_fu_333_p3 <= (tmp_mid2_v_reg_403_pp0_iter5_reg & ap_const_lv2_0);
    tmp_mid2_cast_fu_330_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_mid2_v_reg_403_pp0_iter5_reg),6));
    tmp_mid2_fu_188_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(tmp_mid2_v_reg_403),64));
    tmp_mid2_v_fu_174_p3 <= 
        i_1_fu_154_p2 when (exitcond_fu_160_p2(0) = '1') else 
        ap_phi_mux_i_phi_fu_124_p4;
end behav;
