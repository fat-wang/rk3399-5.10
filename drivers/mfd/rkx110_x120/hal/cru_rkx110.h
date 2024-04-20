/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2022 Rockchip Electronics Co. Ltd.
 *
 * Author: Joseph Chen <chenjh@rock-chips.com>
 */

#ifndef _CRU_RKX110_H

#include "cru_core.h"

// ======================== RXCRU module definition START ======================
// RXCRU_SOFTRST_CON01(Offset:0x404)
#define RKX110_SRST_PRESETN_RX_CRU                           0x00000010
#define RKX110_SRST_PRESETN_RX_GRF                           0x00000011
#define RKX110_SRST_PRESETN_RX_GPIO0                         0x00000012
#define RKX110_SRST_DRESETN_RX_GPIO0                         0x00000013
#define RKX110_SRST_PRESETN_RX_GPIO1                         0x00000014
#define RKX110_SRST_DRESETN_RX_GPIO1                         0x00000015
#define RKX110_SRST_PRESETN_RX_EFUSE                         0x00000016
#define RKX110_SRST_RESETN_RX_EFUSE                          0x00000017
#define RKX110_SRST_PRESETN_MIPI_GRF_RX0                     0x0000001A
#define RKX110_SRST_PRESETN_MIPI_GRF_RX1                     0x0000001B
#define RKX110_SRST_PRESETN_RX_I2C2APB                       0x0000001E
#define RKX110_SRST_PRESETN_RX_I2C2APB_DEBUG                 0x0000001F

// RXCRU_SOFTRST_CON02(Offset:0x408)
#define RKX110_SRST_DRESETN_VICAP_CSI                        0x00000021
#define RKX110_SRST_HRESETN_VICAP                            0x00000022
#define RKX110_SRST_IRESETN_VICAP                            0x00000023
#define RKX110_SRST_RXPRESETN_VICAP_LVDS                     0x00000024
#define RKX110_SRST_PRESETN_VICAP_DVP_RX                     0x00000025
#define RKX110_SRST_DRESETN_DSI0                             0x00000026
#define RKX110_SRST_HRESETN_DSI0                             0x00000027
#define RKX110_SRST_IRESETN_DSI0                             0x00000028
#define RKX110_SRST_RXPRESETN_LVDS_ALIGN                     0x00000029
#define RKX110_SRST_DRESETN_DSI1                             0x0000002A
#define RKX110_SRST_HRESETN_DSI1                             0x0000002B
#define RKX110_SRST_IRESETN_DSI1                             0x0000002C

// RXCRU_SOFTRST_CON03(Offset:0x40C)
#define RKX110_SRST_PRESETN_CSIHOST0                         0x00000030
#define RKX110_SRST_PRESETN_CSIHOST1                         0x00000032

// RXCRU_SOFTRST_CON04(Offset:0x410)
#define RKX110_SRST_PRESETN_RKLINK_TX                        0x00000040
#define RKX110_SRST_RESETN_C_DVP_RKLINK_TX                   0x00000041
#define RKX110_SRST_RESETN_C_CSI_RKLINK_TX                   0x00000042
#define RKX110_SRST_RESETN_C_LVDS_RKLINK_TX                  0x00000043
#define RKX110_SRST_RESETN_D_DSI_0_RKLINK_TX                 0x00000044
#define RKX110_SRST_RESETN_D_DSI_1_RKLINK_TX                 0x00000045
#define RKX110_SRST_RESETN_D_RGB_RKLINK_TX                   0x00000046
#define RKX110_SRST_RESETN_D_LVDS0_RKLINK_TX                 0x00000048
#define RKX110_SRST_RESETN_D_LVDS1_RKLINK_TX                 0x0000004A
#define RKX110_SRST_RESETN_2X_LVDS_RKLINK_TX                 0x0000004B
#define RKX110_SRST_RESETN_I2S_SRC_RKLINK_TX                 0x0000004C
#define RKX110_SRST_RESETN_D_DSI_0_REC_RKLINK_TX             0x0000004D
#define RKX110_SRST_RESETN_D_DSI_1_REC_RKLINK_TX             0x0000004E

// RXCRU_SOFTRST_CON05(Offset:0x414)
#define RKX110_SRST_RESETN_PMA2LINK2PCS_LINK                 0x00000051
#define RKX110_SRST_RESETN_PMA2LINK2PCS_PCS0                 0x00000052
#define RKX110_SRST_RESETN_PMA2LINK2PCS_PCS1                 0x00000053
#define RKX110_SRST_SRESETN_I2S_PCS0                         0x00000054
#define RKX110_SRST_SRESETN_I2S_PCS1                         0x00000055

// RXCRU_SOFTRST_CON06(Offset:0x418)
#define RKX110_SRST_RESETN_D_DSI_0_PATTERN_GEN               0x00000060
#define RKX110_SRST_RESETN_D_DSI_1_PATTERN_GEN               0x00000061
#define RKX110_SRST_RESETN_D_LVDS0_PATTERN_GEN               0x00000062
#define RKX110_SRST_RESETN_D_LVDS1_PATTERN_GEN               0x00000063
#define RKX110_SRST_PRESETN_DSI_0_PATTERN_GEN                0x00000068
#define RKX110_SRST_PRESETN_DSI_1_PATTERN_GEN                0x00000069
#define RKX110_SRST_PRESETN_LVDS_0_PATTERN_GEN               0x0000006A
#define RKX110_SRST_PRESETN_LVDS_1_PATTERN_GEN               0x0000006B

// RXCRU_SOFTRST_CON07(Offset:0x41C)
#define RKX110_SRST_PRESETN_PCS0                             0x00000070
#define RKX110_SRST_RESETN_8X_PMA2PCS0                       0x00000071
#define RKX110_SRST_RESETN_PMA2PCS0                          0x00000073
#define RKX110_SRST_PRESETN_PCS0_ADA                         0x00000074
#define RKX110_SRST_RESETN_PCS0_ADA                          0x00000075

// RXCRU_SOFTRST_CON08(Offset:0x420)
#define RKX110_SRST_PRESETN_PCS1                             0x00000080
#define RKX110_SRST_RESETN_8X_PMA2PCS1                       0x00000081
#define RKX110_SRST_RESETN_PMA2PCS1                          0x00000083
#define RKX110_SRST_PRESETN_PCS1_ADA                         0x00000084
#define RKX110_SRST_RESETN_PCS1_ADA                          0x00000085

// RXCRU_SOFTRST_CON10(Offset:0x428)
#define RKX110_SRST_PRESETN_MIPIRXPHY0                       0x000000A0
#define RKX110_SRST_CFGRESETN_MIPIRXPHY0                     0x000000A1
#define RKX110_SRST_PRESETN_MIPIRXPHY1                       0x000000A8
#define RKX110_SRST_CFGRESETN_MIPIRXPHY1                     0x000000A9

// RXCRU_SOFTRST_CON11(Offset:0x42C)
#define RKX110_SRST_PRESETN_DFT2APB                          0x000000B0

// RXCRU_GATE_CON00(Offset:0x300)
#define RKX110_CLK_TESTOUT_TOP_GATE                     0x00000000
#define RKX110_BUSCLK_RX_PRE0_GATE                      0x00000001
#define RKX110_BUSCLK_RX_PRE_GATE                       0x00000002

// RXCRU_GATE_CON01(Offset:0x304)
#define RKX110_PCLK_RX_CRU_GATE                         0x00000010
#define RKX110_PCLK_RX_GRF_GATE                         0x00000011
#define RKX110_PCLK_RX_GPIO0_GATE                       0x00000012
#define RKX110_DCLK_RX_GPIO0_GATE                       0x00000013
#define RKX110_PCLK_RX_GPIO1_GATE                       0x00000014
#define RKX110_DCLK_RX_GPIO1_GATE                       0x00000015
#define RKX110_PCLK_RX_EFUSE_GATE                       0x00000016
#define RKX110_CLK_RX_EFUSE_GATE                        0x00000017
#define RKX110_PCLK_MIPI_GRF_RX0_GATE                   0x0000001A
#define RKX110_PCLK_MIPI_GRF_RX1_GATE                   0x0000001B
#define RKX110_PCLK_RX_I2C2APB_GATE                     0x0000001E
#define RKX110_PCLK_RX_I2C2APB_DEBUG_GATE               0x0000001F

// RXCRU_GATE_CON02(Offset:0x308)
#define RKX110_DCLK_RX_PRE_GATE                         0x00000020
#define RKX110_DCLK_VICAP_CSI_GATE                      0x00000021
#define RKX110_HCLK_VICAP_GATE                          0x00000022
#define RKX110_ICLK_VICAP_INTER_GATE                    0x00000023
#define RKX110_RXPCLK_VICAP_LVDS_DFT_GATE               0x00000024
#define RKX110_PCLKIN_VICAP_DVP_RX_DFT_GATE             0x00000025
#define RKX110_DCLK_DSI0_GATE                           0x00000026
#define RKX110_HCLK_DSI0_GATE                           0x00000027
#define RKX110_ICLK_DSI0_INTER_GATE                     0x00000028
#define RKX110_RXPCLK_LVDS_ALIGN_DFT_GATE               0x00000029
#define RKX110_DCLK_DSI1_GATE                           0x0000002A
#define RKX110_HCLK_DSI1_GATE                           0x0000002B
#define RKX110_ICLK_DSI1_INTER_GATE                     0x0000002C

// RXCRU_GATE_CON03(Offset:0x30C)
#define RKX110_PCLK_CSIHOST0_GATE                       0x00000030
#define RKX110_CLK_RXBYTEHS_CSIHOST0_DFT_GATE           0x00000031
#define RKX110_PCLK_CSIHOST1_GATE                       0x00000032
#define RKX110_CLK_RXBYTEHS_CSIHOST1_DFT_GATE           0x00000033

// RXCRU_GATE_CON04(Offset:0x310)
#define RKX110_PCLK_RKLINK_TX_GATE                      0x00000040
#define RKX110_CLK_C_DVP_RKLINK_TX_GATE                 0x00000041
#define RKX110_CLK_C_CSI_RKLINK_TX_GATE                 0x00000042
#define RKX110_CLK_C_LVDS_RKLINK_TX_GATE                0x00000043
#define RKX110_CLK_D_DSI_0_RKLINK_TX_GATE               0x00000044
#define RKX110_CLK_D_DSI_1_RKLINK_TX_GATE               0x00000045
#define RKX110_CLK_D_RGB_RKLINK_TX_DFT_GATE             0x00000046
#define RKX110_CLK_D_LVDS0_RKLINK_TX_CM_GATE            0x00000047
#define RKX110_CLK_D_LVDS0_RKLINK_TX_GATE               0x00000048
#define RKX110_CLK_D_LVDS1_RKLINK_TX_CM_GATE            0x00000049
#define RKX110_CLK_D_LVDS1_RKLINK_TX_GATE               0x0000004A
#define RKX110_CLK_2X_LVDS_RKLINK_TX_GATE               0x0000004B
#define RKX110_CLK_I2S_SRC_RKLINK_TX_GATE               0x0000004C
#define RKX110_DCLK_D_DSI_0_REC_RKLINK_TX_GATE          0x0000004D
#define RKX110_DCLK_D_DSI_1_REC_RKLINK_TX_GATE          0x0000004E

// RXCRU_GATE_CON05(Offset:0x314)
#define RKX110_CLK_PMA2LINK2PCS_CM_GATE                 0x00000050
#define RKX110_CLK_PMA2LINK2PCS_LINK_GATE               0x00000051
#define RKX110_CLK_PMA2LINK2PCS_PSC0_GATE               0x00000052
#define RKX110_CLK_PMA2LINK2PCS_PSC1_GATE               0x00000053
#define RKX110_SCLK_I2S_LINK2PCS_INTER1_GATE            0x00000054
#define RKX110_SCLK_I2S_LINK2PCS_INTER2_GATE            0x00000055

// RXCRU_GATE_CON06(Offset:0x318)
#define RKX110_CLK_D_DSI_0_PATTERN_GEN_GATE             0x00000060
#define RKX110_CLK_D_DSI_1_PATTERN_GEN_GATE             0x00000061
#define RKX110_CLK_D_LVDS0_PATTERN_GEN_GATE             0x00000062
#define RKX110_CLK_D_LVDS1_PATTERN_GEN_GATE             0x00000063
#define RKX110_PCLK_DSI_0_PATTERN_GEN_GATE              0x00000068
#define RKX110_PCLK_DSI_1_PATTERN_GEN_GATE              0x00000069
#define RKX110_PCLK_LVDS_0_PATTERN_GEN_GATE             0x0000006A
#define RKX110_PCLK_LVDS_1_PATTERN_GEN_GATE             0x0000006B

// RXCRU_GATE_CON07(Offset:0x31C)
#define RKX110_PCLK_PCS0_GATE                           0x00000070
#define RKX110_CLK_8X_PMA2PCS0_DFT_GATE                 0x00000071
#define RKX110_CLK_LINK_PCS0_DFT_GATE                   0x00000072
#define RKX110_CLK_PMA2PCS0_GATE                        0x00000073
#define RKX110_PCLK_PCS0_ADA_GATE                       0x00000074
#define RKX110_CLK_PCS0_ADA_GATE                        0x00000075

// RXCRU_GATE_CON08(Offset:0x320)
#define RKX110_PCLK_PCS1_GATE                           0x00000080
#define RKX110_CLK_8X_PMA2PCS1_DFT_GATE                 0x00000081
#define RKX110_CLK_LINK_PCS1_DFT_GATE                   0x00000082
#define RKX110_CLK_PMA2PCS1_GATE                        0x00000083
#define RKX110_PCLK_PCS1_ADA_GATE                       0x00000084
#define RKX110_CLK_PCS1_ADA_GATE                        0x00000085

// RXCRU_GATE_CON09(Offset:0x324)
#define RKX110_CLK_CAM_OUT2IO_GATE                      0x00000090

// RXCRU_GATE_CON10(Offset:0x328)
#define RKX110_PCLK_MIPIRXPHY0_GATE                     0x000000A0
#define RKX110_CFGCLK_MIPIRXPHY0_GATE                   0x000000A1
#define RKX110_CKREF_MIPIRXPHY0_GATE                    0x000000A2
#define RKX110_PCLK_MIPIRXPHY1_GATE                     0x000000A8
#define RKX110_CFGCLK_MIPIRXPHY1_GATE                   0x000000A9
#define RKX110_CKREF_MIPIRXPHY1_GATE                    0x000000AA
#define RKX110_CLK_CAM0_OUT2IO_GATE                     0x000000AB
#define RKX110_CLK_CAM1_OUT2IO_GATE                     0x000000AC

// RXCRU_GATE_CON11(Offset:0x32C)
#define RKX110_PCLK_DFT2APB_GATE                        0x000000B0

// RXCRU_CLKSEL_CON00(Offset:0x100)
#define RKX110_TEST_CLKOUT_IOUT_DIV                     	0x08000000
#define RKX110_TEST_CLKOUT_IOUT_SEL                     	0x05080000
#define RKX110_TEST_CLKOUT_IOUT_SEL_XIN_OSC0_FUNC               0U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CLK_RXPLL_MUX               1U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CLK_CPLL_MUX                2U
#define RKX110_TEST_CLKOUT_IOUT_SEL_RXPCLK_VICAP_LVDS           3U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CLK_RXBYTEHS_CSIHOST0       4U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CLK_RXBYTEHS_CSIHOST1       5U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CLK_D_RGB_RKLINK_TX         6U
#define RKX110_TEST_CLKOUT_IOUT_SEL_DCLK_LVDS0                  7U
#define RKX110_TEST_CLKOUT_IOUT_SEL_DCLK_LVDS1                  8U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CLK_LINK_PCS0               9U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CLK_LINK_PCS1               10U
#define RKX110_TEST_CLKOUT_IOUT_SEL_BUSCLK_RX_PRE               11U
#define RKX110_TEST_CLKOUT_IOUT_SEL_DCLK_RX_PRE                 12U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CLK_2X_LVDS_RKLINK_TX       13U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CLK_I2S_SRC_RKLINK_TX       14U
#define RKX110_TEST_CLKOUT_IOUT_SEL_DCLK_D_DSI_0_REC_RKLINK_TX  15U
#define RKX110_TEST_CLKOUT_IOUT_SEL_DCLK_D_DSI_1_REC_RKLINK_TX  16U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CFGCLK_MIPIRXPHY0           17U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CKREF_MIPIRXPHY0            18U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CFGCLK_MIPIRXPHY1           19U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CKREF_MIPIRXPHY1            20U
#define RKX110_TEST_CLKOUT_IOUT_SEL_PCLKIN_VICAP_DVP_RX         21U
#define RKX110_TEST_CLKOUT_IOUT_SEL_ICLK_DSI0                   22U
#define RKX110_TEST_CLKOUT_IOUT_SEL_ICLK_DSI1                   23U
#define RKX110_TEST_CLKOUT_IOUT_SEL_RXPCLK_LVDS_ALIGN           24U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CLK_8X_PMA2PCS0             25U
#define RKX110_TEST_CLKOUT_IOUT_SEL_CLK_8X_PMA2PCS1             26U

// RXCRU_CLKSEL_CON01(Offset:0x104)
#define RKX110_BUSCLK_RX_PRE0_DIV                       0x06000001
#define RKX110_BUSCLK_RX_PRE0_SEL                       0x01070001
#define RKX110_BUSCLK_RX_PRE0_SEL_CLK_RXPLL_MUX         0U
#define RKX110_BUSCLK_RX_PRE0_SEL_CLK_CPLL_MUX          1U
#define RKX110_BUSCLK_RX_PRE_SEL                        0x01080001
#define RKX110_BUSCLK_RX_PRE_SEL_XIN_OSC0_FUNC          0U
#define RKX110_BUSCLK_RX_PRE_SEL_BUSCLK_RX_PRE0         1U

// RXCRU_CLKSEL_CON02(Offset:0x108)
#define RKX110_DCLK_RX_PRE_DIV                          0x06000002
#define RKX110_DCLK_RX_PRE_SEL                          0x02060002
#define RKX110_DCLK_RX_PRE_SEL_CLK_RXPLL_MUX            0U
#define RKX110_DCLK_RX_PRE_SEL_CLK_CPLL_MUX             1U
#define RKX110_DCLK_RX_PRE_SEL_XIN_OSC0_FUNC            2U

// RXCRU_CLKSEL_CON03(Offset:0x10C)
#define RKX110_CLK_2X_LVDS_RKLINK_TX_DIV                0x08000003
#define RKX110_CLK_2X_LVDS_RKLINK_TX_SEL                0x020E0003
#define RKX110_CLK_2X_LVDS_RKLINK_TX_SEL_CLK_RXPLL_MUX  0U
#define RKX110_CLK_2X_LVDS_RKLINK_TX_SEL_CLK_CPLL_MUX   1U
#define RKX110_CLK_2X_LVDS_RKLINK_TX_SEL_XIN_OSC0_FUNC  2U

// RXCRU_CLKSEL_CON04(Offset:0x110)
#define RKX110_CLK_I2S_SRC_RKLINK_TX_DIV                0x08000004
#define RKX110_CLK_I2S_SRC_RKLINK_TX_SEL                0x020E0004
#define RKX110_CLK_I2S_SRC_RKLINK_TX_SEL_CLK_RXPLL_MUX  0U
#define RKX110_CLK_I2S_SRC_RKLINK_TX_SEL_CLK_CPLL_MUX   1U
#define RKX110_CLK_I2S_SRC_RKLINK_TX_SEL_XIN_OSC0_FUNC  2U

// RXCRU_CLKSEL_CON05(Offset:0x114)
#define RKX110_DCLK_D_DSI_0_REC_RKLINK_TX_DIV           0x08000005
#define RKX110_DCLK_D_DSI_0_REC_RKLINK_TX_SEL           0x020E0005
#define RKX110_DCLK_D_DSI_0_REC_RKLINK_TX_SEL_CLK_RXPLL_MUX 0U
#define RKX110_DCLK_D_DSI_0_REC_RKLINK_TX_SEL_CLK_CPLL_MUX 1U
#define RKX110_DCLK_D_DSI_0_REC_RKLINK_TX_SEL_XIN_OSC0_FUNC 2U

// RXCRU_CLKSEL_CON06(Offset:0x118)
#define RKX110_DCLK_D_DSI_1_REC_RKLINK_TX_DIV           0x08000006
#define RKX110_DCLK_D_DSI_1_REC_RKLINK_TX_SEL           0x020E0006
#define RKX110_DCLK_D_DSI_1_REC_RKLINK_TX_SEL_CLK_RXPLL_MUX 0U
#define RKX110_DCLK_D_DSI_1_REC_RKLINK_TX_SEL_CLK_CPLL_MUX 1U
#define RKX110_DCLK_D_DSI_1_REC_RKLINK_TX_SEL_XIN_OSC0_FUNC 2U

// RXCRU_CLKSEL_CON07(Offset:0x11C)
#define RKX110_CLK_PMA2LINK2PCS_CM_SEL                  0x010F0007
#define RKX110_CLK_PMA2LINK2PCS_CM_SEL_CLK_LINK_PCS0_DFT 0U
#define RKX110_CLK_PMA2LINK2PCS_CM_SEL_CLK_LINK_PCS1_DFT 1U

// RXCRU_CLKSEL_CON08(Offset:0x120)
#define RKX110_CLK_CIF_OUT2IO_DIV                       0x08000008
#define RKX110_CLK_CIF_OUT2IO_SEL                       0x020E0008
#define RKX110_CLK_CIF_OUT2IO_SEL_CLK_RXPLL_MUX         0U
#define RKX110_CLK_CIF_OUT2IO_SEL_CLK_CPLL_MUX          1U
#define RKX110_CLK_CIF_OUT2IO_SEL_XIN_OSC0_FUNC         2U

// RXCRU_CLKSEL_CON09(Offset:0x124)
#define RKX110_CFGCLK_MIPIRXPHY0_DIV                    0x08000009
#define RKX110_CFGCLK_MIPIRXPHY0_SEL                    0x010F0009
#define RKX110_CFGCLK_MIPIRXPHY0_SEL_CLK_RXPLL_MUX      0U
#define RKX110_CFGCLK_MIPIRXPHY0_SEL_CLK_CPLL_MUX       1U

// RXCRU_CLKSEL_CON10(Offset:0x128)
#define RKX110_CKREF_MIPIRXPHY0_DIV                     0x0400000A
#define RKX110_CKREF_MIPIRXPHY0_SEL                     0x0107000A
#define RKX110_CKREF_MIPIRXPHY0_SEL_CLK_RXPLL_MUX       0U
#define RKX110_CKREF_MIPIRXPHY0_SEL_CLK_CPLL_MUX        1U

// RXCRU_CLKSEL_CON11(Offset:0x12C)
#define RKX110_CFGCLK_MIPIRXPHY1_DIV                    0x0800000B
#define RKX110_CFGCLK_MIPIRXPHY1_SEL                    0x010F000B
#define RKX110_CFGCLK_MIPIRXPHY1_SEL_CLK_RXPLL_MUX      0U
#define RKX110_CFGCLK_MIPIRXPHY1_SEL_CLK_CPLL_MUX       1U

// RXCRU_CLKSEL_CON12(Offset:0x130)
#define RKX110_CKREF_MIPIRXPHY1_DIV                     0x0408000C
#define RKX110_CKREF_MIPIRXPHY1_SEL                     0x010F000C
#define RKX110_CKREF_MIPIRXPHY1_SEL_CLK_RXPLL_MUX       0U
#define RKX110_CKREF_MIPIRXPHY1_SEL_CLK_CPLL_MUX        1U

// RXCRU_CLKSEL_CON15(Offset:0x13C)
#define RKX110_CLK_CAM0_OUT2IO_DIV                      0x0600000F
#define RKX110_CLK_CAM1_OUT2IO_DIV                      0x0608000F
#define RKX110_CLK_CAM0_OUT2IO_SEL                      0x0206000F
#define RKX110_CLK_CAM0_OUT2IO_SEL_CLK_RXPLL_MUX        0U
#define RKX110_CLK_CAM0_OUT2IO_SEL_CLK_CPLL_MUX         1U
#define RKX110_CLK_CAM0_OUT2IO_SEL_XIN_OSC0_FUNC        2U
#define RKX110_CLK_CAM1_OUT2IO_SEL                      0x020E000F
#define RKX110_CLK_CAM1_OUT2IO_SEL_CLK_RXPLL_MUX        0U
#define RKX110_CLK_CAM1_OUT2IO_SEL_CLK_CPLL_MUX         1U
#define RKX110_CLK_CAM1_OUT2IO_SEL_XIN_OSC0_FUNC        2U

// ======================== RXCRU module definition END ========================
#define RKX110_CPS_INVAL                          0
#define RKX110_CPS_PLL_CPLL                       1
#define RKX110_CPS_PLL_RXPLL                      2
#define RKX110_CPS_DCLK_RX_GPIO0                  3
#define RKX110_CPS_DCLK_RX_GPIO1                  4
#define RKX110_CPS_RX_EFUSE                       5
#define RKX110_CPS_PCS0_ADA                       6
#define RKX110_CPS_PCS1_ADA                       7
#define RKX110_CLK_D_DSI_0_PATTERN_GEN            8
#define RKX110_CLK_D_DSI_1_PATTERN_GEN            9
#define RKX110_CPS_DCLK_RX_PRE                    COMPOSITE_CLK(RKX110_DCLK_RX_PRE_SEL, RKX110_DCLK_RX_PRE_DIV)
#define RKX110_CPS_CLK_2X_LVDS_RKLINK_TX          COMPOSITE_CLK(RKX110_CLK_2X_LVDS_RKLINK_TX_SEL, RKX110_CLK_2X_LVDS_RKLINK_TX_DIV)
#define RKX110_CPS_CLK_I2S_SRC_RKLINK_TX          COMPOSITE_CLK(RKX110_CLK_I2S_SRC_RKLINK_TX_SEL, RKX110_CLK_I2S_SRC_RKLINK_TX_DIV)
#define RKX110_CPS_DCLK_D_DSI_0_REC_RKLINK_TX     COMPOSITE_CLK(RKX110_DCLK_D_DSI_0_REC_RKLINK_TX_SEL, RKX110_DCLK_D_DSI_0_REC_RKLINK_TX_DIV)
#define RKX110_CPS_DCLK_D_DSI_1_REC_RKLINK_TX     COMPOSITE_CLK(RKX110_DCLK_D_DSI_1_REC_RKLINK_TX_SEL, RKX110_DCLK_D_DSI_1_REC_RKLINK_TX_DIV)
#define RKX110_CPS_CLK_PMA2LINK2PCS_CM            COMPOSITE_CLK(RKX110_CLK_PMA2LINK2PCS_CM_SEL, 0)
#define RKX110_CPS_CLK_CIF_OUT2IO                 COMPOSITE_CLK(RKX110_CLK_CIF_OUT2IO_SEL, RKX110_CLK_CIF_OUT2IO_DIV)
#define RKX110_CPS_CKREF_MIPIRXPHY0               COMPOSITE_CLK(RKX110_CKREF_MIPIRXPHY0_SEL, RKX110_CKREF_MIPIRXPHY0_DIV)
#define RKX110_CPS_CKREF_MIPIRXPHY1               COMPOSITE_CLK(RKX110_CKREF_MIPIRXPHY1_SEL, RKX110_CKREF_MIPIRXPHY1_DIV)
#define RKX110_CPS_CLK_CAM0_OUT2IO                COMPOSITE_CLK(RKX110_CLK_CAM0_OUT2IO_SEL, RKX110_CLK_CAM0_OUT2IO_DIV)
#define RKX110_CPS_CLK_CAM1_OUT2IO                COMPOSITE_CLK(RKX110_CLK_CAM1_OUT2IO_SEL, RKX110_CLK_CAM1_OUT2IO_DIV)
#define RKX110_CPS_BUSCLK_RX_PRE0                 COMPOSITE_CLK(RKX110_BUSCLK_RX_PRE0_SEL, RKX110_BUSCLK_RX_PRE0_DIV)
#define RKX110_CPS_BUSCLK_RX_PRE                  COMPOSITE_CLK(RKX110_BUSCLK_RX_PRE_SEL, 0)
#define RKX110_CPS_CFGCLK_MIPIRXPHY0              COMPOSITE_CLK(RKX110_CFGCLK_MIPIRXPHY0_SEL, RKX110_CFGCLK_MIPIRXPHY0_DIV)
#define RKX110_CPS_CFGCLK_MIPIRXPHY1              COMPOSITE_CLK(RKX110_CFGCLK_MIPIRXPHY1_SEL, RKX110_CFGCLK_MIPIRXPHY1_DIV)
#define RKX110_CPS_TEST_CLKOUT                    COMPOSITE_CLK(RKX110_TEST_CLKOUT_IOUT_SEL, RKX110_TEST_CLKOUT_IOUT_DIV)
#endif
