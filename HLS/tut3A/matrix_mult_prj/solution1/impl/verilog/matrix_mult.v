// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="matrix_mult,hls_ip_2018_2,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg484-1,HLS_INPUT_CLOCK=5.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=3.492500,HLS_SYN_LAT=686,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=1,HLS_SYN_FF=68,HLS_SYN_LUT=204,HLS_VERSION=2018_2}" *)

module matrix_mult (
        ap_clk,
        ap_rst,
        a_address0,
        a_ce0,
        a_q0,
        b_address0,
        b_ce0,
        b_q0,
        prod_address0,
        prod_ce0,
        prod_we0,
        prod_d0
);

parameter    ap_ST_fsm_state1 = 8'd1;
parameter    ap_ST_fsm_state2 = 8'd2;
parameter    ap_ST_fsm_state3 = 8'd4;
parameter    ap_ST_fsm_state4 = 8'd8;
parameter    ap_ST_fsm_state5 = 8'd16;
parameter    ap_ST_fsm_state6 = 8'd32;
parameter    ap_ST_fsm_state7 = 8'd64;
parameter    ap_ST_fsm_state8 = 8'd128;

input   ap_clk;
input   ap_rst;
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

reg a_ce0;
reg b_ce0;
reg prod_ce0;
reg prod_we0;

wire   [2:0] i_1_fu_140_p2;
reg   [2:0] i_1_reg_265;
(* fsm_encoding = "none" *) reg   [7:0] ap_CS_fsm;
wire    ap_CS_fsm_state2;
wire   [5:0] tmp_s_fu_162_p2;
reg   [5:0] tmp_s_reg_270;
wire   [0:0] exitcond2_fu_134_p2;
wire   [2:0] j_1_fu_174_p2;
reg   [2:0] j_1_reg_279;
wire    ap_CS_fsm_state3;
wire   [5:0] tmp_2_cast_fu_180_p1;
reg   [5:0] tmp_2_cast_reg_284;
wire   [0:0] exitcond1_fu_168_p2;
reg   [4:0] prod_addr_reg_289;
wire   [2:0] k_1_fu_200_p2;
reg   [2:0] k_1_reg_297;
wire    ap_CS_fsm_state4;
wire   [5:0] tmp_4_fu_210_p2;
reg   [5:0] tmp_4_reg_302;
wire   [0:0] exitcond_fu_194_p2;
wire   [5:0] tmp_12_fu_233_p2;
reg   [5:0] tmp_12_reg_307;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire  signed [15:0] grp_fu_254_p3;
wire    ap_CS_fsm_state8;
reg   [2:0] i_reg_88;
wire    ap_CS_fsm_state1;
reg   [2:0] j_reg_99;
reg   [15:0] prod_load_reg_110;
reg   [2:0] k_reg_123;
wire   [63:0] tmp_11_cast_fu_189_p1;
wire   [63:0] tmp_12_cast_fu_238_p1;
wire   [63:0] tmp_15_cast_fu_242_p1;
wire   [4:0] tmp_9_fu_150_p3;
wire   [5:0] tmp_cast_fu_146_p1;
wire   [5:0] p_shl_cast_fu_158_p1;
wire   [5:0] tmp_2_fu_184_p2;
wire   [5:0] tmp_4_cast_fu_206_p1;
wire   [4:0] tmp_10_fu_215_p3;
wire   [5:0] p_shl1_cast_fu_223_p1;
wire   [5:0] tmp_11_fu_227_p2;
reg   [7:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 8'd1;
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
    .din2(prod_load_reg_110),
    .ce(1'b1),
    .dout(grp_fu_254_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_168_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_reg_88 <= i_1_reg_265;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        i_reg_88 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_194_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        j_reg_99 <= j_1_reg_279;
    end else if (((exitcond2_fu_134_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_99 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        k_reg_123 <= k_1_reg_297;
    end else if (((exitcond1_fu_168_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        k_reg_123 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        prod_load_reg_110 <= grp_fu_254_p3;
    end else if (((exitcond1_fu_168_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        prod_load_reg_110 <= 16'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_1_reg_265 <= i_1_fu_140_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_1_reg_279 <= j_1_fu_174_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        k_1_reg_297 <= k_1_fu_200_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_168_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        prod_addr_reg_289 <= tmp_11_cast_fu_189_p1;
        tmp_2_cast_reg_284[2 : 0] <= tmp_2_cast_fu_180_p1[2 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_194_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        tmp_12_reg_307 <= tmp_12_fu_233_p2;
        tmp_4_reg_302 <= tmp_4_fu_210_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond2_fu_134_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_s_reg_270 <= tmp_s_fu_162_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        a_ce0 = 1'b1;
    end else begin
        a_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        b_ce0 = 1'b1;
    end else begin
        b_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        prod_ce0 = 1'b1;
    end else begin
        prod_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        prod_we0 = 1'b1;
    end else begin
        prod_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            ap_NS_fsm = ap_ST_fsm_state2;
        end
        ap_ST_fsm_state2 : begin
            if (((exitcond2_fu_134_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((exitcond1_fu_168_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((exitcond_fu_194_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_address0 = tmp_12_cast_fu_238_p1;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign b_address0 = tmp_15_cast_fu_242_p1;

assign exitcond1_fu_168_p2 = ((j_reg_99 == 3'd5) ? 1'b1 : 1'b0);

assign exitcond2_fu_134_p2 = ((i_reg_88 == 3'd5) ? 1'b1 : 1'b0);

assign exitcond_fu_194_p2 = ((k_reg_123 == 3'd5) ? 1'b1 : 1'b0);

assign i_1_fu_140_p2 = (i_reg_88 + 3'd1);

assign j_1_fu_174_p2 = (j_reg_99 + 3'd1);

assign k_1_fu_200_p2 = (k_reg_123 + 3'd1);

assign p_shl1_cast_fu_223_p1 = tmp_10_fu_215_p3;

assign p_shl_cast_fu_158_p1 = tmp_9_fu_150_p3;

assign prod_address0 = prod_addr_reg_289;

assign prod_d0 = prod_load_reg_110;

assign tmp_10_fu_215_p3 = {{k_reg_123}, {2'd0}};

assign tmp_11_cast_fu_189_p1 = tmp_2_fu_184_p2;

assign tmp_11_fu_227_p2 = (tmp_4_cast_fu_206_p1 + p_shl1_cast_fu_223_p1);

assign tmp_12_cast_fu_238_p1 = tmp_4_reg_302;

assign tmp_12_fu_233_p2 = (tmp_11_fu_227_p2 + tmp_2_cast_reg_284);

assign tmp_15_cast_fu_242_p1 = tmp_12_reg_307;

assign tmp_2_cast_fu_180_p1 = j_reg_99;

assign tmp_2_fu_184_p2 = (tmp_s_reg_270 + tmp_2_cast_fu_180_p1);

assign tmp_4_cast_fu_206_p1 = k_reg_123;

assign tmp_4_fu_210_p2 = (tmp_s_reg_270 + tmp_4_cast_fu_206_p1);

assign tmp_9_fu_150_p3 = {{i_reg_88}, {2'd0}};

assign tmp_cast_fu_146_p1 = i_reg_88;

assign tmp_s_fu_162_p2 = (tmp_cast_fu_146_p1 + p_shl_cast_fu_158_p1);

always @ (posedge ap_clk) begin
    tmp_2_cast_reg_284[5:3] <= 3'b000;
end

endmodule //matrix_mult
