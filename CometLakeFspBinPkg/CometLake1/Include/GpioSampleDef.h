/** @file
  Sample enum definitions for GPIO table.

 @copyright
  Copyright (c) 2014 - 2019, Intel Corporation. All rights reserved.<BR>

  SPDX-License-Identifier: BSD-2-Clause-Patent

@par Specification Reference:
**/

#ifndef __GPIOCONFIG_H__
#define __GPIOCONFIG_H__
#include <FsptUpd.h>
#include <FspmUpd.h>
#include <FspsUpd.h>

/*
  SKL LP GPIO pins
  Use below for functions from PCH GPIO Lib which
  require GpioPad as argument. Encoding used here
  has all information required by library functions
*/
#define GPIO_SKL_LP_GPP_A0      0x02000000
#define GPIO_SKL_LP_GPP_A1      0x02000001
#define GPIO_SKL_LP_GPP_A2      0x02000002
#define GPIO_SKL_LP_GPP_A3      0x02000003
#define GPIO_SKL_LP_GPP_A4      0x02000004
#define GPIO_SKL_LP_GPP_A5      0x02000005
#define GPIO_SKL_LP_GPP_A6      0x02000006
#define GPIO_SKL_LP_GPP_A7      0x02000007
#define GPIO_SKL_LP_GPP_A8      0x02000008
#define GPIO_SKL_LP_GPP_A9      0x02000009
#define GPIO_SKL_LP_GPP_A10     0x0200000A
#define GPIO_SKL_LP_GPP_A11     0x0200000B
#define GPIO_SKL_LP_GPP_A12     0x0200000C
#define GPIO_SKL_LP_GPP_A13     0x0200000D
#define GPIO_SKL_LP_GPP_A14     0x0200000E
#define GPIO_SKL_LP_GPP_A15     0x0200000F
#define GPIO_SKL_LP_GPP_A16     0x02000010
#define GPIO_SKL_LP_GPP_A17     0x02000011
#define GPIO_SKL_LP_GPP_A18     0x02000012
#define GPIO_SKL_LP_GPP_A19     0x02000013
#define GPIO_SKL_LP_GPP_A20     0x02000014
#define GPIO_SKL_LP_GPP_A21     0x02000015
#define GPIO_SKL_LP_GPP_A22     0x02000016
#define GPIO_SKL_LP_GPP_A23     0x02000017
#define GPIO_SKL_LP_GPP_B0      0x02010000
#define GPIO_SKL_LP_GPP_B1      0x02010001
#define GPIO_SKL_LP_GPP_B2      0x02010002
#define GPIO_SKL_LP_GPP_B3      0x02010003
#define GPIO_SKL_LP_GPP_B4      0x02010004
#define GPIO_SKL_LP_GPP_B5      0x02010005
#define GPIO_SKL_LP_GPP_B6      0x02010006
#define GPIO_SKL_LP_GPP_B7      0x02010007
#define GPIO_SKL_LP_GPP_B8      0x02010008
#define GPIO_SKL_LP_GPP_B9      0x02010009
#define GPIO_SKL_LP_GPP_B10     0x0201000A
#define GPIO_SKL_LP_GPP_B11     0x0201000B
#define GPIO_SKL_LP_GPP_B12     0x0201000C
#define GPIO_SKL_LP_GPP_B13     0x0201000D
#define GPIO_SKL_LP_GPP_B14     0x0201000E
#define GPIO_SKL_LP_GPP_B15     0x0201000F
#define GPIO_SKL_LP_GPP_B16     0x02010010
#define GPIO_SKL_LP_GPP_B17     0x02010011
#define GPIO_SKL_LP_GPP_B18     0x02010012
#define GPIO_SKL_LP_GPP_B19     0x02010013
#define GPIO_SKL_LP_GPP_B20     0x02010014
#define GPIO_SKL_LP_GPP_B21     0x02010015
#define GPIO_SKL_LP_GPP_B22     0x02010016
#define GPIO_SKL_LP_GPP_B23     0x02010017
#define GPIO_SKL_LP_GPP_C0      0x02020000
#define GPIO_SKL_LP_GPP_C1      0x02020001
#define GPIO_SKL_LP_GPP_C2      0x02020002
#define GPIO_SKL_LP_GPP_C3      0x02020003
#define GPIO_SKL_LP_GPP_C4      0x02020004
#define GPIO_SKL_LP_GPP_C5      0x02020005
#define GPIO_SKL_LP_GPP_C6      0x02020006
#define GPIO_SKL_LP_GPP_C7      0x02020007
#define GPIO_SKL_LP_GPP_C8      0x02020008
#define GPIO_SKL_LP_GPP_C9      0x02020009
#define GPIO_SKL_LP_GPP_C10     0x0202000A
#define GPIO_SKL_LP_GPP_C11     0x0202000B
#define GPIO_SKL_LP_GPP_C12     0x0202000C
#define GPIO_SKL_LP_GPP_C13     0x0202000D
#define GPIO_SKL_LP_GPP_C14     0x0202000E
#define GPIO_SKL_LP_GPP_C15     0x0202000F
#define GPIO_SKL_LP_GPP_C16     0x02020010
#define GPIO_SKL_LP_GPP_C17     0x02020011
#define GPIO_SKL_LP_GPP_C18     0x02020012
#define GPIO_SKL_LP_GPP_C19     0x02020013
#define GPIO_SKL_LP_GPP_C20     0x02020014
#define GPIO_SKL_LP_GPP_C21     0x02020015
#define GPIO_SKL_LP_GPP_C22     0x02020016
#define GPIO_SKL_LP_GPP_C23     0x02020017
#define GPIO_SKL_LP_GPP_D0      0x02030000
#define GPIO_SKL_LP_GPP_D1      0x02030001
#define GPIO_SKL_LP_GPP_D2      0x02030002
#define GPIO_SKL_LP_GPP_D3      0x02030003
#define GPIO_SKL_LP_GPP_D4      0x02030004
#define GPIO_SKL_LP_GPP_D5      0x02030005
#define GPIO_SKL_LP_GPP_D6      0x02030006
#define GPIO_SKL_LP_GPP_D7      0x02030007
#define GPIO_SKL_LP_GPP_D8      0x02030008
#define GPIO_SKL_LP_GPP_D9      0x02030009
#define GPIO_SKL_LP_GPP_D10     0x0203000A
#define GPIO_SKL_LP_GPP_D11     0x0203000B
#define GPIO_SKL_LP_GPP_D12     0x0203000C
#define GPIO_SKL_LP_GPP_D13     0x0203000D
#define GPIO_SKL_LP_GPP_D14     0x0203000E
#define GPIO_SKL_LP_GPP_D15     0x0203000F
#define GPIO_SKL_LP_GPP_D16     0x02030010
#define GPIO_SKL_LP_GPP_D17     0x02030011
#define GPIO_SKL_LP_GPP_D18     0x02030012
#define GPIO_SKL_LP_GPP_D19     0x02030013
#define GPIO_SKL_LP_GPP_D20     0x02030014
#define GPIO_SKL_LP_GPP_D21     0x02030015
#define GPIO_SKL_LP_GPP_D22     0x02030016
#define GPIO_SKL_LP_GPP_D23     0x02030017
#define GPIO_SKL_LP_GPP_E0      0x02040000
#define GPIO_SKL_LP_GPP_E1      0x02040001
#define GPIO_SKL_LP_GPP_E2      0x02040002
#define GPIO_SKL_LP_GPP_E3      0x02040003
#define GPIO_SKL_LP_GPP_E4      0x02040004
#define GPIO_SKL_LP_GPP_E5      0x02040005
#define GPIO_SKL_LP_GPP_E6      0x02040006
#define GPIO_SKL_LP_GPP_E7      0x02040007
#define GPIO_SKL_LP_GPP_E8      0x02040008
#define GPIO_SKL_LP_GPP_E9      0x02040009
#define GPIO_SKL_LP_GPP_E10     0x0204000A
#define GPIO_SKL_LP_GPP_E11     0x0204000B
#define GPIO_SKL_LP_GPP_E12     0x0204000C
#define GPIO_SKL_LP_GPP_E13     0x0204000D
#define GPIO_SKL_LP_GPP_E14     0x0204000E
#define GPIO_SKL_LP_GPP_E15     0x0204000F
#define GPIO_SKL_LP_GPP_E16     0x02040010
#define GPIO_SKL_LP_GPP_E17     0x02040011
#define GPIO_SKL_LP_GPP_E18     0x02040012
#define GPIO_SKL_LP_GPP_E19     0x02040013
#define GPIO_SKL_LP_GPP_E20     0x02040014
#define GPIO_SKL_LP_GPP_E21     0x02040015
#define GPIO_SKL_LP_GPP_E22     0x02040016
#define GPIO_SKL_LP_GPP_E23     0x02040017
#define GPIO_SKL_LP_GPP_F0      0x02050000
#define GPIO_SKL_LP_GPP_F1      0x02050001
#define GPIO_SKL_LP_GPP_F2      0x02050002
#define GPIO_SKL_LP_GPP_F3      0x02050003
#define GPIO_SKL_LP_GPP_F4      0x02050004
#define GPIO_SKL_LP_GPP_F5      0x02050005
#define GPIO_SKL_LP_GPP_F6      0x02050006
#define GPIO_SKL_LP_GPP_F7      0x02050007
#define GPIO_SKL_LP_GPP_F8      0x02050008
#define GPIO_SKL_LP_GPP_F9      0x02050009
#define GPIO_SKL_LP_GPP_F10     0x0205000A
#define GPIO_SKL_LP_GPP_F11     0x0205000B
#define GPIO_SKL_LP_GPP_F12     0x0205000C
#define GPIO_SKL_LP_GPP_F13     0x0205000D
#define GPIO_SKL_LP_GPP_F14     0x0205000E
#define GPIO_SKL_LP_GPP_F15     0x0205000F
#define GPIO_SKL_LP_GPP_F16     0x02050010
#define GPIO_SKL_LP_GPP_F17     0x02050011
#define GPIO_SKL_LP_GPP_F18     0x02050012
#define GPIO_SKL_LP_GPP_F19     0x02050013
#define GPIO_SKL_LP_GPP_F20     0x02050014
#define GPIO_SKL_LP_GPP_F21     0x02050015
#define GPIO_SKL_LP_GPP_F22     0x02050016
#define GPIO_SKL_LP_GPP_F23     0x02050017
#define GPIO_SKL_LP_GPP_G0      0x02060000
#define GPIO_SKL_LP_GPP_G1      0x02060001
#define GPIO_SKL_LP_GPP_G2      0x02060002
#define GPIO_SKL_LP_GPP_G3      0x02060003
#define GPIO_SKL_LP_GPP_G4      0x02060004
#define GPIO_SKL_LP_GPP_G5      0x02060005
#define GPIO_SKL_LP_GPP_G6      0x02060006
#define GPIO_SKL_LP_GPP_G7      0x02060007
#define GPIO_SKL_LP_GPD0        0x02070000
#define GPIO_SKL_LP_GPD1        0x02070001
#define GPIO_SKL_LP_GPD2        0x02070002
#define GPIO_SKL_LP_GPD3        0x02070003
#define GPIO_SKL_LP_GPD4        0x02070004
#define GPIO_SKL_LP_GPD5        0x02070005
#define GPIO_SKL_LP_GPD6        0x02070006
#define GPIO_SKL_LP_GPD7        0x02070007
#define GPIO_SKL_LP_GPD8        0x02070008
#define GPIO_SKL_LP_GPD9        0x02070009
#define GPIO_SKL_LP_GPD10       0x0207000A
#define GPIO_SKL_LP_GPD11       0x0207000B

#define END_OF_GPIO_TABLE   0xFFFFFFFF

//Sample GPIO Table

static GPIO_INIT_CONFIG mGpioTableLpDdr3Rvp3[] =
{
//skip for eSPI function  {GPIO_SKL_LP_GPP_A0, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//H_RCIN_N
//skip for eSPI function  {GPIO_SKL_LP_GPP_A1, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//LPC_AD0_ESPI_IO0
//skip for eSPI function  {GPIO_SKL_LP_GPP_A2, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//LPC_AD1_ESPI_IO1
//skip for eSPI function  {GPIO_SKL_LP_GPP_A3, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//LPC_AD2_ESPI_IO2
//skip for eSPI function  {GPIO_SKL_LP_GPP_A4, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//LPC_AD3_ESPI_IO3
//skip for eSPI function  {GPIO_SKL_LP_GPP_A5,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//LPC_FRAME_ESPI_CS_N
//skip for eSPI function  {GPIO_SKL_LP_GPP_A6,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//INT_SERIRQ
//skip for eSPI function  {GPIO_SKL_LP_GPP_A7,  {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//PM_SLP_S0ix_R_N
  {GPIO_SKL_LP_GPP_A8,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//PM_CLKRUN_N
//skip for eSPI function    {GPIO_SKL_LP_GPP_A9,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//LPC_CLK_ESPI_CLK
  {GPIO_SKL_LP_GPP_A10, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//PCH_CLK_PCI_TPM
  {GPIO_SKL_LP_GPP_A11, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirIn,    GpioOutDefault, GpioIntLevel | GpioIntApic, GpioHostDeepReset,  GpioTermNone}},//EC_HID_INTR
  {GPIO_SKL_LP_GPP_A12, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//M.2_WWAN_GNSS_UART_RST_N
  {GPIO_SKL_LP_GPP_A13, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SUS_PWR_ACK_R
//skip for eSPI function    {GPIO_SKL_LP_GPP_A14, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//PM_SUS_STAT_ESPI_RST_N
  {GPIO_SKL_LP_GPP_A15, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//SUSACK_R_N
  {GPIO_SKL_LP_GPP_A16, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirIn,    GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SD_1P8_SEL
  {GPIO_SKL_LP_GPP_A17, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SD_PWR_EN_N
  {GPIO_SKL_LP_GPP_A18, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//ISH_GP_0_SENSOR
  {GPIO_SKL_LP_GPP_A19, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//ISH_GP_1_SENSOR
  {GPIO_SKL_LP_GPP_A20, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//ISH_GP_2_SENSOR
  {GPIO_SKL_LP_GPP_A21, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//GNSS_CHUB_IRQ
  {GPIO_SKL_LP_GPP_A22, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//FPS_SLP_N
  {GPIO_SKL_LP_GPP_A23, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirIn,    GpioOutDefault, GpioIntLevel | GpioIntApic, GpioHostDeepReset,  GpioTermNone}},//FPS_DRDY
  {GPIO_SKL_LP_GPP_B0,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//V0.85A_VID0
  {GPIO_SKL_LP_GPP_B1,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//V0.85A_VID1
  {GPIO_SKL_LP_GPP_B2,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//GP_VRALERTB
  {GPIO_SKL_LP_GPP_B3,  {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirIn,    GpioOutDefault, GpioIntLevel | GpioIntApic, GpioPlatformReset,  GpioTermNone}},//TCH_PAD_INTR_R_N
  {GPIO_SKL_LP_GPP_B4,  {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//BT_RF_KILL_N
  {GPIO_SKL_LP_GPP_B5,  {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirIn,    GpioOutDefault, GpioIntLevel | GpioIntApic, GpioHostDeepReset,  GpioTermNone}},//M.2_BT_UART_WAKE_N
  // {GPIO_SKL_LP_GPP_B6,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//CLK_REQ_SLOT1_N
  // {GPIO_SKL_LP_GPP_B7,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//CLK_REQ_SLOT2_LAN_N
  // {GPIO_SKL_LP_GPP_B8,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//CLK_REQ_M.2_SSD_SLOT3_N
  // {GPIO_SKL_LP_GPP_B9,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//CLK_REQ_M.2_WIGIG_N
  // {GPIO_SKL_LP_GPP_B10, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//CLK_REQ_M.2_WLAN_N
  {GPIO_SKL_LP_GPP_B11, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//MPHY_EXT_PWR_GATEB
  {GPIO_SKL_LP_GPP_B12, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//PCH_SLP_S0_N
  {GPIO_SKL_LP_GPP_B13, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//PLT_RST_N
  {GPIO_SKL_LP_GPP_B14, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//TCH_PNL_PWREN
  {GPIO_SKL_LP_GPP_B15, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirOut,   GpioOutLow,     GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//PCH_NFC_DFU
  {GPIO_SKL_LP_GPP_B16, {GpioPadModeGpio,    GpioHostOwnAcpi, GpioDirInInv, GpioOutDefault, GpioIntLevel | GpioIntSci, GpioPlatformReset,  GpioTermNone}},//M.2_WLAN_WIFI_WAKE_N
  {GPIO_SKL_LP_GPP_B17, {GpioPadModeGpio,    GpioHostOwnAcpi, GpioDirInInv, GpioOutDefault, GpioIntEdge | GpioIntSci, GpioHostDeepReset,  GpioTermWpd20K}},//TBT_CIO_PLUG_EVENT_N
  {GPIO_SKL_LP_GPP_B18, {GpioPadModeGpio,    GpioHostOwnAcpi, GpioDirInInv, GpioOutDefault, GpioIntLevel | GpioIntSci, GpioPlatformReset,  GpioTermWpu20K}},//PCH_SLOT1_WAKE_N
  {GPIO_SKL_LP_GPP_B19, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,   GpioTermNone}},//FPS_GSPI1_CS_R1_N
  {GPIO_SKL_LP_GPP_B20, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//FPS_GSPI1_CLK_R1
  {GPIO_SKL_LP_GPP_B21, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//FPS_GSPI1_MISO_R1
  {GPIO_SKL_LP_GPP_B22, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//FPS_GSPI1_MOSI_R1
  {GPIO_SKL_LP_GPP_B23, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//DISCRETE_GNSS_RESET_N
  {GPIO_SKL_LP_GPP_C0,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SMB_CLK
  {GPIO_SKL_LP_GPP_C1,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//SMB_DATA
  {GPIO_SKL_LP_GPP_C2,  {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//SKIN_THRM_SNSR_ALERT_N
  {GPIO_SKL_LP_GPP_C3,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SML0_CLK
  {GPIO_SKL_LP_GPP_C4,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SML0_DATA
  {GPIO_SKL_LP_GPP_C5,  {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirInInv, GpioOutDefault, GpioIntLevel | GpioIntApic, GpioHostDeepReset, GpioTermWpd20K}},//M.2_WIGIG_WAKE_N
  {GPIO_SKL_LP_GPP_C6,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SML1_CLK
  {GPIO_SKL_LP_GPP_C7,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//SML1_DATA
  {GPIO_SKL_LP_GPP_C8,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_UART0_RXD
  {GPIO_SKL_LP_GPP_C9,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_UART0_TXD
  {GPIO_SKL_LP_GPP_C10, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_UART0_RTS_N
  {GPIO_SKL_LP_GPP_C11, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_UART0_CTS_N
  {GPIO_SKL_LP_GPP_C12, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_UART1_ISH_UART1_RXD
  {GPIO_SKL_LP_GPP_C13, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_UART1_ISH_UART1_TXD
  {GPIO_SKL_LP_GPP_C14, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_UART1_ISH_UART1_RTS_N
  {GPIO_SKL_LP_GPP_C15, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_UART1_ISH_UART1_CTS_N
  {GPIO_SKL_LP_GPP_C16, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_I2C0_SDA
  {GPIO_SKL_LP_GPP_C17, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_I2C0_SCL
  {GPIO_SKL_LP_GPP_C18, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_I2C1_SDA
  {GPIO_SKL_LP_GPP_C19, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_I2C1_SCL
  {GPIO_SKL_LP_GPP_C20, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_UART2_RXD
  {GPIO_SKL_LP_GPP_C21, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_UART2_TXD
  {GPIO_SKL_LP_GPP_C22, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_UART2_RTS_N
  {GPIO_SKL_LP_GPP_C23, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SERIALIO_UART2_CTS_N
  {GPIO_SKL_LP_GPP_D0,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SPI1_TCHPNL_CS_N
  {GPIO_SKL_LP_GPP_D1,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SPI1_TCHPNL_CLK
  {GPIO_SKL_LP_GPP_D2,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SPI1_TCHPNL_MISO
  {GPIO_SKL_LP_GPP_D3,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SPI1_TCHPNL_MOSI
  {GPIO_SKL_LP_GPP_D4,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//CSI2_FLASH_STROBE
  {GPIO_SKL_LP_GPP_D5,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//ISH_I2C0_SDA
  {GPIO_SKL_LP_GPP_D6,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//ISH_I2C0_SCL
  {GPIO_SKL_LP_GPP_D7,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//ISH_I2C1_SDA
  {GPIO_SKL_LP_GPP_D8,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//ISH_I2C1_SCL
  {GPIO_SKL_LP_GPP_D9,  {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirIn,    GpioOutDefault, GpioIntLevel | GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//HOME_BTN
  {GPIO_SKL_LP_GPP_D10, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirIn,    GpioOutDefault, GpioIntLevel | GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SCREEN_LOCK_PCH
  {GPIO_SKL_LP_GPP_D11, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirIn,    GpioOutDefault, GpioIntLevel | GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//VOL_UP_PCH
  {GPIO_SKL_LP_GPP_D12, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirIn,    GpioOutDefault, GpioIntLevel | GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//VOL_DOWN_PCH
  {GPIO_SKL_LP_GPP_D13, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//ISH_UART0_RXD_SML0B_DATA
  {GPIO_SKL_LP_GPP_D14, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//ISH_UART0_TXD_SML0B_CLK
  {GPIO_SKL_LP_GPP_D15, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//ISH_UART0_RTS_N
  {GPIO_SKL_LP_GPP_D16, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//ISH_UART0_CTS_SML0B_ALERT_N
  {GPIO_SKL_LP_GPP_D17, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//DMIC_CLK_1
  {GPIO_SKL_LP_GPP_D18, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//DMIC_DATA_1
  {GPIO_SKL_LP_GPP_D19, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//DMIC_CLK_0
  {GPIO_SKL_LP_GPP_D20, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//DMIC_DATA_0
  {GPIO_SKL_LP_GPP_D21, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SPI1_TCHPNL_IO2
  {GPIO_SKL_LP_GPP_D22, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SPI1_TCHPNL_IO3
  {GPIO_SKL_LP_GPP_D23, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SSP_MCLK
  {GPIO_SKL_LP_GPP_E0,  {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirInInv, GpioOutDefault, GpioIntEdge | GpioIntApic, GpioHostDeepReset,  GpioTermNone}},//SPI_TPM_HDR_IRQ_N
  {GPIO_SKL_LP_GPP_E1,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SATA_ODD_PRSNT_N
  {GPIO_SKL_LP_GPP_E2,  {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntLvlEdgDis | GpioIntApic, GpioHostDeepReset,  GpioTermNone}},//M.2_SSD_SATA2_PCIE3_DET_N
  {GPIO_SKL_LP_GPP_E3,  {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioResumeReset,  GpioTermNone}},//EINK_SSR_DFU_N
  {GPIO_SKL_LP_GPP_E4,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//PCH_NFC_RESET
  {GPIO_SKL_LP_GPP_E5,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SATA1_PHYSLP1_DIRECT_R
  {GPIO_SKL_LP_GPP_E6,  {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirOut,   GpioOutLow,     GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SATA2_PHYSLP2_M.2SSD_R
  {GPIO_SKL_LP_GPP_E8,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//PCH_SATA_LED_N
  {GPIO_SKL_LP_GPP_E9,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//USB_OC_0_WP1_OTG_N
  {GPIO_SKL_LP_GPP_E10, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//USB_OC_1_WP4_N
  {GPIO_SKL_LP_GPP_E11, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//USB_OC_2_WP2_WP3_WP5_R_N
  {GPIO_SKL_LP_GPP_E12, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirIn,    GpioOutDefault, GpioIntLevel | GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//PCH_NFC_IRQ
  {GPIO_SKL_LP_GPP_E13, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//DDI1_HPD_Q
  {GPIO_SKL_LP_GPP_E14, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//DDI2_HPD_Q
  {GPIO_SKL_LP_GPP_E15, {GpioPadModeGpio,    GpioHostOwnAcpi, GpioDirInInv, GpioOutDefault, GpioIntEdge | GpioIntSmi, GpioHostDeepReset,  GpioTermNone}},//SMC_EXTSMI_R_N
  {GPIO_SKL_LP_GPP_E16, {GpioPadModeGpio,    GpioHostOwnAcpi, GpioDirInInv, GpioOutDefault, GpioIntLevel | GpioIntSci, GpioPlatformReset,  GpioTermNone}},//SMC_RUNTIME_SCI_R_N
  {GPIO_SKL_LP_GPP_E17, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//EDP_HPD
  {GPIO_SKL_LP_GPP_E18, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//DDI1_CTRL_CLK
  {GPIO_SKL_LP_GPP_E19, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//DDI1_CTRL_DATA
  {GPIO_SKL_LP_GPP_E20, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//DDI2_CTRL_CLK
  {GPIO_SKL_LP_GPP_E21, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//DDI2_CTRL_DATA
  {GPIO_SKL_LP_GPP_E22, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirInInv, GpioOutDefault, GpioIntLevel | GpioIntApic, GpioHostDeepReset,  GpioTermNone}},//PCH_CODEC_IRQ
  {GPIO_SKL_LP_GPP_E23, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioHostDeepReset,  GpioTermWpd20K}},//TCH_PNL_RST_N
  {GPIO_SKL_LP_GPP_F0,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SSP2_SCLK
  {GPIO_SKL_LP_GPP_F1,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SSP2_SFRM
  {GPIO_SKL_LP_GPP_F2,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SSP2_TXD
  {GPIO_SKL_LP_GPP_F3,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SSP2_RXD
  {GPIO_SKL_LP_GPP_F4,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset, GpioTolerance1v8 | GpioTermNone}},//SERIALIO_I2C2_SDA
  {GPIO_SKL_LP_GPP_F5,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset, GpioTolerance1v8 | GpioTermNone}},//SERIALIO_I2C2_SCL
  {GPIO_SKL_LP_GPP_F6,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset, GpioTolerance1v8 | GpioTermNone}},//SERIALIO_I2C3_SDA
  {GPIO_SKL_LP_GPP_F7,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset, GpioTolerance1v8 | GpioTermNone}},//SERIALIO_I2C3_SCL
  {GPIO_SKL_LP_GPP_F8,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset, GpioTolerance1v8 | GpioTermNone}},//SERIALIO_I2C4_SDA
  {GPIO_SKL_LP_GPP_F9,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset, GpioTolerance1v8 | GpioTermNone}},//SERIALIO_I2C4_SCL
  {GPIO_SKL_LP_GPP_F10, {GpioPadModeNative2, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset, GpioTolerance1v8 | GpioTermNone}},//SERIALIO_I2C5_ISH_12C2_SDA
  {GPIO_SKL_LP_GPP_F11, {GpioPadModeNative2, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset, GpioTolerance1v8 | GpioTermNone}},//SERIALIO_I2C5_ISH_12C2_SCL
  {GPIO_SKL_LP_GPP_F12, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//EMMC_CMD
  {GPIO_SKL_LP_GPP_F13, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//EMMC_DATA0
  {GPIO_SKL_LP_GPP_F14, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//EMMC_DATA1
  {GPIO_SKL_LP_GPP_F15, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//EMMC_DATA2
  {GPIO_SKL_LP_GPP_F16, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//EMMC_DATA3
  {GPIO_SKL_LP_GPP_F17, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//EMMC_DATA4
  {GPIO_SKL_LP_GPP_F18, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//EMMC_DATA5
  {GPIO_SKL_LP_GPP_F19, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//EMMC_DATA6
  {GPIO_SKL_LP_GPP_F20, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//EMMC_DATA7
  {GPIO_SKL_LP_GPP_F21, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//EMMC_RCLK
  {GPIO_SKL_LP_GPP_F22, {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//EMMC_CLK
  {GPIO_SKL_LP_GPP_F23, {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirIn,    GpioOutDefault, GpioIntLevel | GpioIntApic, GpioHostDeepReset,  GpioTermNone}},//PCH_M.2_WWAN_UIM_SIM_DET
  {GPIO_SKL_LP_GPP_G0,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SD_CMD
  {GPIO_SKL_LP_GPP_G1,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SD_DATA0
  {GPIO_SKL_LP_GPP_G2,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SD_DATA1
  {GPIO_SKL_LP_GPP_G3,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SD_DATA2
  {GPIO_SKL_LP_GPP_G4,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SD_DATA3
  {GPIO_SKL_LP_GPP_G5,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SD_CDB
  {GPIO_SKL_LP_GPP_G6,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SD_CLK
  {GPIO_SKL_LP_GPP_G7,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioHostDeepReset,  GpioTermNone}},//SD_WP
  {GPIO_SKL_LP_GPD0,   {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioDswReset,  GpioTermNone}},//PM_BATLOW_R_N
  {GPIO_SKL_LP_GPD1,   {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioDswReset,  GpioTermNone}},//AC_PRESENT_R
  {GPIO_SKL_LP_GPD2,   {GpioPadModeNative1, GpioHostOwnAcpi, GpioDirIn,    GpioOutDefault, GpioIntLevel | GpioIntSci, GpioDswReset,  GpioTermNone}},//LANWAKE_SMC_WAKE_SCI_N
  {GPIO_SKL_LP_GPD3,   {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioDswReset,  GpioTermWpu20K}},//PM_PWRBTN_R_N
  {GPIO_SKL_LP_GPD4,   {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioDswReset,  GpioTermNone}},//SLP_S3_R_N
  {GPIO_SKL_LP_GPD5,   {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioDswReset,  GpioTermNone}},//SLP_S4_R_N
  {GPIO_SKL_LP_GPD6,   {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioDswReset,  GpioTermNone}},//SLP_M_R_N
  {GPIO_SKL_LP_GPD7,   {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioDswReset,  GpioTermNone}},//USB_WAKEOUT_INTRUDET_N
  {GPIO_SKL_LP_GPD8,   {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioDswReset,  GpioTermNone}},//SUS_CLK
  {GPIO_SKL_LP_GPD9,   {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioDswReset,  GpioTermNone}},//PCH_SLP_WLAN_N
  {GPIO_SKL_LP_GPD10,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioDswReset,  GpioTermNone}},//SLP_S5_R_N
  {GPIO_SKL_LP_GPD11,  {GpioPadModeNative1, GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioDswReset,  GpioTermNone}},//PM_LANPHY_ENABLE
  {END_OF_GPIO_TABLE,  {GpioPadModeGpio,    GpioHostOwnGpio, GpioDirNone,  GpioOutDefault, GpioIntDis, GpioDswReset,  GpioTermNone}},//Marking End of Table
};

#endif   //_GPIO_CONFIG_H_