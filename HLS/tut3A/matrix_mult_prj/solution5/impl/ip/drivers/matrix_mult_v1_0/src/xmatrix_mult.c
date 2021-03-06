// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

/***************************** Include Files *********************************/
#include "xmatrix_mult.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XMatrix_mult_CfgInitialize(XMatrix_mult *InstancePtr, XMatrix_mult_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Axilites_BaseAddress = ConfigPtr->Axilites_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XMatrix_mult_Start(XMatrix_mult *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMatrix_mult_ReadReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_AP_CTRL) & 0x80;
    XMatrix_mult_WriteReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_AP_CTRL, Data | 0x01);
}

u32 XMatrix_mult_IsDone(XMatrix_mult *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMatrix_mult_ReadReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XMatrix_mult_IsIdle(XMatrix_mult *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMatrix_mult_ReadReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XMatrix_mult_IsReady(XMatrix_mult *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMatrix_mult_ReadReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XMatrix_mult_EnableAutoRestart(XMatrix_mult *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatrix_mult_WriteReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_AP_CTRL, 0x80);
}

void XMatrix_mult_DisableAutoRestart(XMatrix_mult *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatrix_mult_WriteReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_AP_CTRL, 0);
}

u32 XMatrix_mult_Get_a_BaseAddress(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_A_BASE);
}

u32 XMatrix_mult_Get_a_HighAddress(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_A_HIGH);
}

u32 XMatrix_mult_Get_a_TotalBytes(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMATRIX_MULT_AXILITES_ADDR_A_HIGH - XMATRIX_MULT_AXILITES_ADDR_A_BASE + 1);
}

u32 XMatrix_mult_Get_a_BitWidth(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMATRIX_MULT_AXILITES_WIDTH_A;
}

u32 XMatrix_mult_Get_a_Depth(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMATRIX_MULT_AXILITES_DEPTH_A;
}

u32 XMatrix_mult_Write_a_Words(XMatrix_mult *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMATRIX_MULT_AXILITES_ADDR_A_HIGH - XMATRIX_MULT_AXILITES_ADDR_A_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_A_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMatrix_mult_Read_a_Words(XMatrix_mult *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMATRIX_MULT_AXILITES_ADDR_A_HIGH - XMATRIX_MULT_AXILITES_ADDR_A_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_A_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMatrix_mult_Write_a_Bytes(XMatrix_mult *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMATRIX_MULT_AXILITES_ADDR_A_HIGH - XMATRIX_MULT_AXILITES_ADDR_A_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_A_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMatrix_mult_Read_a_Bytes(XMatrix_mult *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMATRIX_MULT_AXILITES_ADDR_A_HIGH - XMATRIX_MULT_AXILITES_ADDR_A_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_A_BASE + offset + i);
    }
    return length;
}

u32 XMatrix_mult_Get_b_BaseAddress(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_B_BASE);
}

u32 XMatrix_mult_Get_b_HighAddress(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_B_HIGH);
}

u32 XMatrix_mult_Get_b_TotalBytes(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMATRIX_MULT_AXILITES_ADDR_B_HIGH - XMATRIX_MULT_AXILITES_ADDR_B_BASE + 1);
}

u32 XMatrix_mult_Get_b_BitWidth(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMATRIX_MULT_AXILITES_WIDTH_B;
}

u32 XMatrix_mult_Get_b_Depth(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMATRIX_MULT_AXILITES_DEPTH_B;
}

u32 XMatrix_mult_Write_b_Words(XMatrix_mult *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMATRIX_MULT_AXILITES_ADDR_B_HIGH - XMATRIX_MULT_AXILITES_ADDR_B_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_B_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMatrix_mult_Read_b_Words(XMatrix_mult *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMATRIX_MULT_AXILITES_ADDR_B_HIGH - XMATRIX_MULT_AXILITES_ADDR_B_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_B_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMatrix_mult_Write_b_Bytes(XMatrix_mult *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMATRIX_MULT_AXILITES_ADDR_B_HIGH - XMATRIX_MULT_AXILITES_ADDR_B_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_B_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMatrix_mult_Read_b_Bytes(XMatrix_mult *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMATRIX_MULT_AXILITES_ADDR_B_HIGH - XMATRIX_MULT_AXILITES_ADDR_B_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_B_BASE + offset + i);
    }
    return length;
}

u32 XMatrix_mult_Get_prod_BaseAddress(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_PROD_BASE);
}

u32 XMatrix_mult_Get_prod_HighAddress(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_PROD_HIGH);
}

u32 XMatrix_mult_Get_prod_TotalBytes(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return (XMATRIX_MULT_AXILITES_ADDR_PROD_HIGH - XMATRIX_MULT_AXILITES_ADDR_PROD_BASE + 1);
}

u32 XMatrix_mult_Get_prod_BitWidth(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMATRIX_MULT_AXILITES_WIDTH_PROD;
}

u32 XMatrix_mult_Get_prod_Depth(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMATRIX_MULT_AXILITES_DEPTH_PROD;
}

u32 XMatrix_mult_Write_prod_Words(XMatrix_mult *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMATRIX_MULT_AXILITES_ADDR_PROD_HIGH - XMATRIX_MULT_AXILITES_ADDR_PROD_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(int *)(InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_PROD_BASE + (offset + i)*4) = *(data + i);
    }
    return length;
}

u32 XMatrix_mult_Read_prod_Words(XMatrix_mult *InstancePtr, int offset, int *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length)*4 > (XMATRIX_MULT_AXILITES_ADDR_PROD_HIGH - XMATRIX_MULT_AXILITES_ADDR_PROD_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(int *)(InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_PROD_BASE + (offset + i)*4);
    }
    return length;
}

u32 XMatrix_mult_Write_prod_Bytes(XMatrix_mult *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMATRIX_MULT_AXILITES_ADDR_PROD_HIGH - XMATRIX_MULT_AXILITES_ADDR_PROD_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(char *)(InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_PROD_BASE + offset + i) = *(data + i);
    }
    return length;
}

u32 XMatrix_mult_Read_prod_Bytes(XMatrix_mult *InstancePtr, int offset, char *data, int length) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr -> IsReady == XIL_COMPONENT_IS_READY);

    int i;

    if ((offset + length) > (XMATRIX_MULT_AXILITES_ADDR_PROD_HIGH - XMATRIX_MULT_AXILITES_ADDR_PROD_BASE + 1))
        return 0;

    for (i = 0; i < length; i++) {
        *(data + i) = *(char *)(InstancePtr->Axilites_BaseAddress + XMATRIX_MULT_AXILITES_ADDR_PROD_BASE + offset + i);
    }
    return length;
}

void XMatrix_mult_InterruptGlobalEnable(XMatrix_mult *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatrix_mult_WriteReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_GIE, 1);
}

void XMatrix_mult_InterruptGlobalDisable(XMatrix_mult *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatrix_mult_WriteReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_GIE, 0);
}

void XMatrix_mult_InterruptEnable(XMatrix_mult *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XMatrix_mult_ReadReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_IER);
    XMatrix_mult_WriteReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_IER, Register | Mask);
}

void XMatrix_mult_InterruptDisable(XMatrix_mult *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XMatrix_mult_ReadReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_IER);
    XMatrix_mult_WriteReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_IER, Register & (~Mask));
}

void XMatrix_mult_InterruptClear(XMatrix_mult *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMatrix_mult_WriteReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_ISR, Mask);
}

u32 XMatrix_mult_InterruptGetEnabled(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMatrix_mult_ReadReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_IER);
}

u32 XMatrix_mult_InterruptGetStatus(XMatrix_mult *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMatrix_mult_ReadReg(InstancePtr->Axilites_BaseAddress, XMATRIX_MULT_AXILITES_ADDR_ISR);
}

