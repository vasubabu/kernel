/*
 * Copyright (C) 2008-2010 Freescale Semiconductor, Inc. All Rights Reserved.
 */

/*
 * The code contained herein is licensed under the GNU General Public
 * License. You may obtain a copy of the GNU General Public License
 * Version 2 or later at the following locations:
 *
 * http://www.opensource.org/licenses/gpl-license.html
 * http://www.gnu.org/copyleft/gpl.html
 */
#ifndef __ARCH_ARM_MACH_MX51_CRM_REGS_H__
#define __ARCH_ARM_MACH_MX51_CRM_REGS_H__

extern void __iomem *ccm_base;
extern void __iomem *pll1_base;
extern void __iomem *pll2_base;
extern void __iomem *pll3_base;
extern void __iomem *pll4_base;

#define MXC_CCM_BASE	(IO_ADDRESS(CCM_BASE_ADDR))
#define MXC_DPLL1_BASE	(pll1_base)
#define MXC_DPLL2_BASE	(pll2_base)
#define MXC_DPLL3_BASE	(pll3_base)
#define MXC_DPLL4_BASE (pll4_base)

/* PLL Register Offsets */
#define MXC_PLL_DP_CTL			0x00
#define MXC_PLL_DP_CONFIG		0x04
#define MXC_PLL_DP_OP			0x08
#define MXC_PLL_DP_MFD			0x0C
#define MXC_PLL_DP_MFN			0x10
#define MXC_PLL_DP_MFNMINUS		0x14
#define MXC_PLL_DP_MFNPLUS		0x18
#define MXC_PLL_DP_HFS_OP		0x1C
#define MXC_PLL_DP_HFS_MFD		0x20
#define MXC_PLL_DP_HFS_MFN		0x24
#define MXC_PLL_DP_MFN_TOGC		0x28
#define MXC_PLL_DP_DESTAT		0x2c

/* PLL Register Bit definitions */
#define MXC_PLL_DP_CTL_MUL_CTRL		0x2000
#define MXC_PLL_DP_CTL_DPDCK0_2_EN	0x1000
#define MXC_PLL_DP_CTL_DPDCK0_2_OFFSET	12
#define MXC_PLL_DP_CTL_ADE		0x800
#define MXC_PLL_DP_CTL_REF_CLK_DIV	0x400
#define MXC_PLL_DP_CTL_REF_CLK_SEL_MASK	(3 << 8)
#define MXC_PLL_DP_CTL_REF_CLK_SEL_OFFSET	8
#define MXC_PLL_DP_CTL_HFSM		0x80
#define MXC_PLL_DP_CTL_PRE		0x40
#define MXC_PLL_DP_CTL_UPEN		0x20
#define MXC_PLL_DP_CTL_RST		0x10
#define MXC_PLL_DP_CTL_RCP		0x8
#define MXC_PLL_DP_CTL_PLM		0x4
#define MXC_PLL_DP_CTL_BRM0		0x2
#define MXC_PLL_DP_CTL_LRF		0x1

#define MXC_PLL_DP_CONFIG_BIST		0x8
#define MXC_PLL_DP_CONFIG_SJC_CE	0x4
#define MXC_PLL_DP_CONFIG_AREN		0x2
#define MXC_PLL_DP_CONFIG_LDREQ		0x1

#define MXC_PLL_DP_OP_MFI_OFFSET	4
#define MXC_PLL_DP_OP_MFI_MASK		(0xF << 4)
#define MXC_PLL_DP_OP_PDF_OFFSET	0
#define MXC_PLL_DP_OP_PDF_MASK		0xF

#define MXC_PLL_DP_MFD_OFFSET		0
#define MXC_PLL_DP_MFD_MASK		0x07FFFFFF

#define MXC_PLL_DP_MFN_OFFSET		0x0
#define MXC_PLL_DP_MFN_MASK		0x07FFFFFF

#define MXC_PLL_DP_MFN_TOGC_TOG_DIS	(1 << 17)
#define MXC_PLL_DP_MFN_TOGC_TOG_EN	(1 << 16)
#define MXC_PLL_DP_MFN_TOGC_CNT_OFFSET	0x0
#define MXC_PLL_DP_MFN_TOGC_CNT_MASK	0xFFFF

#define MXC_PLL_DP_DESTAT_TOG_SEL	(1 << 31)
#define MXC_PLL_DP_DESTAT_MFN		0x07FFFFFF

/* Register addresses of CCM*/
#define MXC_CCM_CCR		(MXC_CCM_BASE + 0x00)
#define MXC_CCM_CCDR		(MXC_CCM_BASE + 0x04)
#define MXC_CCM_CSR		(MXC_CCM_BASE + 0x08)
#define MXC_CCM_CCSR		(MXC_CCM_BASE + 0x0C)
#define MXC_CCM_CACRR		(MXC_CCM_BASE + 0x10)
#define MXC_CCM_CBCDR		(MXC_CCM_BASE + 0x14)
#define MXC_CCM_CBCMR		(MXC_CCM_BASE + 0x18)
#define MXC_CCM_CSCMR1		(MXC_CCM_BASE + 0x1C)
#define MXC_CCM_CSCMR2		(MXC_CCM_BASE + 0x20)
#define MXC_CCM_CSCDR1		(MXC_CCM_BASE + 0x24)
#define MXC_CCM_CS1CDR		(MXC_CCM_BASE + 0x28)
#define MXC_CCM_CS2CDR		(MXC_CCM_BASE + 0x2C)
#define MXC_CCM_CDCDR		(MXC_CCM_BASE + 0x30)
#define MXC_CCM_CHSCDR		(MXC_CCM_BASE + 0x34)
#define MXC_CCM_CSCDR2		(MXC_CCM_BASE + 0x38)
#define MXC_CCM_CSCDR3		(MXC_CCM_BASE + 0x3C)
#define MXC_CCM_CSCDR4		(MXC_CCM_BASE + 0x40)
#define MXC_CCM_CWDR		(MXC_CCM_BASE + 0x44)
#define MXC_CCM_CDHIPR		(MXC_CCM_BASE + 0x48)
#define MXC_CCM_CDCR		(MXC_CCM_BASE + 0x4C)
#define MXC_CCM_CTOR		(MXC_CCM_BASE + 0x50)
#define MXC_CCM_CLPCR		(MXC_CCM_BASE + 0x54)
#define MXC_CCM_CISR		(MXC_CCM_BASE + 0x58)
#define MXC_CCM_CIMR		(MXC_CCM_BASE + 0x5C)
#define MXC_CCM_CCOSR		(MXC_CCM_BASE + 0x60)
#define MXC_CCM_CGPR		(MXC_CCM_BASE + 0x64)
#define MXC_CCM_CCGR0		(MXC_CCM_BASE + 0x68)
#define MXC_CCM_CCGR1		(MXC_CCM_BASE + 0x6C)
#define MXC_CCM_CCGR2		(MXC_CCM_BASE + 0x70)
#define MXC_CCM_CCGR3		(MXC_CCM_BASE + 0x74)
#define MXC_CCM_CCGR4		(MXC_CCM_BASE + 0x78)
#define MXC_CCM_CCGR5		(MXC_CCM_BASE + 0x7C)
#define MXC_CCM_CCGR6		(MXC_CCM_BASE + 0x80)
#define MXC_CCM_CCGR7		(MXC_CCM_BASE + 0x84)
#define MXC_CCM_CMEOR		(MXC_CCM_BASE + 0x88)

/* Define the bits in register CCR */
#define MXC_CCM_CCR_COSC_EN		(1 << 12)
#define MXC_CCM_CCR_FPM_MULT_MASK	(1 << 11)
#define MXC_CCM_CCR_CAMP2_EN		(1 << 10)
#define MXC_CCM_CCR_CAMP1_EN		(1 << 9)
#define MXC_CCM_CCR_FPM_EN		(1 << 8)
#define MXC_CCM_CCR_OSCNT_OFFSET	(0)
#define MXC_CCM_CCR_OSCNT_MASK	(0xFF)

/* Define the bits in register CCDR */
/* MX51 */
#define MXC_CCM_CCDR_HSC_HS_MASK	(0x1 << 18)
#define MXC_CCM_CCDR_IPU_HS_MASK	(0x1 << 17)
#define MXC_CCM_CCDR_EMI_HS_MASK	(0x1 << 16)
/* MX53 */
#define MXC_CCM_CCDR_IPU_HS_MX53_MASK	(0x1 << 21)
#define MXC_CCM_CCDR_EMI_HS_INT2_MASK	(0x1 << 20)
#define MXC_CCM_CCDR_EMI_HS_INT1_MASK	(0x1 << 19)
#define MXC_CCM_CCDR_EMI_HS_SLOW_MASK	(0x1 << 18)
#define MXC_CCM_CCDR_EMI_HS_FAST_MASK	(0x1 << 17)
#define MXC_CCM_CCDR_EMI_HS_MASK	(0x1 << 16)

/* Define the bits in register CSR */
#define MXC_CCM_CSR_COSR_READY	(1 << 5)
#define MXC_CCM_CSR_LVS_VALUE		(1 << 4)
#define MXC_CCM_CSR_CAMP2_READY	(1 << 3)
#define MXC_CCM_CSR_CAMP1_READY	(1 << 2)
#define MXC_CCM_CSR_FPM_READY	(1 << 1)
#define MXC_CCM_CSR_TEMP_MON_ALARM	(1 << 1)
#define MXC_CCM_CSR_REF_EN_B		(1 << 0)

/* Define the bits in register CCSR */
#define MXC_CCM_CCSR_LP_APM_SEL		(0x1 << 9)
#define MXC_CCM_CCSR_LP_APM_SEL_MX53		(0x1 << 10)
#define MXC_CCM_CCSR_PLL4_SW_CLK_SEL		(1 << 9)
#define MXC_CCM_CCSR_STEP_SEL_OFFSET		(7)
#define MXC_CCM_CCSR_STEP_SEL_MASK		(0x3 << 7)
#define MXC_CCM_CCSR_PLL2_PODF_OFFSET	(5)
#define MXC_CCM_CCSR_PLL2_PODF_MASK		(0x3 << 5)
#define MXC_CCM_CCSR_PLL3_PODF_OFFSET	(3)
#define MXC_CCM_CCSR_PLL3_PODF_MASK		(0x3 << 3)
#define MXC_CCM_CCSR_PLL1_SW_CLK_SEL		(1 << 2)
#define MXC_CCM_CCSR_PLL2_SW_CLK_SEL		(1 << 1)
#define MXC_CCM_CCSR_PLL3_SW_CLK_SEL		(1 << 0)

/* Define the bits in register CACRR */
#define MXC_CCM_CACRR_ARM_PODF_OFFSET	(0)
#define MXC_CCM_CACRR_ARM_PODF_MASK		(0x7)

/* Define the bits in register CBCDR */
#define MXC_CCM_CBCDR_EMI_CLK_SEL			(0x1 << 26)
#define MXC_CCM_CBCDR_PERIPH_CLK_SEL			(0x1 << 25)
#define MXC_CCM_CBCDR_DDR_HF_SEL_OFFSET		(30)
#define MXC_CCM_CBCDR_DDR_HF_SEL			(0x1 << 30)
#define MXC_CCM_CBCDR_DDR_PODF_OFFSET		(27)
#define MXC_CCM_CBCDR_DDR_PODF_MASK			(0x7 << 27)
#define MXC_CCM_CBCDR_EMI_PODF_OFFSET		(22)
#define MXC_CCM_CBCDR_EMI_PODF_MASK			(0x7 << 22)
#define MXC_CCM_CBCDR_AXI_B_PODF_OFFSET		(19)
#define MXC_CCM_CBCDR_AXI_B_PODF_MASK		(0x7 << 19)
#define MXC_CCM_CBCDR_AXI_A_PODF_OFFSET		(16)
#define MXC_CCM_CBCDR_AXI_A_PODF_MASK		(0x7 << 16)
#define MXC_CCM_CBCDR_NFC_PODF_OFFSET		(13)
#define MXC_CCM_CBCDR_NFC_PODF_MASK			(0x7 << 13)
#define MXC_CCM_CBCDR_AHB_PODF_OFFSET		(10)
#define MXC_CCM_CBCDR_AHB_PODF_MASK			(0x7 << 10)
#define MXC_CCM_CBCDR_IPG_PODF_OFFSET		(8)
#define MXC_CCM_CBCDR_IPG_PODF_MASK			(0x3 << 8)
#define MXC_CCM_CBCDR_PERCLK_PRED1_OFFSET		(6)
#define MXC_CCM_CBCDR_PERCLK_PRED1_MASK		(0x3 << 6)
#define MXC_CCM_CBCDR_PERCLK_PRED2_OFFSET		(3)
#define MXC_CCM_CBCDR_PERCLK_PRED2_MASK		(0x7 << 3)
#define MXC_CCM_CBCDR_PERCLK_PODF_OFFSET		(0)
#define MXC_CCM_CBCDR_PERCLK_PODF_MASK		(0x7)

/* Define the bits in register CBCMR */
#define MXC_CCM_CBCMR_GPU2D_CLK_SEL_MX53_OFFSET	(16)
#define MXC_CCM_CBCMR_GPU2D_CLK_SEL_MX53_MASK		(0x3 << 16)
#define MXC_CCM_CBCMR_VPU_AXI_CLK_SEL_OFFSET	(14)
#define MXC_CCM_CBCMR_VPU_AXI_CLK_SEL_MASK		(0x3 << 14)
#define MXC_CCM_CBCMR_PERIPH_CLK_SEL_OFFSET		(12)
#define MXC_CCM_CBCMR_PERIPH_CLK_SEL_MASK		(0x3 << 12)
#define MXC_CCM_CBCMR_DDR_CLK_SEL_OFFSET		(10)
#define MXC_CCM_CBCMR_DDR_CLK_SEL_MASK		(0x3 << 10)
#define MXC_CCM_CBCMR_ARM_AXI_CLK_SEL_OFFSET	(8)
#define MXC_CCM_CBCMR_ARM_AXI_CLK_SEL_MASK		(0x3 << 8)
#define MXC_CCM_CBCMR_IPU_HSP_CLK_SEL_OFFSET	(6)
#define MXC_CCM_CBCMR_IPU_HSP_CLK_SEL_MASK		(0x3 << 6)
#define MXC_CCM_CBCMR_GPU_CLK_SEL_OFFSET		(4)
#define MXC_CCM_CBCMR_GPU_CLK_SEL_MASK		(0x3 << 4)
#define MXC_CCM_CBCMR_GPU2D_CLK_SEL_OFFSET        (14)
#define MXC_CCM_CBCMR_GPU2D_CLK_SEL_MASK      (0x3 << 14)
#define MXC_CCM_CBCMR_PERCLK_LP_APM_CLK_SEL		(0x1 << 1)
#define MXC_CCM_CBCMR_PERCLK_IPG_CLK_SEL		(0x1 << 0)

/* Define the bits in register CSCMR1 */
#define MXC_CCM_CSCMR1_SSI_EXT2_CLK_SEL_OFFSET		(30)
#define MXC_CCM_CSCMR1_SSI_EXT2_CLK_SEL_MASK		(0x3 << 30)
#define MXC_CCM_CSCMR1_SSI_EXT1_CLK_SEL_OFFSET		(28)
#define MXC_CCM_CSCMR1_SSI_EXT1_CLK_SEL_MASK		(0x3 << 28)
#define MXC_CCM_CSCMR1_USB_PHY_CLK_SEL_OFFSET		(26)
#define MXC_CCM_CSCMR1_USB_PHY_CLK_SEL			(0x1 << 26)
#define MXC_CCM_CSCMR1_UART_CLK_SEL_OFFSET			(24)
#define MXC_CCM_CSCMR1_UART_CLK_SEL_MASK			(0x3 << 24)
#define MXC_CCM_CSCMR1_USBOH3_CLK_SEL_OFFSET		(22)
#define MXC_CCM_CSCMR1_USBOH3_CLK_SEL_MASK			(0x3 << 22)
#define MXC_CCM_CSCMR1_ESDHC1_MSHC2_CLK_SEL_OFFSET	(20)
#define MXC_CCM_CSCMR1_ESDHC1_MSHC2_CLK_SEL_MASK		(0x3 << 20)
#define MXC_CCM_CSCMR1_ESDHC3_CLK_SEL_MX51		(0x1 << 19)
#define MXC_CCM_CSCMR1_ESDHC2_CLK_SEL			(0x1 << 19)
#define MXC_CCM_CSCMR1_ESDHC4_CLK_SEL			(0x1 << 18)
#define MXC_CCM_CSCMR1_ESDHC3_MSHC2_CLK_SEL_OFFSET	(16)
#define MXC_CCM_CSCMR1_ESDHC3_MSHC2_CLK_SEL_MASK		(0x3 << 16)
#define MXC_CCM_CSCMR1_SSI1_CLK_SEL_OFFSET			(14)
#define MXC_CCM_CSCMR1_SSI1_CLK_SEL_MASK			(0x3 << 14)
#define MXC_CCM_CSCMR1_SSI2_CLK_SEL_OFFSET			(12)
#define MXC_CCM_CSCMR1_SSI2_CLK_SEL_MASK			(0x3 << 12)
#define MXC_CCM_CSCMR1_SSI3_CLK_SEL				(0x1 << 11)
#define MXC_CCM_CSCMR1_VPU_RCLK_SEL				(0x1 << 10)
#define MXC_CCM_CSCMR1_SSI_APM_CLK_SEL_OFFSET		(8)
#define MXC_CCM_CSCMR1_SSI_APM_CLK_SEL_MASK		(0x3 << 8)
#define MXC_CCM_CSCMR1_TVE_CLK_SEL				(0x1 << 7)
#define MXC_CCM_CSCMR1_TVE_EXT_CLK_SEL			(0x1 << 6)
#define MXC_CCM_CSCMR1_CSPI_CLK_SEL_OFFSET			(4)
#define MXC_CCM_CSCMR1_CSPI_CLK_SEL_MASK			(0x3 << 4)
#define MXC_CCM_CSCMR1_SPDIF_CLK_SEL_OFFSET			(2)
#define MXC_CCM_CSCMR1_SPDIF_CLK_SEL_MASK			(0x3 << 2)
#define MXC_CCM_CSCMR1_SSI_EXT2_COM_CLK_SEL			(0x1 << 1)
#define MXC_CCM_CSCMR1_SSI_EXT1_COM_CLK_SEL			(0x1)

/* Define the bits in register CSCMR2 */
#define MXC_CCM_CSCMR2_DI_CLK_SEL_OFFSET(n)		(26+n*3)
#define MXC_CCM_CSCMR2_DI_CLK_SEL_MASK(n)		(0x7 << (26+n*3))
#define MXC_CCM_CSCMR2_CSI_MCLK2_CLK_SEL_OFFSET	(24)
#define MXC_CCM_CSCMR2_CSI_MCLK2_CLK_SEL_MASK	(0x3 << 24)
#define MXC_CCM_CSCMR2_CSI_MCLK1_CLK_SEL_OFFSET	(22)
#define MXC_CCM_CSCMR2_CSI_MCLK1_CLK_SEL_MASK	(0x3 << 22)
/* MX51 */
#define MXC_CCM_CSCMR2_ESC_CLK_SEL_OFFSET		(20)
#define MXC_CCM_CSCMR2_ESC_CLK_SEL_MASK		(0x3 << 20)
#define MXC_CCM_CSCMR2_HSC2_CLK_SEL_OFFSET		(18)
#define MXC_CCM_CSCMR2_HSC2_CLK_SEL_MASK		(0x3 << 18)
#define MXC_CCM_CSCMR2_HSC1_CLK_SEL_OFFSET		(16)
#define MXC_CCM_CSCMR2_HSC1_CLK_SEL_MASK		(0x3 << 16)
#define MXC_CCM_CSCMR2_HSI2C_CLK_SEL_OFFSET		(14)
#define MXC_CCM_CSCMR2_HSI2C_CLK_SEL_MASK		(0x3 << 14)
/* MX53 */
#define MXC_CCM_CSCMR2_ASRC_CLK_SEL				(1<<21)
#define MXC_CCM_CSCMR2_ESAI_PRE_SEL_OFFSET		(19)
#define MXC_CCM_CSCMR2_ESAI_PRE_SEL_MASK		(0x3 << 19)
#define MXC_CCM_CSCMR2_ESAI_POST_SEL_OFFSET	(16)
#define MXC_CCM_CSCMR2_ESAI_POST_SEL_MASK		(0x7 << 16)
#define MXC_CCM_CSCMR2_IEEE_CLK_SEL_OFFSET		(14)
#define MXC_CCM_CSCMR2_IEEE_CLK_SEL_MASK		(0x3 << 14)
#define MXC_CCM_CSCMR2_FIRI_CLK_SEL_OFFSET		(12)
#define MXC_CCM_CSCMR2_FIRI_CLK_SEL_MASK		(0x3 << 12)
/* MX51 */
#define MXC_CCM_CSCMR2_SIM_CLK_SEL_OFFSET		(10)
#define MXC_CCM_CSCMR2_SIM_CLK_SEL_MASK		(0x3 << 10)
#define MXC_CCM_CSCMR2_SLIMBUS_COM			(0x1 << 9)
#define MXC_CCM_CSCMR2_SLIMBUS_CLK_SEL_OFFSET	(6)
#define MXC_CCM_CSCMR2_SLIMBUS_CLK_SEL_MASK		(0x7 << 6)
/* MX53 */
#define MXC_CCM_CSCMR2_LDB_DI1_IPU_DIV			(0x1 << 11)
#define MXC_CCM_CSCMR2_LDB_DI0_IPU_DIV			(0x1 << 10)
#define MXC_CCM_CSCMR2_LDB_DI1_CLK_SEL			(0x1 << 9)
#define MXC_CCM_CSCMR2_LDB_DI0_CLK_SEL			(0x1 << 8)
#define MXC_CCM_CSCMR2_CAN_CLK_SEL_OFFSET		(6)
#define MXC_CCM_CSCMR2_CAN_CLK_SEL_MASK		(0x3 << 6)
#define MXC_CCM_CSCMR2_SPDIF1_COM			(1 << 5)
#define MXC_CCM_CSCMR2_SPDIF0_COM			(1 << 4)
#define MXC_CCM_CSCMR2_SPDIF1_CLK_SEL_OFFSET	(2)
#define MXC_CCM_CSCMR2_SPDIF1_CLK_SEL_MASK		(0x3 << 2)
#define MXC_CCM_CSCMR2_SPDIF0_CLK_SEL_OFFSET	(0)
#define MXC_CCM_CSCMR2_SPDIF0_CLK_SEL_MASK		(0x3)

/* Define the bits in register CSCDR1 */
#define MXC_CCM_CSCDR1_ESDHC2_MSHC2_CLK_PRED_OFFSET	(22)
#define MXC_CCM_CSCDR1_ESDHC2_MSHC2_CLK_PRED_MASK		(0x7 << 22)
#define MXC_CCM_CSCDR1_ESDHC2_MSHC2_CLK_PODF_OFFSET	(19)
#define MXC_CCM_CSCDR1_ESDHC2_MSHC2_CLK_PODF_MASK		(0x7 << 19)
#define MXC_CCM_CSCDR1_ESDHC3_MSHC2_CLK_PRED_OFFSET	(22)
#define MXC_CCM_CSCDR1_ESDHC3_MSHC2_CLK_PRED_MASK		(0x7 << 22)
#define MXC_CCM_CSCDR1_ESDHC3_MSHC2_CLK_PODF_OFFSET	(19)
#define MXC_CCM_CSCDR1_ESDHC3_MSHC2_CLK_PODF_MASK		(0x7 << 19)
#define MXC_CCM_CSCDR1_ESDHC1_MSHC2_CLK_PRED_OFFSET	(16)
#define MXC_CCM_CSCDR1_ESDHC1_MSHC2_CLK_PRED_MASK		(0x7 << 16)
#define MXC_CCM_CSCDR1_PGC_CLK_PODF_OFFSET			(14)
#define MXC_CCM_CSCDR1_PGC_CLK_PODF_MASK			(0x3 << 14)
#define MXC_CCM_CSCDR1_ESDHC1_MSHC2_CLK_PODF_OFFSET	(11)
#define MXC_CCM_CSCDR1_ESDHC1_MSHC2_CLK_PODF_MASK		(0x7 << 11)
#define MXC_CCM_CSCDR1_USBOH3_CLK_PRED_OFFSET		(8)
#define MXC_CCM_CSCDR1_USBOH3_CLK_PRED_MASK		(0x7 << 8)
#define MXC_CCM_CSCDR1_USBOH3_CLK_PODF_OFFSET		(6)
#define MXC_CCM_CSCDR1_USBOH3_CLK_PODF_MASK		(0x3 << 6)
#define MXC_CCM_CSCDR1_UART_CLK_PRED_OFFSET		(3)
#define MXC_CCM_CSCDR1_UART_CLK_PRED_MASK			(0x7 << 3)
#define MXC_CCM_CSCDR1_UART_CLK_PODF_OFFSET		(0)
#define MXC_CCM_CSCDR1_UART_CLK_PODF_MASK			(0x7)

/* Define the bits in register CS1CDR and CS2CDR */
#define MXC_CCM_CS1CDR_ESAI_CLK_PODF_OFFSET	(25)
#define MXC_CCM_CS1CDR_ESAI_CLK_PODF_MASK		(0x3F << 25)
#define MXC_CCM_CS1CDR_SSI_EXT1_CLK_PRED_OFFSET	(22)
#define MXC_CCM_CS1CDR_SSI_EXT1_CLK_PRED_MASK	(0x7 << 22)
#define MXC_CCM_CS1CDR_SSI_EXT1_CLK_PODF_OFFSET	(16)
#define MXC_CCM_CS1CDR_SSI_EXT1_CLK_PODF_MASK	(0x3F << 16)
#define MXC_CCM_CS1CDR_ESAI_CLK_PRED_OFFSET		(9)
#define MXC_CCM_CS1CDR_ESAI_CLK_PRED_MASK	(0x7 << 9)
#define MXC_CCM_CS1CDR_SSI1_CLK_PRED_OFFSET		(6)
#define MXC_CCM_CS1CDR_SSI1_CLK_PRED_MASK		(0x7 << 6)
#define MXC_CCM_CS1CDR_SSI1_CLK_PODF_OFFSET		(0)
#define MXC_CCM_CS1CDR_SSI1_CLK_PODF_MASK		(0x3F)

#define MXC_CCM_CS2CDR_SSI_EXT2_CLK_PRED_OFFSET	(22)
#define MXC_CCM_CS2CDR_SSI_EXT2_CLK_PRED_MASK	(0x7 << 22)
#define MXC_CCM_CS2CDR_SSI_EXT2_CLK_PODF_OFFSET	(16)
#define MXC_CCM_CS2CDR_SSI_EXT2_CLK_PODF_MASK	(0x3F << 16)
#define MXC_CCM_CS2CDR_SSI2_CLK_PRED_OFFSET		(6)
#define MXC_CCM_CS2CDR_SSI2_CLK_PRED_MASK		(0x7 << 6)
#define MXC_CCM_CS2CDR_SSI2_CLK_PODF_OFFSET		(0)
#define MXC_CCM_CS2CDR_SSI2_CLK_PODF_MASK		(0x3F)

/* Define the bits in register CDCDR */
#define MXC_CCM_CDCDR_TVE_CLK_PRED_OFFSET		(28)
#define MXC_CCM_CDCDR_TVE_CLK_PRED_MASK		(0x7 << 28)
#define MXC_CCM_CDCDR_SPDIF0_CLK_PRED_OFFSET	(25)
#define MXC_CCM_CDCDR_SPDIF0_CLK_PRED_MASK		(0x7 << 25)
#define MXC_CCM_CDCDR_SPDIF0_CLK_PODF_OFFSET	(19)
#define MXC_CCM_CDCDR_SPDIF0_CLK_PODF_MASK		(0x3F << 19)
/* MX51 */
#define MXC_CCM_CDCDR_SPDIF1_CLK_PRED_OFFSET	(16)
#define MXC_CCM_CDCDR_SPDIF1_CLK_PRED_MASK		(0x7 << 16)
/* MX53 */
#define MXC_CCM_CDCDR_DI_PLL4_PODF_OFFSET		(16)
#define MXC_CCM_CDCDR_DI_PLL4_PODF_MASK			(0x7 << 16)
#define MXC_CCM_CDCDR_SPDIF1_CLK_PODF_OFFSET	(9)
#define MXC_CCM_CDCDR_SPDIF1_CLK_PODF_MASK		(0x3F << 9)
#define MXC_CCM_CDCDR_DI1_CLK_PRED_OFFSET		(6)
#define MXC_CCM_CDCDR_DI1_CLK_PRED_MASK		(0x7 << 6)
#define MXC_CCM_CDCDR_USB_PHY_PRED_OFFSET		(3)
#define MXC_CCM_CDCDR_USB_PHY_PRED_MASK		(0x7 << 3)
#define MXC_CCM_CDCDR_USB_PHY_PODF_OFFSET		(0)
#define MXC_CCM_CDCDR_USB_PHY_PODF_MASK		(0x7)

/* Define the bits in register CHSCCDR */
/* MX51 */
#define MXC_CCM_CHSCCDR_ESC_CLK_PRED_OFFSET		(12)
#define MXC_CCM_CHSCCDR_ESC_CLK_PRED_MASK		(0x7 << 12)
#define MXC_CCM_CHSCCDR_ESC_CLK_PODF_OFFSET	(6)
#define MXC_CCM_CHSCCDR_ESC_CLK_PODF_MASK		(0x3F << 6)
#define MXC_CCM_CHSCCDR_HSC2_CLK_PODF_OFFSET	(3)
#define MXC_CCM_CHSCCDR_HSC2_CLK_PODF_MASK		(0x7 << 3)
#define MXC_CCM_CHSCCDR_HSC1_CLK_PODF_OFFSET	(0)
#define MXC_CCM_CHSCCDR_HSC1_CLK_PODF_MASK		(0x7)
/* MX53 */
#define MXC_CCM_CHSCCDR_ESAI_HCKT_SEL_OFFSET		(6)
#define MXC_CCM_CHSCCDR_ESAI_HCKT_SEL_MASK			(0x3 << 6)
#define MXC_CCM_CHSCCDR_ESAI_HCKR_SEL_OFFSET		(4)
#define MXC_CCM_CHSCCDR_ESAI_HCKR_SEL_MASK			(0x3 << 4)
#define MXC_CCM_CHSCCDR_SSI2_MLB_SPDIF_SRC_OFFSET		(2)
#define MXC_CCM_CHSCCDR_SSI2_MLB_SPDIF_SRC_MASK		(0x3 << 2)
#define MXC_CCM_CHSCCDR_SSI1_MLB_SPDIF_SRC_OFFSET		(0)
#define MXC_CCM_CHSCCDR_SSI1_MLB_SPDIF_SRC_MASK		(0x3)

/* Define the bits in register CSCDR2 */
#define MXC_CCM_CSCDR2_ASRC_CLK_PRED_OFFSET	(28)
#define MXC_CCM_CSCDR2_ASRC_CLK_PRED_MASK		(0x7 << 28)
#define MXC_CCM_CSCDR2_CSPI_CLK_PRED_OFFSET		(25)
#define MXC_CCM_CSCDR2_CSPI_CLK_PRED_MASK		(0x7 << 25)
#define MXC_CCM_CSCDR2_CSPI_CLK_PODF_OFFSET		(19)
#define MXC_CCM_CSCDR2_CSPI_CLK_PODF_MASK		(0x3F << 19)
/* MX51 */
#define MXC_CCM_CSCDR2_SIM_CLK_PRED_OFFSET		(16)
#define MXC_CCM_CSCDR2_SIM_CLK_PRED_MASK		(0x7 << 16)
#define MXC_CCM_CSCDR2_SIM_CLK_PODF_OFFSET		(9)
#define MXC_CCM_CSCDR2_SIM_CLK_PODF_MASK		(0x3F << 9)
#define MXC_CCM_CSCDR2_SLIMBUS_CLK_PRED_OFFSET	(6)
#define MXC_CCM_CSCDR2_SLIMBUS_PRED_MASK		(0x7 << 6)
#define MXC_CCM_CSCDR2_SLIMBUS_PODF_OFFSET		(0)
#define MXC_CCM_CSCDR2_SLIMBUS_PODF_MASK		(0x3F)
/* MX53 */
#define MXC_CCM_CSCDR2_ASRC_CLK_PODF_OFFSET	(9)
#define MXC_CCM_CSCDR2_ASRC_CLK_PODF_MASK		(0x3F << 9)
#define MXC_CCM_CSCDR2_IEEE_CLK_PRED_OFFSET		(6)
#define MXC_CCM_CSCDR2_IEEE_CLK_PRED_MASK		(0x7 << 6)
#define MXC_CCM_CSCDR2_IEEE_CLK_PODF_OFFSET	(0)
#define MXC_CCM_CSCDR2_IEEE_CLK_PODF_MASK		(0x3F)

/* Define the bits in register CSCDR3 */
#define MXC_CCM_CSCDR3_HSI2C_CLK_PRED_OFFSET	(16)
#define MXC_CCM_CSCDR3_HSI2C_CLK_PRED_MASK		(0x7 << 16)
#define MXC_CCM_CSCDR3_HSI2C_CLK_PODF_OFFSET	(9)
#define MXC_CCM_CSCDR3_HSI2C_CLK_PODF_MASK		(0x3F << 9)
#define MXC_CCM_CSCDR3_FIRI_CLK_PRED_OFFSET		(6)
#define MXC_CCM_CSCDR3_FIRI_CLK_PRED_MASK		(0x7 << 6)
#define MXC_CCM_CSCDR3_FIRI_CLK_PODF_OFFSET		(0)
#define MXC_CCM_CSCDR3_FIRI_CLK_PODF_MASK		(0x3F)

/* Define the bits in register CSCDR4 */
#define MXC_CCM_CSCDR4_CSI_MCLK2_CLK_PRED_OFFSET	(16)
#define MXC_CCM_CSCDR4_CSI_MCLK2_CLK_PRED_MASK	(0x7 << 16)
#define MXC_CCM_CSCDR4_CSI_MCLK2_CLK_PODF_OFFSET	(9)
#define MXC_CCM_CSCDR4_CSI_MCLK2_CLK_PODF_MASK	(0x3F << 9)
#define MXC_CCM_CSCDR4_CSI_MCLK1_CLK_PRED_OFFSET	(6)
#define MXC_CCM_CSCDR4_CSI_MCLK1_CLK_PRED_MASK	(0x7 << 6)
#define MXC_CCM_CSCDR4_CSI_MCLK1_CLK_PODF_OFFSET	(0)
#define MXC_CCM_CSCDR4_CSI_MCLK1_CLK_PODF_MASK	(0x3F)

/* Define the bits in register CDHIPR */
#define MXC_CCM_CDHIPR_ARM_PODF_BUSY			(1 << 16)
#define MXC_CCM_CDHIPR_DDR_HF_CLK_SEL_BUSY		(1 << 8)
#define MXC_CCM_CDHIPR_DDR_PODF_BUSY			(1 << 7)
#define MXC_CCM_CDHIPR_EMI_CLK_SEL_BUSY			(1 << 6)
#define MXC_CCM_CDHIPR_PERIPH_CLK_SEL_BUSY		(1 << 5)
#define MXC_CCM_CDHIPR_NFC_IPG_INT_MEM_PODF_BUSY	(1 << 4)
#define MXC_CCM_CDHIPR_AHB_PODF_BUSY			(1 << 3)
#define MXC_CCM_CDHIPR_EMI_PODF_BUSY			(1 << 2)
#define MXC_CCM_CDHIPR_AXI_B_PODF_BUSY			(1 << 1)
#define MXC_CCM_CDHIPR_AXI_A_PODF_BUSY			(1 << 0)

/* Define the bits in register CDCR */
#define MXC_CCM_CDCR_ARM_FREQ_SHIFT_DIVIDER			(0x1 << 2)
#define MXC_CCM_CDCR_PERIPH_CLK_DVFS_PODF_OFFSET		(0)
#define MXC_CCM_CDCR_PERIPH_CLK_DVFS_PODF_MASK		(0x3)

/* Define the bits in register CLPCR */
/* MX51 */
#define MXC_CCM_CLPCR_BYPASS_HSC_LPM_HS		(0x1 << 23)
#define MXC_CCM_CLPCR_BYPASS_SCC_LPM_HS_MX51		(0x1 << 22)
#define MXC_CCM_CLPCR_BYPASS_MAX_LPM_HS_MX51		(0x1 << 21)
#define MXC_CCM_CLPCR_BYPASS_SDMA_LPM_HS_MX51		(0x1 << 20)
/* MX53 */
#define MXC_CCM_CLPCR_BYPASS_CAN2_LPM_HS			(0x1 << 27)
#define MXC_CCM_CLPCR_BYPASS_CAN1_LPM_HS			(0x1 << 27)
#define MXC_CCM_CLPCR_BYPASS_SCC_LPM_HS_MX53			(0x1 << 26)
#define MXC_CCM_CLPCR_BYPASS_MAX_LPM_HS_MX53			(0x1 << 25)
#define MXC_CCM_CLPCR_BYPASS_SDMA_LPM_HS_MX53			(0x1 << 24)
#define MXC_CCM_CLPCR_BYPASS_EMI_INT2_LPM_HS		(0x1 << 23)
#define MXC_CCM_CLPCR_BYPASS_EMI_INT1_LPM_HS		(0x1 << 22)
#define MXC_CCM_CLPCR_BYPASS_EMI_SLOW_LPM_HS		(0x1 << 21)
#define MXC_CCM_CLPCR_BYPASS_EMI_FAST_LPM_HS		(0x1 << 20)
#define MXC_CCM_CLPCR_BYPASS_EMI_LPM_HS		(0x1 << 19)
#define MXC_CCM_CLPCR_BYPASS_IPU_LPM_HS		(0x1 << 18)
#define MXC_CCM_CLPCR_BYPASS_RTIC_LPM_HS		(0x1 << 17)
#define MXC_CCM_CLPCR_BYPASS_RNGC_LPM_HS		(0x1 << 16)
#define MXC_CCM_CLPCR_COSC_PWRDOWN			(0x1 << 11)
#define MXC_CCM_CLPCR_STBY_COUNT_OFFSET		(9)
#define MXC_CCM_CLPCR_STBY_COUNT_MASK		(0x3 << 9)
#define MXC_CCM_CLPCR_VSTBY				(0x1 << 8)
#define MXC_CCM_CLPCR_DIS_REF_OSC			(0x1 << 7)
#define MXC_CCM_CLPCR_SBYOS				(0x1 << 6)
#define MXC_CCM_CLPCR_ARM_CLK_DIS_ON_LPM		(0x1 << 5)
#define MXC_CCM_CLPCR_LPSR_CLK_SEL_OFFSET		(3)
#define MXC_CCM_CLPCR_LPSR_CLK_SEL_MASK		(0x3 << 3)
#define MXC_CCM_CLPCR_LPM_OFFSET			(0)
#define MXC_CCM_CLPCR_LPM_MASK			(0x3)

/* Define the bits in register CISR */
#define MXC_CCM_CISR_ARM_PODF_LOADED_MX51		(0x1 << 25)
#define MXC_CCM_CISR_ARM_PODF_LOADED_MX53		(0x1 << 26)
#define MXC_CCM_CISR_TEMP_MON_ALARM				(0x1 << 25)
#define MXC_CCM_CISR_EMI_CLK_SEL_LOADED			(0x1 << 23)
#define MXC_CCM_CISR_PER_CLK_SEL_LOADED			(0x1 << 22)
#define MXC_CCM_CISR_NFC_IPG_INT_MEM_PODF_LOADED		(0x1 << 21)
#define MXC_CCM_CISR_AHB_PODF_LOADED			(0x1 << 20)
#define MXC_CCM_CISR_EMI_PODF_LOADED				(0x1 << 19)
#define MXC_CCM_CISR_AXI_B_PODF_LOADED			(0x1 << 18)
#define MXC_CCM_CISR_AXI_A_PODF_LOADED			(0x1 << 17)
#define MXC_CCM_CISR_DIVIDER_LOADED				(0x1 << 16)
#define MXC_CCM_CISR_COSC_READY				(0x1 << 6)
#define MXC_CCM_CISR_CKIH2_READY				(0x1 << 5)
#define MXC_CCM_CISR_CKIH_READY				(0x1 << 4)
#define MXC_CCM_CISR_FPM_READY				(0x1 << 3)
#define MXC_CCM_CISR_LRF_PLL3					(0x1 << 2)
#define MXC_CCM_CISR_LRF_PLL2					(0x1 << 1)
#define MXC_CCM_CISR_LRF_PLL1					(0x1)

/* Define the bits in register CIMR */
#define MXC_CCM_CIMR_MASK_ARM_PODF_LOADED_MX51		(0x1 << 25)
#define MXC_CCM_CIMR_MASK_EMI_PODF_LOADED_MX51		(0x1 << 20)
#define MXC_CCM_CIMR_MASK_AXI_C_PODF_LOADED_MX51	(0x1 << 19)
#define MXC_CCM_CIMR_MASK_ARM_PODF_LOADED_MX53		(0x1 << 26)
#define MXC_CCM_CIMR_MASK_TEMP_MON_ALARM		(0x1 << 25)
#define MXC_CCM_CIMR_MASK_EMI_CLK_SEL_LOADED		(0x1 << 23)
#define MXC_CCM_CIMR_MASK_PER_CLK_SEL_LOADED		(0x1 << 22)
#define MXC_CCM_CIMR_MASK_NFC_IPG_INT_MEM_PODF_LOADED	(0x1 << 21)
#define MXC_CCM_CIMR_MASK_AHB_PODF_LOADED_MX53		(0x1 << 20)
#define MXC_CCM_CIMR_MASK_EMI_SLOW_PODF_LOADED_MX53		(0x1 << 19)
#define MXC_CCM_CIMR_MASK_AXI_B_PODF_LOADED		(0x1 << 18)
#define MXC_CCM_CIMR_MASK_AXI_A_PODF_LOADED		(0x1 << 17)
#define MXC_CCM_CIMR_MASK_DIVIDER_LOADED		(0x1 << 16)
/* MX51 */
#define MXC_CCM_CIMR_MASK_COSC_READY_MX51			(0x1 << 5)
#define MXC_CCM_CIMR_MASK_CKIH_READY			(0x1 << 4)
#define MXC_CCM_CIMR_MASK_FPM_READY			(0x1 << 3)
/* MX53 */
#define MXC_CCM_CIMR_MASK_COSC_READY_MX53			(0x1 << 6)
#define MXC_CCM_CIMR_MASK_CAMP2_READY			(0x1 << 5)
#define MXC_CCM_CIMR_MASK_CAMP1_READY			(0x1 << 4)
#define MXC_CCM_CIMR_MASK_LRF_PLL4			(0x1 << 3)
#define MXC_CCM_CIMR_MASK_LRF_PLL3			(0x1 << 2)
#define MXC_CCM_CIMR_MASK_LRF_PLL2			(0x1 << 1)
#define MXC_CCM_CIMR_MASK_LRF_PLL1			(0x1)

/* Define the bits in register CCOSR */
#define MXC_CCM_CCOSR_CKO2_EN_OFFSET			(0x1 << 24)
#define MXC_CCM_CCOSR_CKO2_DIV_OFFSET			(21)
#define MXC_CCM_CCOSR_CKO2_DIV_MASK			(0x7 << 21)
#define MXC_CCM_CCOSR_CKO2_SEL_OFFSET			(16)
#define MXC_CCM_CCOSR_CKO2_SEL_MASK			(0x1F << 16)
#define MXC_CCM_CCOSR_CKOL_EN				(0x1 << 7)
#define MXC_CCM_CCOSR_CKOL_DIV_OFFSET			(4)
#define MXC_CCM_CCOSR_CKOL_DIV_MASK			(0x7 << 4)
#define MXC_CCM_CCOSR_CKOL_SEL_OFFSET			(0)
#define MXC_CCM_CCOSR_CKOL_SEL_MASK			(0xF)

/* Define the bits in registers CGPR */
#define MXC_CCM_CGPR_ARM_CLK_INPUT_SEL				(0x1 << 24)
#define MXC_CCM_CGPR_ARM_ASYNC_REF_EN				(0x1 << 23)
#define MXC_CCM_CGPR_EFUSE_PROG_SUPPLY_GATE		(0x1 << 4)
#define MXC_CCM_CGPR_FPM_SEL				(0x1 << 3)
#define MXC_CCM_CGPR_VL_L2BIST_CLKDIV_OFFSET		(0)
#define MXC_CCM_CGPR_VL_L2BIST_CLKDIV_MASK		(0x7)

/* Define the bits in registers CCGRx */
#define MXC_CCM_CCGR_CG_MASK				0x3

#define MXC_CCM_CCGR0_CG15_OFFSET			30
#define MXC_CCM_CCGR0_CG15_MASK			(0x3 << 30)
#define MXC_CCM_CCGR0_CG14_OFFSET			28
#define MXC_CCM_CCGR0_CG14_MASK			(0x3 << 28)
#define MXC_CCM_CCGR0_CG13_OFFSET			26
#define MXC_CCM_CCGR0_CG13_MASK			(0x3 << 26)
#define MXC_CCM_CCGR0_CG12_OFFSET			24
#define MXC_CCM_CCGR0_CG12_MASK			(0x3 << 24)
#define MXC_CCM_CCGR0_CG11_OFFSET			22
#define MXC_CCM_CCGR0_CG11_MASK			(0x3 << 22)
#define MXC_CCM_CCGR0_CG10_OFFSET			20
#define MXC_CCM_CCGR0_CG10_MASK			(0x3 << 20)
#define MXC_CCM_CCGR0_CG9_OFFSET			18
#define MXC_CCM_CCGR0_CG9_MASK			(0x3 << 18)
#define MXC_CCM_CCGR0_CG8_OFFSET			16
#define MXC_CCM_CCGR0_CG8_MASK			(0x3 << 16)
#define MXC_CCM_CCGR0_CG7_OFFSET			14
#define MXC_CCM_CCGR0_CG6_OFFSET			12
#define MXC_CCM_CCGR0_CG5_OFFSET			10
#define MXC_CCM_CCGR0_CG5_MASK			(0x3 << 10)
#define MXC_CCM_CCGR0_CG4_OFFSET			8
#define MXC_CCM_CCGR0_CG4_MASK			(0x3 << 8)
#define MXC_CCM_CCGR0_CG3_OFFSET			6
#define MXC_CCM_CCGR0_CG3_MASK			(0x3 << 6)
#define MXC_CCM_CCGR0_CG2_OFFSET			4
#define MXC_CCM_CCGR0_CG2_MASK			(0x3 << 4)
#define MXC_CCM_CCGR0_CG1_OFFSET			2
#define MXC_CCM_CCGR0_CG1_MASK			(0x3 << 2)
#define MXC_CCM_CCGR0_CG0_OFFSET			0
#define MXC_CCM_CCGR0_CG0_MASK			0x3

#define MXC_CCM_CCGR1_CG15_OFFSET			30
#define MXC_CCM_CCGR1_CG14_OFFSET			28
#define MXC_CCM_CCGR1_CG13_OFFSET			26
#define MXC_CCM_CCGR1_CG12_OFFSET			24
#define MXC_CCM_CCGR1_CG11_OFFSET			22
#define MXC_CCM_CCGR1_CG10_OFFSET			20
#define MXC_CCM_CCGR1_CG9_OFFSET			18
#define MXC_CCM_CCGR1_CG8_OFFSET			16
#define MXC_CCM_CCGR1_CG7_OFFSET			14
#define MXC_CCM_CCGR1_CG6_OFFSET			12
#define MXC_CCM_CCGR1_CG5_OFFSET			10
#define MXC_CCM_CCGR1_CG4_OFFSET			8
#define MXC_CCM_CCGR1_CG3_OFFSET			6
#define MXC_CCM_CCGR1_CG2_OFFSET			4
#define MXC_CCM_CCGR1_CG1_OFFSET			2
#define MXC_CCM_CCGR1_CG0_OFFSET			0

#define MXC_CCM_CCGR2_CG15_OFFSET			30
#define MXC_CCM_CCGR2_CG14_OFFSET			28
#define MXC_CCM_CCGR2_CG13_OFFSET			26
#define MXC_CCM_CCGR2_CG12_OFFSET			24
#define MXC_CCM_CCGR2_CG11_OFFSET			22
#define MXC_CCM_CCGR2_CG10_OFFSET			20
#define MXC_CCM_CCGR2_CG9_OFFSET			18
#define MXC_CCM_CCGR2_CG8_OFFSET			16
#define MXC_CCM_CCGR2_CG7_OFFSET			14
#define MXC_CCM_CCGR2_CG6_OFFSET			12
#define MXC_CCM_CCGR2_CG5_OFFSET			10
#define MXC_CCM_CCGR2_CG4_OFFSET			8
#define MXC_CCM_CCGR2_CG3_OFFSET			6
#define MXC_CCM_CCGR2_CG2_OFFSET			4
#define MXC_CCM_CCGR2_CG1_OFFSET			2
#define MXC_CCM_CCGR2_CG0_OFFSET			0

#define MXC_CCM_CCGR3_CG15_OFFSET			30
#define MXC_CCM_CCGR3_CG14_OFFSET			28
#define MXC_CCM_CCGR3_CG13_OFFSET			26
#define MXC_CCM_CCGR3_CG12_OFFSET			24
#define MXC_CCM_CCGR3_CG11_OFFSET			22
#define MXC_CCM_CCGR3_CG10_OFFSET			20
#define MXC_CCM_CCGR3_CG9_OFFSET			18
#define MXC_CCM_CCGR3_CG8_OFFSET			16
#define MXC_CCM_CCGR3_CG7_OFFSET			14
#define MXC_CCM_CCGR3_CG6_OFFSET			12
#define MXC_CCM_CCGR3_CG5_OFFSET			10
#define MXC_CCM_CCGR3_CG4_OFFSET			8
#define MXC_CCM_CCGR3_CG3_OFFSET			6
#define MXC_CCM_CCGR3_CG2_OFFSET			4
#define MXC_CCM_CCGR3_CG1_OFFSET			2
#define MXC_CCM_CCGR3_CG0_OFFSET			0

#define MXC_CCM_CCGR4_CG15_OFFSET			30
#define MXC_CCM_CCGR4_CG14_OFFSET			28
#define MXC_CCM_CCGR4_CG13_OFFSET			26
#define MXC_CCM_CCGR4_CG12_OFFSET			24
#define MXC_CCM_CCGR4_CG11_OFFSET			22
#define MXC_CCM_CCGR4_CG10_OFFSET			20
#define MXC_CCM_CCGR4_CG9_OFFSET			18
#define MXC_CCM_CCGR4_CG8_OFFSET			16
#define MXC_CCM_CCGR4_CG7_OFFSET			14
#define MXC_CCM_CCGR4_CG6_OFFSET			12
#define MXC_CCM_CCGR4_CG5_OFFSET			10
#define MXC_CCM_CCGR4_CG4_OFFSET			8
#define MXC_CCM_CCGR4_CG3_OFFSET			6
#define MXC_CCM_CCGR4_CG2_OFFSET			4
#define MXC_CCM_CCGR4_CG1_OFFSET			2
#define MXC_CCM_CCGR4_CG0_OFFSET			0

#define MXC_CCM_CCGR5_CG15_OFFSET			30
#define MXC_CCM_CCGR5_CG14_OFFSET			28
#define MXC_CCM_CCGR5_CG14_MASK			(0x3 << 28)
#define MXC_CCM_CCGR5_CG13_OFFSET			26
#define MXC_CCM_CCGR5_CG13_MASK			(0x3 << 26)
#define MXC_CCM_CCGR5_CG12_OFFSET			24
#define MXC_CCM_CCGR5_CG12_MASK			(0x3 << 24)
#define MXC_CCM_CCGR5_CG11_OFFSET			22
#define MXC_CCM_CCGR5_CG11_MASK			(0x3 << 22)
#define MXC_CCM_CCGR5_CG10_OFFSET			20
#define MXC_CCM_CCGR5_CG10_MASK			(0x3 << 20)
#define MXC_CCM_CCGR5_CG9_OFFSET			18
#define MXC_CCM_CCGR5_CG9_MASK			(0x3 << 18)
#define MXC_CCM_CCGR5_CG8_OFFSET			16
#define MXC_CCM_CCGR5_CG8_MASK			(0x3 << 16)
#define MXC_CCM_CCGR5_CG7_OFFSET			14
#define MXC_CCM_CCGR5_CG7_MASK			(0x3 << 14)
#define MXC_CCM_CCGR5_CG6_1_OFFSET		12
#define MXC_CCM_CCGR5_CG6_2_OFFSET		13
#define MXC_CCM_CCGR5_CG6_OFFSET			12
#define MXC_CCM_CCGR5_CG6_MASK			(0x3 << 12)
#define MXC_CCM_CCGR5_CG5_OFFSET			10
#define MXC_CCM_CCGR5_CG4_OFFSET			8
#define MXC_CCM_CCGR5_CG3_OFFSET			6
#define MXC_CCM_CCGR5_CG2_OFFSET			4
#define MXC_CCM_CCGR5_CG2_MASK			(0x3 << 4)
#define MXC_CCM_CCGR5_CG1_OFFSET			2
#define MXC_CCM_CCGR5_CG0_OFFSET			0

#define MXC_CCM_CCGR6_CG15_OFFSET			30
#define MXC_CCM_CCGR6_CG14_OFFSET			28
#define MXC_CCM_CCGR6_CG14_MASK			(0x3 << 28)
#define MXC_CCM_CCGR6_CG13_OFFSET			26
#define MXC_CCM_CCGR6_CG13_MASK			(0x3 << 26)
#define MXC_CCM_CCGR6_CG12_OFFSET			24
#define MXC_CCM_CCGR6_CG12_MASK			(0x3 << 24)
#define MXC_CCM_CCGR6_CG11_OFFSET			22
#define MXC_CCM_CCGR6_CG11_MASK			(0x3 << 22)
#define MXC_CCM_CCGR6_CG10_OFFSET			20
#define MXC_CCM_CCGR6_CG10_MASK			(0x3 << 20)
#define MXC_CCM_CCGR6_CG9_OFFSET			18
#define MXC_CCM_CCGR6_CG9_MASK			(0x3 << 18)
#define MXC_CCM_CCGR6_CG8_OFFSET			16
#define MXC_CCM_CCGR6_CG8_MASK			(0x3 << 16)
#define MXC_CCM_CCGR6_CG7_OFFSET            14
#define MXC_CCM_CCGR6_CG7_MASK          (0x3 << 14)
#define MXC_CCM_CCGR6_CG6_OFFSET			12
#define MXC_CCM_CCGR6_CG6_MASK			(0x3 << 12)
#define MXC_CCM_CCGR6_CG5_OFFSET			10
#define MXC_CCM_CCGR6_CG5_MASK			(0x3 << 10)
#define MXC_CCM_CCGR6_CG4_OFFSET			8
#define MXC_CCM_CCGR6_CG4_MASK			(0x3 << 8)
#define MXC_CCM_CCGR6_CG3_OFFSET			6
#define MXC_CCM_CCGR6_CG2_OFFSET			4
#define MXC_CCM_CCGR6_CG2_MASK			(0x3 << 4)
#define MXC_CCM_CCGR6_CG1_OFFSET			2
#define MXC_CCM_CCGR6_CG0_OFFSET			0

#define MXC_CCM_CCGR7_CG15_OFFSET			30
#define MXC_CCM_CCGR7_CG14_OFFSET			28
#define MXC_CCM_CCGR7_CG14_MASK			(0x3 << 28)
#define MXC_CCM_CCGR7_CG13_OFFSET			26
#define MXC_CCM_CCGR7_CG13_MASK			(0x3 << 26)
#define MXC_CCM_CCGR7_CG12_OFFSET			24
#define MXC_CCM_CCGR7_CG12_MASK			(0x3 << 24)
#define MXC_CCM_CCGR7_CG11_OFFSET			22
#define MXC_CCM_CCGR7_CG11_MASK			(0x3 << 22)
#define MXC_CCM_CCGR7_CG10_OFFSET			20
#define MXC_CCM_CCGR7_CG10_MASK			(0x3 << 20)
#define MXC_CCM_CCGR7_CG9_OFFSET			18
#define MXC_CCM_CCGR7_CG9_MASK			(0x3 << 18)
#define MXC_CCM_CCGR7_CG8_OFFSET			16
#define MXC_CCM_CCGR7_CG8_MASK			(0x3 << 16)
#define MXC_CCM_CCGR7_CG7_OFFSET			14
#define MXC_CCM_CCGR7_CG7_MASK			(0x3 << 14)
#define MXC_CCM_CCGR7_CG6_OFFSET			12
#define MXC_CCM_CCGR7_CG6_MASK			(0x3 << 12)
#define MXC_CCM_CCGR7_CG5_OFFSET			10
#define MXC_CCM_CCGR7_CG4_OFFSET			8
#define MXC_CCM_CCGR7_CG3_OFFSET			6
#define MXC_CCM_CCGR7_CG2_OFFSET			4
#define MXC_CCM_CCGR7_CG2_MASK			(0x3 << 4)
#define MXC_CCM_CCGR7_CG1_OFFSET			2
#define MXC_CCM_CCGR7_CG0_OFFSET			0

#define MXC_GPC_BASE		(IO_ADDRESS(GPC_BASE_ADDR))
#define MXC_DPTC_LP_BASE	(MXC_GPC_BASE + 0x80)
#define MXC_DPTC_GP_BASE	(MXC_GPC_BASE + 0x100)
#define MXC_DVFS_CORE_BASE	(MXC_GPC_BASE + 0x180)
#define MXC_DVFS_PER_BASE	(MXC_GPC_BASE + 0x1C4)
#define MXC_PGC_IPU_BASE	(MXC_GPC_BASE + 0x220)
#define MXC_PGC_VPU_BASE	(MXC_GPC_BASE + 0x240)
#define MXC_PGC_GPU_BASE	(MXC_GPC_BASE + 0x260)
#define MXC_SRPG_NEON_BASE	(MXC_GPC_BASE + 0x280)
#define MXC_SRPG_ARM_BASE	(MXC_GPC_BASE + 0x2A0)
#define MXC_SRPG_EMPGC0_BASE	(MXC_GPC_BASE + 0x2C0)
#define MXC_SRPG_EMPGC1_BASE	(MXC_GPC_BASE + 0x2D0)
#define MXC_SRPG_MEGAMIX_BASE	(MXC_GPC_BASE + 0x2E0)
#define MXC_SRPG_EMI_BASE	(MXC_GPC_BASE + 0x300)

/* CORTEXA8 platform */
extern void __iomem *arm_plat_base;
#define MXC_CORTEXA8_BASE		(arm_plat_base)
#define MXC_CORTEXA8_PLAT_PVID		(arm_plat_base + 0x0)
#define MXC_CORTEXA8_PLAT_GPC		(arm_plat_base + 0x4)
#define MXC_CORTEXA8_PLAT_PIC		(arm_plat_base + 0x8)
#define MXC_CORTEXA8_PLAT_LPC		(arm_plat_base + 0xC)
#define MXC_CORTEXA8_PLAT_NEON_LPC	(arm_plat_base + 0x10)
#define MXC_CORTEXA8_PLAT_ICGC		(arm_plat_base + 0x14)
#define MXC_CORTEXA8_PLAT_AMC		(arm_plat_base + 0x18)
#define MXC_CORTEXA8_PLAT_NMC		(arm_plat_base + 0x20)
#define MXC_CORTEXA8_PLAT_NMS		(arm_plat_base + 0x24)

/* DVFS CORE */
#define MXC_DVFSTHRS		(MXC_DVFS_CORE_BASE + 0x00)
#define MXC_DVFSCOUN		(MXC_DVFS_CORE_BASE + 0x04)
#define MXC_DVFSSIG1		(MXC_DVFS_CORE_BASE + 0x08)
#define MXC_DVFSSIG0		(MXC_DVFS_CORE_BASE + 0x0C)
#define MXC_DVFSGPC0		(MXC_DVFS_CORE_BASE + 0x10)
#define MXC_DVFSGPC1		(MXC_DVFS_CORE_BASE + 0x14)
#define MXC_DVFSGPBT		(MXC_DVFS_CORE_BASE + 0x18)
#define MXC_DVFSEMAC		(MXC_DVFS_CORE_BASE + 0x1C)
#define MXC_DVFSCNTR		(MXC_DVFS_CORE_BASE + 0x20)
#define MXC_DVFSLTR0_0		(MXC_DVFS_CORE_BASE + 0x24)
#define MXC_DVFSLTR0_1		(MXC_DVFS_CORE_BASE + 0x28)
#define MXC_DVFSLTR1_0		(MXC_DVFS_CORE_BASE + 0x2C)
#define MXC_DVFSLTR1_1		(MXC_DVFS_CORE_BASE + 0x30)
#define MXC_DVFSPT0 		(MXC_DVFS_CORE_BASE + 0x34)
#define MXC_DVFSPT1 		(MXC_DVFS_CORE_BASE + 0x38)
#define MXC_DVFSPT2 		(MXC_DVFS_CORE_BASE + 0x3C)
#define MXC_DVFSPT3 		(MXC_DVFS_CORE_BASE + 0x40)

/* DVFS PER */
#define MXC_DVFSPER_LTR0	(MXC_DVFS_PER_BASE)
#define MXC_DVFSPER_LTR1	(MXC_DVFS_PER_BASE + 0x04)
#define MXC_DVFSPER_LTR2	(MXC_DVFS_PER_BASE + 0x08)
#define MXC_DVFSPER_LTR3	(MXC_DVFS_PER_BASE + 0x0C)
#define MXC_DVFSPER_LTBR0	(MXC_DVFS_PER_BASE + 0x10)
#define MXC_DVFSPER_LTBR1	(MXC_DVFS_PER_BASE + 0x14)
#define MXC_DVFSPER_PMCR0	(MXC_DVFS_PER_BASE + 0x18)
#define MXC_DVFSPER_PMCR1	(MXC_DVFS_PER_BASE + 0x1C)

/* GPC */
#define MXC_GPC_CNTR		(MXC_GPC_BASE + 0x0)
#define MXC_GPC_PGR		(MXC_GPC_BASE + 0x4)
#define MXC_GPC_VCR		(MXC_GPC_BASE + 0x8)
#define MXC_GPC_ALL_PU		(MXC_GPC_BASE + 0xC)
#define MXC_GPC_NEON		(MXC_GPC_BASE + 0x10)

/* PGC */
#define MXC_PGC_IPU_PGCR	(MXC_PGC_IPU_BASE + 0x0)
#define MXC_PGC_IPU_PGSR	(MXC_PGC_IPU_BASE + 0xC)
#define MXC_PGC_VPU_PGCR	(MXC_PGC_VPU_BASE + 0x0)
#define MXC_PGC_VPU_PGSR	(MXC_PGC_VPU_BASE + 0xC)
#define MXC_PGC_GPU_PGCR	(MXC_PGC_GPU_BASE + 0x0)
#define MXC_PGC_GPU_PGSR	(MXC_PGC_GPU_BASE + 0xC)

#define MXC_PGCR_PCR		1
#define MXC_SRPGCR_PCR		1
#define MXC_EMPGCR_PCR		1
#define MXC_PGSR_PSR		1


#define MXC_CORTEXA8_PLAT_LPC_DSM	(1 << 0)
#define MXC_CORTEXA8_PLAT_LPC_DBG_DSM	(1 << 1)

/* SRPG */
#define MXC_SRPG_NEON_SRPGCR	(MXC_SRPG_NEON_BASE + 0x0)
#define MXC_SRPG_NEON_PUPSCR	(MXC_SRPG_NEON_BASE + 0x4)
#define MXC_SRPG_NEON_PDNSCR	(MXC_SRPG_NEON_BASE + 0x8)

#define MXC_SRPG_ARM_SRPGCR	(MXC_SRPG_ARM_BASE + 0x0)
#define MXC_SRPG_ARM_PUPSCR	(MXC_SRPG_ARM_BASE + 0x4)
#define MXC_SRPG_ARM_PDNSCR	(MXC_SRPG_ARM_BASE + 0x8)

#define MXC_SRPG_EMPGC0_SRPGCR	(MXC_SRPG_EMPGC0_BASE + 0x0)
#define MXC_SRPG_EMPGC0_PUPSCR	(MXC_SRPG_EMPGC0_BASE + 0x4)
#define MXC_SRPG_EMPGC0_PDNSCR	(MXC_SRPG_EMPGC0_BASE + 0x8)

#define MXC_SRPG_EMPGC1_SRPGCR	(MXC_SRPG_EMPGC1_BASE + 0x0)
#define MXC_SRPG_EMPGC1_PUPSCR	(MXC_SRPG_EMPGC1_BASE + 0x4)
#define MXC_SRPG_EMPGC1_PDNSCR	(MXC_SRPG_EMPGC1_BASE + 0x8)

#define MXC_SRPG_MEGAMIX_SRPGCR		(MXC_SRPG_MEGAMIX_BASE + 0x0)
#define MXC_SRPG_MEGAMIX_PUPSCR		(MXC_SRPG_MEGAMIX_BASE + 0x4)
#define MXC_SRPG_MEGAMIX_PDNSCR		(MXC_SRPG_MEGAMIX_BASE + 0x8)

#define MXC_SRPGC_EMI_SRPGCR	(MXC_SRPGC_EMI_BASE + 0x0)
#define MXC_SRPGC_EMI_PUPSCR	(MXC_SRPGC_EMI_BASE + 0x4)
#define MXC_SRPGC_EMI_PDNSCR	(MXC_SRPGC_EMI_BASE + 0x8)

#endif				/* __ARCH_ARM_MACH_MX51_CRM_REGS_H__ */
