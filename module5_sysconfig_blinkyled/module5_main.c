//############################################################################
//
// FILE: module5_main.c
//
// TITLE: Lab - Module 5 (SysConfig)
//
// C2K ACADEMY URL: https://dev.ti.com/tirex/explore/node?node=AOpze8ebskysmgASY3VKSA__jEBbtmC__LATEST
//
//! \addtogroup academy_lab_list
//! <h1> Using SysConfig Lab </h1>
//!
//! TI code composer studio includes a GUI-based for system configuration tool
//! (SysConfig). It can be used for pinmux configuration, peripheral setup, and
//! generation of c-code using C2000Ware DriverLib API. The generated c-code is
//! automatically included in the project. The lab exercise in this module is
//! broken into two parts: * Create blinky_led example using sysconfig GUI
//! tool. This will be similar to lab excercise in module 1 - blinks two LEDs
//! on the board. * Add CPU-Timer configuration, and timer interrupt-handler to
//! control the frequency of LEDs toggle
//!
//! \b External \b Connections \n
//!  - None.
//!
//! \b Watch \b Variables \n
//!  - None.
//!
//############################################################################
// $Copyright:
// Copyright (C) 2022 Texas Instruments Incorporated - http://www.ti.com
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
//############################################################################

#include "driverlib.h"
#include "device.h"
#include "board.h"

//Flag to save current state of GPIO
int  g_gpioStatus = 0;

//
// Main
//
void main(void)
{
    // Device Initialization
    Device_init();

    //
    // Initializes PIE and clears PIE registers. Disables CPU interrupts.
    //
    Interrupt_initModule();

    //
    // Initializes the PIE vector table with pointers to the shell Interrupt
    // Service Routines (ISR).
    //
    Interrupt_initVectorTable();

	Board_init();

    //
    // Enable Global Interrupt (INTM) and realtime interrupt (DBGM)
    //
    EINT;
    ERTM;

#if 1 /* When using CPUTimer for toggle frequency */
	while(1)
	{

	}
#else   /* When using Delay mechanism */
    while(1)
    {
        if(g_gpioStatus)
        {
            GPIO_writePin(Blink_LED_1, 0);
            GPIO_writePin(Blink_LED_2, 1);
            g_gpioStatus = 0;
        }
        else
        {
            GPIO_writePin(Blink_LED_1, 1);
            GPIO_writePin(Blink_LED_2, 0);
            g_gpioStatus = 1;
        }

        // Delay for a bit.
        DEVICE_DELAY_US(500000);
    }	
#endif
	
}

__interrupt void INT_Led_Toggle_Timer_ISR(void)
{
    if(g_gpioStatus)
    {
        GPIO_writePin(Blink_LED_1, 0);
        GPIO_writePin(Blink_LED_2, 1);
        g_gpioStatus = 0;
    }
    else
    {
        GPIO_writePin(Blink_LED_1, 1);
        GPIO_writePin(Blink_LED_2, 0);
        g_gpioStatus = 1;
    }

    Interrupt_clearACKGroup(INTERRUPT_ACK_GROUP1);
}

//
// End of File
//
