// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="matrix_mult,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=7.664000,HLS_SYN_LAT=426,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=1,HLS_SYN_FF=66,HLS_SYN_LUT=285,HLS_VERSION=2018_2}" *)

module matrix_mult (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        a_address0,
        a_ce0,
        a_q0,
        b_address0,
        b_ce0,
        b_q0,
        prod_address0,
        prod_ce0,
        prod_we0,
        prod_d0,
        prod_q0
);

parameter    ap_ST_fsm_state1 = 7'd1;
parameter    ap_ST_fsm_state2 = 7'd2;
parameter    ap_ST_fsm_state3 = 7'd4;
parameter    ap_ST_fsm_state4 = 7'd8;
parameter    ap_ST_fsm_pp0_stage0 = 7'd16;
parameter    ap_ST_fsm_pp0_stage1 = 7'd32;
parameter    ap_ST_fsm_state10 = 7'd64;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [4:0] a_address0;
output   a_ce0;
input  [7:0] a_q0;
output  [4:0] b_address0;
output   b_ce0;
input  [7:0] b_q0;
output  [4:0] prod_address0;
output   prod_ce0;
output   prod_we0;
output  [15:0] prod_d0;
input  [15:0] prod_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg a_ce0;
reg b_ce0;
reg[4:0] prod_address0;
reg prod_ce0;
reg prod_we0;
reg[15:0] prod_d0;

(* fsm_encoding = "none" *) reg   [6:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [2:0] k_reg_133;
wire   [4:0] indvar_flatten_next_fu_150_p2;
reg   [4:0] indvar_flatten_next_reg_294;
wire    ap_CS_fsm_state2;
wire   [2:0] j_mid2_fu_168_p3;
reg   [2:0] j_mid2_reg_299;
wire   [0:0] exitcond_flatten_fu_144_p2;
wire   [2:0] tmp_mid2_v_fu_176_p3;
reg   [2:0] tmp_mid2_v_reg_305;
wire   [5:0] tmp_1_fu_198_p2;
reg   [5:0] tmp_1_reg_312;
wire    ap_CS_fsm_state3;
wire   [5:0] tmp_2_cast_fu_204_p1;
reg   [5:0] tmp_2_cast_reg_318;
wire    ap_CS_fsm_state4;
reg   [4:0] prod_addr_reg_323;
wire   [0:0] exitcond_fu_217_p2;
reg   [0:0] exitcond_reg_328;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state5_pp0_stage0_iter0;
wire    ap_block_state7_pp0_stage0_iter1;
wire    ap_block_state9_pp0_stage0_iter2;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] exitcond_reg_328_pp0_iter1_reg;
wire   [2:0] k_1_fu_223_p2;
reg   [2:0] k_1_reg_332;
reg    ap_enable_reg_pp0_iter0;
wire   [5:0] tmp_2_fu_233_p2;
reg   [5:0] tmp_2_reg_337;
wire   [5:0] tmp_11_fu_256_p2;
reg   [5:0] tmp_11_reg_342;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state6_pp0_stage1_iter0;
wire    ap_block_state8_pp0_stage1_iter1;
wire    ap_block_pp0_stage1_11001;
wire   [2:0] j_1_fu_277_p2;
wire    ap_CS_fsm_state10;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state5;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage1_subdone;
reg    ap_enable_reg_pp0_iter2;
reg   [4:0] indvar_flatten_reg_100;
reg   [2:0] i_reg_111;
reg   [2:0] j_reg_122;
reg   [2:0] ap_phi_mux_k_phi_fu_137_p4;
wire    ap_block_pp0_stage0;
wire   [63:0] tmp_10_cast_fu_212_p1;
wire   [63:0] tmp_11_cast_fu_261_p1;
wire    ap_block_pp0_stage1;
wire   [63:0] tmp_14_cast_fu_265_p1;
wire  signed [15:0] grp_fu_282_p3;
wire   [0:0] exitcond1_fu_162_p2;
wire   [2:0] i_1_fu_156_p2;
wire   [4:0] tmp_fu_187_p3;
wire   [5:0] tmp_mid2_cast_fu_184_p1;
wire   [5:0] p_shl_cast_fu_194_p1;
wire   [5:0] tmp_s_fu_207_p2;
wire   [5:0] tmp_4_cast_fu_229_p1;
wire   [4:0] tmp_4_fu_238_p3;
wire   [5:0] p_shl1_cast_fu_246_p1;
wire   [5:0] tmp_10_fu_250_p2;
reg   [6:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 7'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
end

matrix_mult_mac_mbkb #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 8 ),
    .din1_WIDTH( 8 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
matrix_mult_mac_mbkb_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(b_q0),
    .din1(a_q0),
    .din2(prod_q0),
    .ce(1'b1),
    .dout(grp_fu_282_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state5) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state4)) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_subdone))) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state5)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state5);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_subdone)) | ((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_subdone)))) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end else if ((1'b1 == ap_CS_fsm_state4)) begin
            ap_enable_reg_pp0_iter2 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        i_reg_111 <= tmp_mid2_v_reg_305;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_111 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        indvar_flatten_reg_100 <= indvar_flatten_next_reg_294;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        indvar_flatten_reg_100 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state10)) begin
        j_reg_122 <= j_1_fu_277_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        j_reg_122 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_reg_328 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        k_reg_133 <= k_1_reg_332;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        k_reg_133 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        exitcond_reg_328 <= exitcond_fu_217_p2;
        exitcond_reg_328_pp0_iter1_reg <= exitcond_reg_328;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        indvar_flatten_next_reg_294 <= indvar_flatten_next_fu_150_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_144_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_mid2_reg_299 <= j_mid2_fu_168_p3;
        tmp_mid2_v_reg_305 <= tmp_mid2_v_fu_176_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        k_1_reg_332 <= k_1_fu_223_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        prod_addr_reg_323 <= tmp_10_cast_fu_212_p1;
        tmp_2_cast_reg_318[2 : 0] <= tmp_2_cast_fu_204_p1[2 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_fu_217_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        tmp_11_reg_342 <= tmp_11_fu_256_p2;
        tmp_2_reg_337 <= tmp_2_fu_233_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        tmp_1_reg_312 <= tmp_1_fu_198_p2;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        a_ce0 = 1'b1;
    end else begin
        a_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((exitcond_fu_217_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state5 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state5 = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_flatten_fu_144_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_reg_328 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_k_phi_fu_137_p4 = k_1_reg_332;
    end else begin
        ap_phi_mux_k_phi_fu_137_p4 = k_reg_133;
    end
end

always @ (*) begin
    if (((exitcond_flatten_fu_144_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        b_ce0 = 1'b1;
    end else begin
        b_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1)))) begin
        prod_address0 = prod_addr_reg_323;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        prod_address0 = tmp_10_cast_fu_212_p1;
    end else begin
        prod_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | ((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001)))) begin
        prod_ce0 = 1'b1;
    end else begin
        prod_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        prod_d0 = grp_fu_282_p3;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        prod_d0 = 16'd0;
    end else begin
        prod_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | ((1'b0 == ap_block_pp0_stage0_11001) & (exitcond_reg_328_pp0_iter1_reg == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1)))) begin
        prod_we0 = 1'b1;
    end else begin
        prod_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((exitcond_flatten_fu_144_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((exitcond_fu_217_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone)) & ~((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if ((((1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter2 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone)) | ((exitcond_fu_217_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone)))) begin
                ap_NS_fsm = ap_ST_fsm_state10;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((1'b0 == ap_block_pp0_stage1_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_address0 = tmp_11_cast_fu_261_p1;

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign b_address0 = tmp_14_cast_fu_265_p1;

assign exitcond1_fu_162_p2 = ((j_reg_122 == 3'd5) ? 1'b1 : 1'b0);

assign exitcond_flatten_fu_144_p2 = ((indvar_flatten_reg_100 == 5'd25) ? 1'b1 : 1'b0);

assign exitcond_fu_217_p2 = ((ap_phi_mux_k_phi_fu_137_p4 == 3'd5) ? 1'b1 : 1'b0);

assign i_1_fu_156_p2 = (i_reg_111 + 3'd1);

assign indvar_flatten_next_fu_150_p2 = (indvar_flatten_reg_100 + 5'd1);

assign j_1_fu_277_p2 = (j_mid2_reg_299 + 3'd1);

assign j_mid2_fu_168_p3 = ((exitcond1_fu_162_p2[0:0] === 1'b1) ? 3'd0 : j_reg_122);

assign k_1_fu_223_p2 = (ap_phi_mux_k_phi_fu_137_p4 + 3'd1);

assign p_shl1_cast_fu_246_p1 = tmp_4_fu_238_p3;

assign p_shl_cast_fu_194_p1 = tmp_fu_187_p3;

assign tmp_10_cast_fu_212_p1 = tmp_s_fu_207_p2;

assign tmp_10_fu_250_p2 = (tmp_4_cast_fu_229_p1 + p_shl1_cast_fu_246_p1);

assign tmp_11_cast_fu_261_p1 = tmp_2_reg_337;

assign tmp_11_fu_256_p2 = (tmp_10_fu_250_p2 + tmp_2_cast_reg_318);

assign tmp_14_cast_fu_265_p1 = tmp_11_reg_342;

assign tmp_1_fu_198_p2 = (tmp_mid2_cast_fu_184_p1 + p_shl_cast_fu_194_p1);

assign tmp_2_cast_fu_204_p1 = j_mid2_reg_299;

assign tmp_2_fu_233_p2 = (tmp_1_reg_312 + tmp_4_cast_fu_229_p1);

assign tmp_4_cast_fu_229_p1 = ap_phi_mux_k_phi_fu_137_p4;

assign tmp_4_fu_238_p3 = {{ap_phi_mux_k_phi_fu_137_p4}, {2'd0}};

assign tmp_fu_187_p3 = {{tmp_mid2_v_reg_305}, {2'd0}};

assign tmp_mid2_cast_fu_184_p1 = tmp_mid2_v_reg_305;

assign tmp_mid2_v_fu_176_p3 = ((exitcond1_fu_162_p2[0:0] === 1'b1) ? i_1_fu_156_p2 : i_reg_111);

assign tmp_s_fu_207_p2 = (tmp_1_reg_312 + tmp_2_cast_fu_204_p1);

always @ (posedge ap_clk) begin
    tmp_2_cast_reg_318[5:3] <= 3'b000;
end

endmodule //matrix_mult
