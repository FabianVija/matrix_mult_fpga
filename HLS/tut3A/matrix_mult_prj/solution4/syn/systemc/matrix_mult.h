// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _matrix_mult_HH_
#define _matrix_mult_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "matrix_mult_mac_mbkb.h"
#include "matrix_mult_mac_mcud.h"

namespace ap_rtl {

struct matrix_mult : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<3> > a_address0;
    sc_out< sc_logic > a_ce0;
    sc_in< sc_lv<40> > a_q0;
    sc_out< sc_lv<3> > b_address0;
    sc_out< sc_logic > b_ce0;
    sc_in< sc_lv<40> > b_q0;
    sc_out< sc_lv<5> > prod_address0;
    sc_out< sc_logic > prod_ce0;
    sc_out< sc_logic > prod_we0;
    sc_out< sc_lv<16> > prod_d0;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    matrix_mult(sc_module_name name);
    SC_HAS_PROCESS(matrix_mult);

    ~matrix_mult();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    matrix_mult_mac_mbkb<1,3,8,8,16,16>* matrix_mult_mac_mbkb_U1;
    matrix_mult_mac_mbkb<1,3,8,8,16,16>* matrix_mult_mac_mbkb_U2;
    matrix_mult_mac_mcud<1,3,8,8,16,16>* matrix_mult_mac_mcud_U3;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > indvar_flatten_reg_109;
    sc_signal< sc_lv<3> > i_reg_120;
    sc_signal< sc_lv<3> > j_reg_131;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_142_p2;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_388;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_state5_pp0_stage0_iter3;
    sc_signal< bool > ap_block_state6_pp0_stage0_iter4;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter5;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter6;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter7;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_388_pp0_iter1_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_388_pp0_iter2_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_388_pp0_iter3_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_388_pp0_iter4_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_388_pp0_iter5_reg;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_388_pp0_iter6_reg;
    sc_signal< sc_lv<5> > indvar_flatten_next_fu_148_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<3> > j_mid2_fu_166_p3;
    sc_signal< sc_lv<3> > j_mid2_reg_397;
    sc_signal< sc_lv<3> > j_mid2_reg_397_pp0_iter1_reg;
    sc_signal< sc_lv<3> > j_mid2_reg_397_pp0_iter2_reg;
    sc_signal< sc_lv<3> > j_mid2_reg_397_pp0_iter3_reg;
    sc_signal< sc_lv<3> > j_mid2_reg_397_pp0_iter4_reg;
    sc_signal< sc_lv<3> > j_mid2_reg_397_pp0_iter5_reg;
    sc_signal< sc_lv<3> > tmp_mid2_v_fu_174_p3;
    sc_signal< sc_lv<3> > tmp_mid2_v_reg_403;
    sc_signal< sc_lv<3> > tmp_mid2_v_reg_403_pp0_iter1_reg;
    sc_signal< sc_lv<3> > tmp_mid2_v_reg_403_pp0_iter2_reg;
    sc_signal< sc_lv<3> > tmp_mid2_v_reg_403_pp0_iter3_reg;
    sc_signal< sc_lv<3> > tmp_mid2_v_reg_403_pp0_iter4_reg;
    sc_signal< sc_lv<3> > tmp_mid2_v_reg_403_pp0_iter5_reg;
    sc_signal< sc_lv<3> > j_1_fu_182_p2;
    sc_signal< sc_lv<8> > tmp_8_reg_436;
    sc_signal< sc_lv<8> > tmp_9_reg_441;
    sc_signal< sc_lv<8> > tmp_10_reg_446;
    sc_signal< sc_lv<8> > tmp_11_reg_451;
    sc_signal< sc_lv<8> > tmp_12_reg_456;
    sc_signal< sc_lv<8> > tmp_13_reg_461;
    sc_signal< sc_lv<16> > tmp_7_1_fu_306_p2;
    sc_signal< sc_lv<16> > tmp_7_1_reg_476;
    sc_signal< sc_lv<16> > tmp_7_3_fu_324_p2;
    sc_signal< sc_lv<16> > tmp_7_3_reg_491;
    sc_signal< sc_lv<16> > grp_fu_367_p3;
    sc_signal< sc_lv<16> > tmp1_reg_496;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_lv<16> > tmp1_reg_496_pp0_iter5_reg;
    sc_signal< sc_lv<16> > grp_fu_374_p3;
    sc_signal< sc_lv<16> > tmp3_reg_501;
    sc_signal< sc_lv<16> > grp_fu_381_p3;
    sc_signal< sc_lv<16> > tmp2_reg_506;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_lv<6> > tmp_4_fu_353_p2;
    sc_signal< sc_lv<6> > tmp_4_reg_511;
    sc_signal< sc_lv<16> > tmp_8_4_fu_359_p2;
    sc_signal< sc_lv<16> > tmp_8_4_reg_516;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_lv<3> > ap_phi_mux_i_phi_fu_124_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > tmp_mid2_fu_188_p1;
    sc_signal< sc_lv<64> > tmp_2_fu_192_p1;
    sc_signal< sc_lv<64> > tmp_16_cast_fu_363_p1;
    sc_signal< sc_lv<1> > exitcond_fu_160_p2;
    sc_signal< sc_lv<3> > i_1_fu_154_p2;
    sc_signal< sc_lv<8> > tmp_6_fu_196_p1;
    sc_signal< sc_lv<8> > tmp_16_fu_204_p1;
    sc_signal< sc_lv<8> > tmp_14_fu_272_p4;
    sc_signal< sc_lv<8> > tmp_15_fu_286_p4;
    sc_signal< sc_lv<8> > tmp_7_1_fu_306_p0;
    sc_signal< sc_lv<8> > tmp_7_1_fu_306_p1;
    sc_signal< sc_lv<8> > tmp_7_3_fu_324_p0;
    sc_signal< sc_lv<8> > tmp_7_3_fu_324_p1;
    sc_signal< sc_lv<5> > tmp_fu_333_p3;
    sc_signal< sc_lv<6> > p_shl_cast_fu_340_p1;
    sc_signal< sc_lv<6> > tmp_mid2_cast_fu_330_p1;
    sc_signal< sc_lv<6> > tmp_2_cast_fu_350_p1;
    sc_signal< sc_lv<6> > tmp_1_fu_344_p2;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state10;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_a_address0();
    void thread_a_ce0();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_block_state5_pp0_stage0_iter3();
    void thread_ap_block_state6_pp0_stage0_iter4();
    void thread_ap_block_state7_pp0_stage0_iter5();
    void thread_ap_block_state8_pp0_stage0_iter6();
    void thread_ap_block_state9_pp0_stage0_iter7();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_i_phi_fu_124_p4();
    void thread_ap_ready();
    void thread_b_address0();
    void thread_b_ce0();
    void thread_exitcond_flatten_fu_142_p2();
    void thread_exitcond_fu_160_p2();
    void thread_i_1_fu_154_p2();
    void thread_indvar_flatten_next_fu_148_p2();
    void thread_j_1_fu_182_p2();
    void thread_j_mid2_fu_166_p3();
    void thread_p_shl_cast_fu_340_p1();
    void thread_prod_address0();
    void thread_prod_ce0();
    void thread_prod_d0();
    void thread_prod_we0();
    void thread_tmp_14_fu_272_p4();
    void thread_tmp_15_fu_286_p4();
    void thread_tmp_16_cast_fu_363_p1();
    void thread_tmp_16_fu_204_p1();
    void thread_tmp_1_fu_344_p2();
    void thread_tmp_2_cast_fu_350_p1();
    void thread_tmp_2_fu_192_p1();
    void thread_tmp_4_fu_353_p2();
    void thread_tmp_6_fu_196_p1();
    void thread_tmp_7_1_fu_306_p0();
    void thread_tmp_7_1_fu_306_p1();
    void thread_tmp_7_1_fu_306_p2();
    void thread_tmp_7_3_fu_324_p0();
    void thread_tmp_7_3_fu_324_p1();
    void thread_tmp_7_3_fu_324_p2();
    void thread_tmp_8_4_fu_359_p2();
    void thread_tmp_fu_333_p3();
    void thread_tmp_mid2_cast_fu_330_p1();
    void thread_tmp_mid2_fu_188_p1();
    void thread_tmp_mid2_v_fu_174_p3();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif