//###########################################################################
//
// FILE:    hw_sdfm.h
//
// TITLE:   Definitions for the SDFM registers.
//
//###########################################################################
// $Copyright:
// Copyright (C) 2022 Texas Instruments Incorporated - http://www.ti.com/
//
// Redistribution and use in source and binary forms, with or without 
// modification, are permitted provided that the following conditions 
// are met:
// 
//   Redistributions of source code must retain the above copyright 
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the 
//   documentation and/or other materials provided with the   
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// $
//###########################################################################

#ifndef HW_SDFM_H
#define HW_SDFM_H

//*************************************************************************************************
//
// The following are defines for the SDFM register offsets
//
//*************************************************************************************************
#define SDFM_O_SDIFLG       0x0U    // SD Interrupt Flag Register
#define SDFM_O_SDIFLGCLR    0x2U    // SD Interrupt Flag Clear Register
#define SDFM_O_SDCTL        0x4U    // SD Control Register
#define SDFM_O_SDMFILEN     0x6U    // SD Master Filter Enable
#define SDFM_O_SDSTATUS     0x7U    // SD Status Register
#define SDFM_O_SDCTLPARM1   0x10U   // Control Parameter Register for Ch1
#define SDFM_O_SDDFPARM1    0x11U   // Data Filter Parameter Register for Ch1
#define SDFM_O_SDDPARM1     0x12U   // Data Parameter Register for Ch1
#define SDFM_O_SDCMPH1      0x13U   // High-level Threshold Register for Ch1
#define SDFM_O_SDCMPL1      0x14U   // Low-level Threshold Register for Ch1
#define SDFM_O_SDCPARM1     0x15U   // Comparator Filter Parameter Register for Ch1
#define SDFM_O_SDDATA1      0x16U   // Data Filter Data Register (16 or 32bit) for Ch1
#define SDFM_O_SDDATFIFO1   0x18U   // Filter Data FIFO Output(32b) for Ch1
#define SDFM_O_SDCDATA1     0x1AU   // Comparator Filter Data Register (16b) for Ch1
#define SDFM_O_SDCMPHZ1     0x1CU   // High-level (Z) Threshold Register for Ch1
#define SDFM_O_SDFIFOCTL1   0x1DU   // FIFO Control Register for Ch1
#define SDFM_O_SDSYNC1      0x1EU   // SD Filter Sync control for Ch1
#define SDFM_O_SDCTLPARM2   0x20U   // Control Parameter Register for Ch2
#define SDFM_O_SDDFPARM2    0x21U   // Data Filter Parameter Register for Ch2
#define SDFM_O_SDDPARM2     0x22U   // Data Parameter Register for Ch2
#define SDFM_O_SDCMPH2      0x23U   // High-level Threshold Register for Ch2
#define SDFM_O_SDCMPL2      0x24U   // Low-level Threshold Register for Ch2
#define SDFM_O_SDCPARM2     0x25U   // Comparator Filter Parameter Register for Ch2
#define SDFM_O_SDDATA2      0x26U   // Data Filter Data Register (16 or 32bit) for Ch2
#define SDFM_O_SDDATFIFO2   0x28U   // Filter Data FIFO Output(32b) for Ch2
#define SDFM_O_SDCDATA2     0x2AU   // Comparator Filter Data Register (16b) for Ch2
#define SDFM_O_SDCMPHZ2     0x2CU   // High-level (Z) Threshold Register for Ch2
#define SDFM_O_SDFIFOCTL2   0x2DU   // FIFO Control Register for Ch2
#define SDFM_O_SDSYNC2      0x2EU   // SD Filter Sync control for Ch2
#define SDFM_O_SDCTLPARM3   0x30U   // Control Parameter Register for Ch3
#define SDFM_O_SDDFPARM3    0x31U   // Data Filter Parameter Register for Ch3
#define SDFM_O_SDDPARM3     0x32U   // Data Parameter Register for Ch3
#define SDFM_O_SDCMPH3      0x33U   // High-level Threshold Register for Ch3
#define SDFM_O_SDCMPL3      0x34U   // Low-level Threshold Register for Ch3
#define SDFM_O_SDCPARM3     0x35U   // Comparator Filter Parameter Register for Ch3
#define SDFM_O_SDDATA3      0x36U   // Data Filter Data Register (16 or 32bit) for Ch3
#define SDFM_O_SDDATFIFO3   0x38U   // Filter Data FIFO Output(32b) for Ch3
#define SDFM_O_SDCDATA3     0x3AU   // Comparator Filter Data Register (16b) for Ch3
#define SDFM_O_SDCMPHZ3     0x3CU   // High-level (Z) Threshold Register for Ch3
#define SDFM_O_SDFIFOCTL3   0x3DU   // FIFO Control Register for Ch3
#define SDFM_O_SDSYNC3      0x3EU   // SD Filter Sync control for Ch3
#define SDFM_O_SDCTLPARM4   0x40U   // Control Parameter Register for Ch4
#define SDFM_O_SDDFPARM4    0x41U   // Data Filter Parameter Register for Ch4
#define SDFM_O_SDDPARM4     0x42U   // Data Parameter Register for Ch4
#define SDFM_O_SDCMPH4      0x43U   // High-level Threshold Register for Ch4
#define SDFM_O_SDCMPL4      0x44U   // Low-level Threshold Register for Ch4
#define SDFM_O_SDCPARM4     0x45U   // Comparator Filter Parameter Register for Ch4
#define SDFM_O_SDDATA4      0x46U   // Data Filter Data Register (16 or 32bit) for Ch4
#define SDFM_O_SDDATFIFO4   0x48U   // Filter Data FIFO Output(32b) for Ch4
#define SDFM_O_SDCDATA4     0x4AU   // Comparator Filter Data Register (16b) for Ch4
#define SDFM_O_SDCMPHZ4     0x4CU   // High-level (Z) Threshold Register for Ch4
#define SDFM_O_SDFIFOCTL4   0x4DU   // FIFO Control Register for Ch4
#define SDFM_O_SDSYNC4      0x4EU   // SD Filter Sync control for Ch4


//*************************************************************************************************
//
// The following are defines for the bit fields in the SDIFLG register
//
//*************************************************************************************************
#define SDFM_SDIFLG_IFH1       0x1U          // High-level Interrupt flag for Ch1
#define SDFM_SDIFLG_IFL1       0x2U          // Low-level Interrupt flag for Ch1
#define SDFM_SDIFLG_IFH2       0x4U          // High-level Interrupt flag for Ch2
#define SDFM_SDIFLG_IFL2       0x8U          // Low-level Interrupt flag for Ch2
#define SDFM_SDIFLG_IFH3       0x10U         // High-level Interrupt flag for Ch3
#define SDFM_SDIFLG_IFL3       0x20U         // Low-level Interrupt flag for Ch3
#define SDFM_SDIFLG_IFH4       0x40U         // High-level Interrupt flag for Ch4
#define SDFM_SDIFLG_IFL4       0x80U         // Low-level Interrupt flag for Ch4
#define SDFM_SDIFLG_MF1        0x100U        // Modulator Failure for Filter 1
#define SDFM_SDIFLG_MF2        0x200U        // Modulator Failure for Filter 2
#define SDFM_SDIFLG_MF3        0x400U        // Modulator Failure for Filter 3
#define SDFM_SDIFLG_MF4        0x800U        // Modulator Failure for Filter 4
#define SDFM_SDIFLG_AF1        0x1000U       // Acknowledge flag for Filter 1
#define SDFM_SDIFLG_AF2        0x2000U       // Acknowledge flag for Filter 2
#define SDFM_SDIFLG_AF3        0x4000U       // Acknowledge flag for Filter 3
#define SDFM_SDIFLG_AF4        0x8000U       // Acknowledge flag for Filter 4
#define SDFM_SDIFLG_SDFFOVF1   0x10000U      // FIFO Overflow Flag for Ch1.
#define SDFM_SDIFLG_SDFFOVF2   0x20000U      // FIFO Overflow Flag for Ch2
#define SDFM_SDIFLG_SDFFOVF3   0x40000U      // FIFO Overflow Flag for Ch3
#define SDFM_SDIFLG_SDFFOVF4   0x80000U      // FIFO Overflow Flag for Ch4
#define SDFM_SDIFLG_SDFFINT1   0x100000U     // SDFIFO interrupt for Ch1
#define SDFM_SDIFLG_SDFFINT2   0x200000U     // SDFIFO interrupt for Ch2
#define SDFM_SDIFLG_SDFFINT3   0x400000U     // SDFIFO interrupt for Ch3
#define SDFM_SDIFLG_SDFFINT4   0x800000U     // SDFIFO interrupt for Ch4
#define SDFM_SDIFLG_MIF        0x80000000U   // Master Interrupt Flag

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDIFLGCLR register
//
//*************************************************************************************************
#define SDFM_SDIFLGCLR_IFH1       0x1U          // High-level Interrupt flag for Ch1
#define SDFM_SDIFLGCLR_IFL1       0x2U          // Low-level Interrupt flag for Ch1
#define SDFM_SDIFLGCLR_IFH2       0x4U          // High-level Interrupt flag for Ch2
#define SDFM_SDIFLGCLR_IFL2       0x8U          // Low-level Interrupt flag for Ch2
#define SDFM_SDIFLGCLR_IFH3       0x10U         // High-level Interrupt flag for Ch3
#define SDFM_SDIFLGCLR_IFL3       0x20U         // Low-level Interrupt flag for Ch3
#define SDFM_SDIFLGCLR_IFH4       0x40U         // High-level Interrupt flag for Ch4
#define SDFM_SDIFLGCLR_IFL4       0x80U         // Low-level Interrupt flag for Ch4
#define SDFM_SDIFLGCLR_MF1        0x100U        // Modulator Failure for Filter 1
#define SDFM_SDIFLGCLR_MF2        0x200U        // Modulator Failure for Filter 2
#define SDFM_SDIFLGCLR_MF3        0x400U        // Modulator Failure for Filter 3
#define SDFM_SDIFLGCLR_MF4        0x800U        // Modulator Failure for Filter 4
#define SDFM_SDIFLGCLR_AF1        0x1000U       // Acknowledge flag for Filter 1
#define SDFM_SDIFLGCLR_AF2        0x2000U       // Acknowledge flag for Filter 2
#define SDFM_SDIFLGCLR_AF3        0x4000U       // Acknowledge flag for Filter 3
#define SDFM_SDIFLGCLR_AF4        0x8000U       // Acknowledge flag for Filter 4
#define SDFM_SDIFLGCLR_SDFFOVF1   0x10000U      // SDFIFO overflow clear Ch1
#define SDFM_SDIFLGCLR_SDFFOVF2   0x20000U      // SDFIFO overflow clear Ch2
#define SDFM_SDIFLGCLR_SDFFOVF3   0x40000U      // SDFIFO overflow clear Ch3
#define SDFM_SDIFLGCLR_SDFFOVF4   0x80000U      // SDFIFO overflow clear Ch4
#define SDFM_SDIFLGCLR_SDFFINT1   0x100000U     // SDFIFO Interrupt flag-clear bit for Ch1
#define SDFM_SDIFLGCLR_SDFFINT2   0x200000U     // SDFIFO Interrupt flag-clear bit for Ch2
#define SDFM_SDIFLGCLR_SDFFINT3   0x400000U     // SDFIFO Interrupt flag-clear bit for Ch3
#define SDFM_SDIFLGCLR_SDFFINT4   0x800000U     // SDFIFO Interrupt flag-clear bit for Ch4
#define SDFM_SDIFLGCLR_MIF        0x80000000U   // Master Interrupt Flag

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCTL register
//
//*************************************************************************************************
#define SDFM_SDCTL_HZ1   0x1U      // High-level Threshold crossing (Z) flag Ch1
#define SDFM_SDCTL_HZ2   0x2U      // High-level Threshold crossing (Z) flag Ch2
#define SDFM_SDCTL_HZ3   0x4U      // High-level Threshold crossing (Z) flag Ch3
#define SDFM_SDCTL_HZ4   0x8U      // High-level Threshold crossing (Z) flag Ch4
#define SDFM_SDCTL_MIE   0x2000U   // Master SDy_ERR Interrupt enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDMFILEN register
//
//*************************************************************************************************
#define SDFM_SDMFILEN_MFE   0x800U   // Master Filter Enable.

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDSTATUS register
//
//*************************************************************************************************
#define SDFM_SDSTATUS_HZ1   0x1U   // High-level Threshold crossing (Z) flag Ch1
#define SDFM_SDSTATUS_HZ2   0x2U   // High-level Threshold crossing (Z) flag Ch2
#define SDFM_SDSTATUS_HZ3   0x4U   // High-level Threshold crossing (Z) flag Ch3
#define SDFM_SDSTATUS_HZ4   0x8U   // High-level Threshold crossing (Z) flag Ch4

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCTLPARM1 register
//
//*************************************************************************************************
#define SDFM_SDCTLPARM1_MOD_S   0U
#define SDFM_SDCTLPARM1_MOD_M   0x3U   // Modulator clocking modes

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDFPARM1 register
//
//*************************************************************************************************
#define SDFM_SDDFPARM1_DOSR_S     0U
#define SDFM_SDDFPARM1_DOSR_M     0xFFU     // Data Filter Oversample Ratio= DOSR+1
#define SDFM_SDDFPARM1_FEN        0x100U    // Filter Enable
#define SDFM_SDDFPARM1_AE         0x200U    // Ack Enable
#define SDFM_SDDFPARM1_SST_S      10U
#define SDFM_SDDFPARM1_SST_M      0xC00U    // Data filter Structure (SincFast/1/2/3)
#define SDFM_SDDFPARM1_SDSYNCEN   0x1000U   // Data Filter Reset Enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDPARM1 register
//
//*************************************************************************************************
#define SDFM_SDDPARM1_DR     0x400U    // Data Representation (0/1 = 16/32b 2's complement)
#define SDFM_SDDPARM1_SH_S   11U
#define SDFM_SDDPARM1_SH_M   0xF800U   // Shift Control (# bits to shift in 16b mode)

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCMPH1 register
//
//*************************************************************************************************
#define SDFM_SDCMPH1_HLT_S   0U
#define SDFM_SDCMPH1_HLT_M   0x7FFFU   // High-level threshold for the comparator filter output

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCMPL1 register
//
//*************************************************************************************************
#define SDFM_SDCMPL1_LLT_S   0U
#define SDFM_SDCMPL1_LLT_M   0x7FFFU   // Low-level threshold for the comparator filter output

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCPARM1 register
//
//*************************************************************************************************
#define SDFM_SDCPARM1_COSR_S      0U
#define SDFM_SDCPARM1_COSR_M      0x1FU     // Comparator Oversample Ratio. Actual rate COSR+1
#define SDFM_SDCPARM1_IEH         0x20U     // High-level Interrupt enable.
#define SDFM_SDCPARM1_IEL         0x40U     // Low-level interrupt enable
#define SDFM_SDCPARM1_CS1_CS0_S   7U
#define SDFM_SDCPARM1_CS1_CS0_M   0x180U    // Comparator Filter Structure (SincFast/1/2/3)
#define SDFM_SDCPARM1_MFIE        0x200U    // Modulator Failure Interrupt enable
#define SDFM_SDCPARM1_HZEN        0x400U    // High level (Z) Threshold crossing output enable
#define SDFM_SDCPARM1_CEN         0x2000U   // Comparator Enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDATA1 register
//
//*************************************************************************************************
#define SDFM_SDDATA1_DATA16_S     0U
#define SDFM_SDDATA1_DATA16_M     0xFFFFU       // Lo-order 16b in 32b mode
#define SDFM_SDDATA1_DATA32HI_S   16U
#define SDFM_SDDATA1_DATA32HI_M   0xFFFF0000U   // Hi-order 16b in 32b mode, 16-bit Data in 16b
                                                // mode

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDATFIFO1 register
//
//*************************************************************************************************
#define SDFM_SDDATFIFO1_DATA16_S     0U
#define SDFM_SDDATFIFO1_DATA16_M     0xFFFFU       // Lo-order 16b in 32b mode
#define SDFM_SDDATFIFO1_DATA32HI_S   16U
#define SDFM_SDDATFIFO1_DATA32HI_M   0xFFFF0000U   // Hi-order 16b in 32b mode, 16-bit Data in 16b
                                                   // mode

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCMPHZ1 register
//
//*************************************************************************************************
#define SDFM_SDCMPHZ1_HLTZ_S   0U
#define SDFM_SDCMPHZ1_HLTZ_M   0x7FFFU   // High-level threshold (Z) for the comparator filter
                                         // output

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDFIFOCTL1 register
//
//*************************************************************************************************
#define SDFM_SDFIFOCTL1_SDFFIL_S   0U
#define SDFM_SDFIFOCTL1_SDFFIL_M   0x1FU     // SDFIFO Interrupt Level
#define SDFM_SDFIFOCTL1_SDFFST_S   6U
#define SDFM_SDFIFOCTL1_SDFFST_M   0x7C0U    // SDFIFO Status
#define SDFM_SDFIFOCTL1_FFIEN      0x1000U   // SDFIFO data ready Interrupt Enable
#define SDFM_SDFIFOCTL1_FFEN       0x2000U   // SDFIFO Enable
#define SDFM_SDFIFOCTL1_DRINTSEL   0x4000U   // Data-Ready Interrupt Source Select
#define SDFM_SDFIFOCTL1_OVFIEN     0x8000U   // SDFIFO Overflow interrupt enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDSYNC1 register
//
//*************************************************************************************************
#define SDFM_SDSYNC1_SYNCSEL_S     0U
#define SDFM_SDSYNC1_SYNCSEL_M     0x3FU    // SDSYNC Source Select
#define SDFM_SDSYNC1_WTSYNCEN      0x40U    // Wait-for-Sync Enable
#define SDFM_SDSYNC1_WTSYNFLG      0x80U    // Wait-for-Sync Flag
#define SDFM_SDSYNC1_WTSYNCLR      0x100U   // Wait-for-Sync Flag Clear
#define SDFM_SDSYNC1_FFSYNCCLREN   0x200U   // FIFO Clear-on-SDSYNC Enable
#define SDFM_SDSYNC1_WTSCLREN      0x400U   // WTSYNFLG Clear-on-FIFOINT Enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCTLPARM2 register
//
//*************************************************************************************************
#define SDFM_SDCTLPARM2_MOD_S   0U
#define SDFM_SDCTLPARM2_MOD_M   0x3U   // Modulator clocking modes

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDFPARM2 register
//
//*************************************************************************************************
#define SDFM_SDDFPARM2_DOSR_S     0U
#define SDFM_SDDFPARM2_DOSR_M     0xFFU     // Data Filter Oversample Ratio= DOSR+1
#define SDFM_SDDFPARM2_FEN        0x100U    // Filter Enable
#define SDFM_SDDFPARM2_AE         0x200U    // Ack Enable
#define SDFM_SDDFPARM2_SST_S      10U
#define SDFM_SDDFPARM2_SST_M      0xC00U    // Data filter Structure (SincFast/1/2/3)
#define SDFM_SDDFPARM2_SDSYNCEN   0x1000U   // Data Filter Reset Enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDPARM2 register
//
//*************************************************************************************************
#define SDFM_SDDPARM2_DR     0x400U    // Data Representation (0/1 = 16/32b 2's complement)
#define SDFM_SDDPARM2_SH_S   11U
#define SDFM_SDDPARM2_SH_M   0xF800U   // Shift Control (# bits to shift in 16b mode)

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCMPH2 register
//
//*************************************************************************************************
#define SDFM_SDCMPH2_HLT_S   0U
#define SDFM_SDCMPH2_HLT_M   0x7FFFU   // High-level threshold for the comparator filter output

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCMPL2 register
//
//*************************************************************************************************
#define SDFM_SDCMPL2_LLT_S   0U
#define SDFM_SDCMPL2_LLT_M   0x7FFFU   // Low-level threshold for the comparator filter output

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCPARM2 register
//
//*************************************************************************************************
#define SDFM_SDCPARM2_COSR_S      0U
#define SDFM_SDCPARM2_COSR_M      0x1FU     // Comparator Oversample Ratio. Actual rate COSR+1
#define SDFM_SDCPARM2_IEH         0x20U     // High-level Interrupt enable.
#define SDFM_SDCPARM2_IEL         0x40U     // Low-level interrupt enable
#define SDFM_SDCPARM2_CS1_CS0_S   7U
#define SDFM_SDCPARM2_CS1_CS0_M   0x180U    // Comparator Filter Structure (SincFast/1/2/3)
#define SDFM_SDCPARM2_MFIE        0x200U    // Modulator Failure Interrupt enable
#define SDFM_SDCPARM2_HZEN        0x400U    // High level (Z) Threshold crossing output enable
#define SDFM_SDCPARM2_CEN         0x2000U   // Comparator Enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDATA2 register
//
//*************************************************************************************************
#define SDFM_SDDATA2_DATA16_S     0U
#define SDFM_SDDATA2_DATA16_M     0xFFFFU       // Lo-order 16b in 32b mode
#define SDFM_SDDATA2_DATA32HI_S   16U
#define SDFM_SDDATA2_DATA32HI_M   0xFFFF0000U   // Hi-order 16b in 32b mode, 16-bit Data in 16b
                                                // mode

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDATFIFO2 register
//
//*************************************************************************************************
#define SDFM_SDDATFIFO2_DATA16_S     0U
#define SDFM_SDDATFIFO2_DATA16_M     0xFFFFU       // Lo-order 16b in 32b mode
#define SDFM_SDDATFIFO2_DATA32HI_S   16U
#define SDFM_SDDATFIFO2_DATA32HI_M   0xFFFF0000U   // Hi-order 16b in 32b mode, 16-bit Data in 16b
                                                   // mode

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCMPHZ2 register
//
//*************************************************************************************************
#define SDFM_SDCMPHZ2_HLTZ_S   0U
#define SDFM_SDCMPHZ2_HLTZ_M   0x7FFFU   // High-level threshold (Z) for the comparator filter
                                         // output

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDFIFOCTL2 register
//
//*************************************************************************************************
#define SDFM_SDFIFOCTL2_SDFFIL_S   0U
#define SDFM_SDFIFOCTL2_SDFFIL_M   0x1FU     // SDFIFO Interrupt Level
#define SDFM_SDFIFOCTL2_SDFFST_S   6U
#define SDFM_SDFIFOCTL2_SDFFST_M   0x7C0U    // SDFIFO Status
#define SDFM_SDFIFOCTL2_FFIEN      0x1000U   // SDFIFO data ready Interrupt Enable
#define SDFM_SDFIFOCTL2_FFEN       0x2000U   // SDFIFO Enable
#define SDFM_SDFIFOCTL2_DRINTSEL   0x4000U   // Data-Ready Interrupt Source Select
#define SDFM_SDFIFOCTL2_OVFIEN     0x8000U   // SDFIFO Overflow interrupt enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDSYNC2 register
//
//*************************************************************************************************
#define SDFM_SDSYNC2_SYNCSEL_S     0U
#define SDFM_SDSYNC2_SYNCSEL_M     0x3FU    // SDSYNC Source Select
#define SDFM_SDSYNC2_WTSYNCEN      0x40U    // Wait-for-Sync Enable
#define SDFM_SDSYNC2_WTSYNFLG      0x80U    // Wait-for-Sync Flag
#define SDFM_SDSYNC2_WTSYNCLR      0x100U   // Wait-for-Sync Flag Clear
#define SDFM_SDSYNC2_FFSYNCCLREN   0x200U   // FIFO Clear-on-SDSYNC Enable
#define SDFM_SDSYNC2_WTSCLREN      0x400U   // WTSYNFLG Clear-on-FIFOINT Enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCTLPARM3 register
//
//*************************************************************************************************
#define SDFM_SDCTLPARM3_MOD_S   0U
#define SDFM_SDCTLPARM3_MOD_M   0x3U   // Modulator clocking modes

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDFPARM3 register
//
//*************************************************************************************************
#define SDFM_SDDFPARM3_DOSR_S     0U
#define SDFM_SDDFPARM3_DOSR_M     0xFFU     // Data Filter Oversample Ratio= DOSR+1
#define SDFM_SDDFPARM3_FEN        0x100U    // Filter Enable
#define SDFM_SDDFPARM3_AE         0x200U    // Ack Enable
#define SDFM_SDDFPARM3_SST_S      10U
#define SDFM_SDDFPARM3_SST_M      0xC00U    // Data filter Structure (SincFast/1/2/3)
#define SDFM_SDDFPARM3_SDSYNCEN   0x1000U   // Data Filter Reset Enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDPARM3 register
//
//*************************************************************************************************
#define SDFM_SDDPARM3_DR     0x400U    // Data Representation (0/1 = 16/32b 2's complement)
#define SDFM_SDDPARM3_SH_S   11U
#define SDFM_SDDPARM3_SH_M   0xF800U   // Shift Control (# bits to shift in 16b mode)

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCMPH3 register
//
//*************************************************************************************************
#define SDFM_SDCMPH3_HLT_S   0U
#define SDFM_SDCMPH3_HLT_M   0x7FFFU   // High-level threshold for the comparator filter output

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCMPL3 register
//
//*************************************************************************************************
#define SDFM_SDCMPL3_LLT_S   0U
#define SDFM_SDCMPL3_LLT_M   0x7FFFU   // Low-level threshold for the comparator filter output

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCPARM3 register
//
//*************************************************************************************************
#define SDFM_SDCPARM3_COSR_S      0U
#define SDFM_SDCPARM3_COSR_M      0x1FU     // Comparator Oversample Ratio. Actual rate COSR+1
#define SDFM_SDCPARM3_IEH         0x20U     // High-level Interrupt enable.
#define SDFM_SDCPARM3_IEL         0x40U     // Low-level interrupt enable
#define SDFM_SDCPARM3_CS1_CS0_S   7U
#define SDFM_SDCPARM3_CS1_CS0_M   0x180U    // Comparator Filter Structure (SincFast/1/2/3)
#define SDFM_SDCPARM3_MFIE        0x200U    // Modulator Failure Interrupt enable
#define SDFM_SDCPARM3_HZEN        0x400U    // High level (Z) Threshold crossing output enable
#define SDFM_SDCPARM3_CEN         0x2000U   // Comparator Enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDATA3 register
//
//*************************************************************************************************
#define SDFM_SDDATA3_DATA16_S     0U
#define SDFM_SDDATA3_DATA16_M     0xFFFFU       // Lo-order 16b in 32b mode
#define SDFM_SDDATA3_DATA32HI_S   16U
#define SDFM_SDDATA3_DATA32HI_M   0xFFFF0000U   // Hi-order 16b in 32b mode, 16-bit Data in 16b
                                                // mode

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDATFIFO3 register
//
//*************************************************************************************************
#define SDFM_SDDATFIFO3_DATA16_S     0U
#define SDFM_SDDATFIFO3_DATA16_M     0xFFFFU       // Lo-order 16b in 32b mode
#define SDFM_SDDATFIFO3_DATA32HI_S   16U
#define SDFM_SDDATFIFO3_DATA32HI_M   0xFFFF0000U   // Hi-order 16b in 32b mode, 16-bit Data in 16b
                                                   // mode

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCMPHZ3 register
//
//*************************************************************************************************
#define SDFM_SDCMPHZ3_HLTZ_S   0U
#define SDFM_SDCMPHZ3_HLTZ_M   0x7FFFU   // High-level threshold (Z) for the comparator filter
                                         // output

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDFIFOCTL3 register
//
//*************************************************************************************************
#define SDFM_SDFIFOCTL3_SDFFIL_S   0U
#define SDFM_SDFIFOCTL3_SDFFIL_M   0x1FU     // SDFIFO Interrupt Level
#define SDFM_SDFIFOCTL3_SDFFST_S   6U
#define SDFM_SDFIFOCTL3_SDFFST_M   0x7C0U    // SDFIFO Status
#define SDFM_SDFIFOCTL3_FFIEN      0x1000U   // SDFIFO data ready Interrupt Enable
#define SDFM_SDFIFOCTL3_FFEN       0x2000U   // SDFIFO Enable
#define SDFM_SDFIFOCTL3_DRINTSEL   0x4000U   // Data-Ready Interrupt Source Select
#define SDFM_SDFIFOCTL3_OVFIEN     0x8000U   // SDFIFO Overflow interrupt enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDSYNC3 register
//
//*************************************************************************************************
#define SDFM_SDSYNC3_SYNCSEL_S     0U
#define SDFM_SDSYNC3_SYNCSEL_M     0x3FU    // SDSYNC Source Select
#define SDFM_SDSYNC3_WTSYNCEN      0x40U    // Wait-for-Sync Enable
#define SDFM_SDSYNC3_WTSYNFLG      0x80U    // Wait-for-Sync Flag
#define SDFM_SDSYNC3_WTSYNCLR      0x100U   // Wait-for-Sync Flag Clear
#define SDFM_SDSYNC3_FFSYNCCLREN   0x200U   // FIFO Clear-on-SDSYNC Enable
#define SDFM_SDSYNC3_WTSCLREN      0x400U   // WTSYNFLG Clear-on-FIFOINT Enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCTLPARM4 register
//
//*************************************************************************************************
#define SDFM_SDCTLPARM4_MOD_S   0U
#define SDFM_SDCTLPARM4_MOD_M   0x3U   // Modulator clocking modes

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDFPARM4 register
//
//*************************************************************************************************
#define SDFM_SDDFPARM4_DOSR_S     0U
#define SDFM_SDDFPARM4_DOSR_M     0xFFU     // Data Filter Oversample Ratio= DOSR+1
#define SDFM_SDDFPARM4_FEN        0x100U    // Filter Enable
#define SDFM_SDDFPARM4_AE         0x200U    // Ack Enable
#define SDFM_SDDFPARM4_SST_S      10U
#define SDFM_SDDFPARM4_SST_M      0xC00U    // Data filter Structure (SincFast/1/2/3)
#define SDFM_SDDFPARM4_SDSYNCEN   0x1000U   // Data Filter Reset Enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDPARM4 register
//
//*************************************************************************************************
#define SDFM_SDDPARM4_DR     0x400U    // Data Representation (0/1 = 16/32b 2's complement)
#define SDFM_SDDPARM4_SH_S   11U
#define SDFM_SDDPARM4_SH_M   0xF800U   // Shift Control (# bits to shift in 16b mode)

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCMPH4 register
//
//*************************************************************************************************
#define SDFM_SDCMPH4_HLT_S   0U
#define SDFM_SDCMPH4_HLT_M   0x7FFFU   // High-level threshold for the comparator filter output

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCMPL4 register
//
//*************************************************************************************************
#define SDFM_SDCMPL4_LLT_S   0U
#define SDFM_SDCMPL4_LLT_M   0x7FFFU   // Low-level threshold for the comparator filter output

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCPARM4 register
//
//*************************************************************************************************
#define SDFM_SDCPARM4_COSR_S      0U
#define SDFM_SDCPARM4_COSR_M      0x1FU     // Comparator Oversample Ratio. Actual rate COSR+1
#define SDFM_SDCPARM4_IEH         0x20U     // High-level Interrupt enable.
#define SDFM_SDCPARM4_IEL         0x40U     // Low-level interrupt enable
#define SDFM_SDCPARM4_CS1_CS0_S   7U
#define SDFM_SDCPARM4_CS1_CS0_M   0x180U    // Comparator Filter Structure (SincFast/1/2/3)
#define SDFM_SDCPARM4_MFIE        0x200U    // Modulator Failure Interrupt enable
#define SDFM_SDCPARM4_HZEN        0x400U    // High level (Z) Threshold crossing output enable
#define SDFM_SDCPARM4_CEN         0x2000U   // Comparator Enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDATA4 register
//
//*************************************************************************************************
#define SDFM_SDDATA4_DATA16_S     0U
#define SDFM_SDDATA4_DATA16_M     0xFFFFU       // Lo-order 16b in 32b mode
#define SDFM_SDDATA4_DATA32HI_S   16U
#define SDFM_SDDATA4_DATA32HI_M   0xFFFF0000U   // Hi-order 16b in 32b mode, 16-bit Data in 16b
                                                // mode

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDDATFIFO4 register
//
//*************************************************************************************************
#define SDFM_SDDATFIFO4_DATA16_S     0U
#define SDFM_SDDATFIFO4_DATA16_M     0xFFFFU       // Lo-order 16b in 32b mode
#define SDFM_SDDATFIFO4_DATA32HI_S   16U
#define SDFM_SDDATFIFO4_DATA32HI_M   0xFFFF0000U   // Hi-order 16b in 32b mode, 16-bit Data in 16b
                                                   // mode

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDCMPHZ4 register
//
//*************************************************************************************************
#define SDFM_SDCMPHZ4_HLTZ_S   0U
#define SDFM_SDCMPHZ4_HLTZ_M   0x7FFFU   // High-level threshold (Z) for the comparator filter
                                         // output

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDFIFOCTL4 register
//
//*************************************************************************************************
#define SDFM_SDFIFOCTL4_SDFFIL_S   0U
#define SDFM_SDFIFOCTL4_SDFFIL_M   0x1FU     // SDFIFO Interrupt Level
#define SDFM_SDFIFOCTL4_SDFFST_S   6U
#define SDFM_SDFIFOCTL4_SDFFST_M   0x7C0U    // SDFIFO Status
#define SDFM_SDFIFOCTL4_FFIEN      0x1000U   // SDFIFO data ready Interrupt Enable
#define SDFM_SDFIFOCTL4_FFEN       0x2000U   // SDFIFO Enable
#define SDFM_SDFIFOCTL4_DRINTSEL   0x4000U   // Data-Ready Interrupt Source Select
#define SDFM_SDFIFOCTL4_OVFIEN     0x8000U   // SDFIFO Overflow interrupt enable

//*************************************************************************************************
//
// The following are defines for the bit fields in the SDSYNC4 register
//
//*************************************************************************************************
#define SDFM_SDSYNC4_SYNCSEL_S     0U
#define SDFM_SDSYNC4_SYNCSEL_M     0x3FU    // SDSYNC Source Select
#define SDFM_SDSYNC4_WTSYNCEN      0x40U    // Wait-for-Sync Enable
#define SDFM_SDSYNC4_WTSYNFLG      0x80U    // Wait-for-Sync Flag
#define SDFM_SDSYNC4_WTSYNCLR      0x100U   // Wait-for-Sync Flag Clear
#define SDFM_SDSYNC4_FFSYNCCLREN   0x200U   // FIFO Clear-on-SDSYNC Enable
#define SDFM_SDSYNC4_WTSCLREN      0x400U   // WTSYNFLG Clear-on-FIFOINT Enable



#endif
