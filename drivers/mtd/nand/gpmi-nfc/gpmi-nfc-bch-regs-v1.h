/*
 * Freescale GPMI NFC NAND Flash Driver
 *
 * Copyright 2008-2010 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 *
 * Xml Revision: 2.5
 * Template revision: 26195
 */

#ifndef __GPMI_NFC_BCH_REGS_H
#define __GPMI_NFC_BCH_REGS_H

/*============================================================================*/

#define HW_BCH_CTRL	(0x00000000)
#define HW_BCH_CTRL_SET	(0x00000004)
#define HW_BCH_CTRL_CLR	(0x00000008)
#define HW_BCH_CTRL_TOG	(0x0000000c)

#define BM_BCH_CTRL_SFTRST	0x80000000
#define BV_BCH_CTRL_SFTRST__RUN   0x0
#define BV_BCH_CTRL_SFTRST__RESET 0x1
#define BM_BCH_CTRL_CLKGATE	0x40000000
#define BV_BCH_CTRL_CLKGATE__RUN     0x0
#define BV_BCH_CTRL_CLKGATE__NO_CLKS 0x1
#define BP_BCH_CTRL_RSVD5	23
#define BM_BCH_CTRL_RSVD5	0x3F800000
#define BF_BCH_CTRL_RSVD5(v)  \
		(((v) << 23) & BM_BCH_CTRL_RSVD5)
#define BM_BCH_CTRL_DEBUGSYNDROME	0x00400000
#define BP_BCH_CTRL_RSVD4	20
#define BM_BCH_CTRL_RSVD4	0x00300000
#define BF_BCH_CTRL_RSVD4(v)  \
		(((v) << 20) & BM_BCH_CTRL_RSVD4)
#define BP_BCH_CTRL_M2M_LAYOUT	18
#define BM_BCH_CTRL_M2M_LAYOUT	0x000C0000
#define BF_BCH_CTRL_M2M_LAYOUT(v)  \
		(((v) << 18) & BM_BCH_CTRL_M2M_LAYOUT)
#define BM_BCH_CTRL_M2M_ENCODE	0x00020000
#define BM_BCH_CTRL_M2M_ENABLE	0x00010000
#define BP_BCH_CTRL_RSVD3	11
#define BM_BCH_CTRL_RSVD3	0x0000F800
#define BF_BCH_CTRL_RSVD3(v)  \
		(((v) << 11) & BM_BCH_CTRL_RSVD3)
#define BM_BCH_CTRL_DEBUG_STALL_IRQ_EN	0x00000400
#define BM_BCH_CTRL_RSVD2	0x00000200
#define BM_BCH_CTRL_COMPLETE_IRQ_EN	0x00000100
#define BP_BCH_CTRL_RSVD1	4
#define BM_BCH_CTRL_RSVD1	0x000000F0
#define BF_BCH_CTRL_RSVD1(v)  \
		(((v) << 4) & BM_BCH_CTRL_RSVD1)
#define BM_BCH_CTRL_BM_ERROR_IRQ	0x00000008
#define BM_BCH_CTRL_DEBUG_STALL_IRQ	0x00000004
#define BM_BCH_CTRL_RSVD0	0x00000002
#define BM_BCH_CTRL_COMPLETE_IRQ	0x00000001

/*============================================================================*/

#define HW_BCH_STATUS0	(0x00000010)

#define BP_BCH_STATUS0_HANDLE	20
#define BM_BCH_STATUS0_HANDLE	0xFFF00000
#define BF_BCH_STATUS0_HANDLE(v) \
		(((v) << 20) & BM_BCH_STATUS0_HANDLE)
#define BP_BCH_STATUS0_COMPLETED_CE	16
#define BM_BCH_STATUS0_COMPLETED_CE	0x000F0000
#define BF_BCH_STATUS0_COMPLETED_CE(v)  \
		(((v) << 16) & BM_BCH_STATUS0_COMPLETED_CE)
#define BP_BCH_STATUS0_STATUS_BLK0	8
#define BM_BCH_STATUS0_STATUS_BLK0	0x0000FF00
#define BF_BCH_STATUS0_STATUS_BLK0(v)  \
		(((v) << 8) & BM_BCH_STATUS0_STATUS_BLK0)
#define BV_BCH_STATUS0_STATUS_BLK0__ZERO          0x00
#define BV_BCH_STATUS0_STATUS_BLK0__ERROR1        0x01
#define BV_BCH_STATUS0_STATUS_BLK0__ERROR2        0x02
#define BV_BCH_STATUS0_STATUS_BLK0__ERROR3        0x03
#define BV_BCH_STATUS0_STATUS_BLK0__ERROR4        0x04
#define BV_BCH_STATUS0_STATUS_BLK0__UNCORRECTABLE 0xFE
#define BV_BCH_STATUS0_STATUS_BLK0__ERASED        0xFF
#define BP_BCH_STATUS0_RSVD1	5
#define BM_BCH_STATUS0_RSVD1	0x000000E0
#define BF_BCH_STATUS0_RSVD1(v)  \
		(((v) << 5) & BM_BCH_STATUS0_RSVD1)
#define BM_BCH_STATUS0_ALLONES	0x00000010
#define BM_BCH_STATUS0_CORRECTED	0x00000008
#define BM_BCH_STATUS0_UNCORRECTABLE	0x00000004
#define BP_BCH_STATUS0_RSVD0	0
#define BM_BCH_STATUS0_RSVD0	0x00000003
#define BF_BCH_STATUS0_RSVD0(v)  \
		(((v) << 0) & BM_BCH_STATUS0_RSVD0)

/*============================================================================*/

#define HW_BCH_MODE	(0x00000020)

#define BP_BCH_MODE_RSVD	8
#define BM_BCH_MODE_RSVD	0xFFFFFF00
#define BF_BCH_MODE_RSVD(v) \
		(((v) << 8) & BM_BCH_MODE_RSVD)
#define BP_BCH_MODE_ERASE_THRESHOLD	0
#define BM_BCH_MODE_ERASE_THRESHOLD	0x000000FF
#define BF_BCH_MODE_ERASE_THRESHOLD(v)  \
		(((v) << 0) & BM_BCH_MODE_ERASE_THRESHOLD)

/*============================================================================*/

#define HW_BCH_ENCODEPTR	(0x00000030)

#define BP_BCH_ENCODEPTR_ADDR	0
#define BM_BCH_ENCODEPTR_ADDR	0xFFFFFFFF
#define BF_BCH_ENCODEPTR_ADDR(v)	(v)

/*============================================================================*/

#define HW_BCH_DATAPTR	(0x00000040)

#define BP_BCH_DATAPTR_ADDR	0
#define BM_BCH_DATAPTR_ADDR	0xFFFFFFFF
#define BF_BCH_DATAPTR_ADDR(v)	(v)

/*============================================================================*/

#define HW_BCH_METAPTR	(0x00000050)

#define BP_BCH_METAPTR_ADDR	0
#define BM_BCH_METAPTR_ADDR	0xFFFFFFFF
#define BF_BCH_METAPTR_ADDR(v)	(v)

/*============================================================================*/

#define HW_BCH_LAYOUTSELECT	(0x00000070)

#define BP_BCH_LAYOUTSELECT_CS15_SELECT	30
#define BM_BCH_LAYOUTSELECT_CS15_SELECT	0xC0000000
#define BF_BCH_LAYOUTSELECT_CS15_SELECT(v) \
		(((v) << 30) & BM_BCH_LAYOUTSELECT_CS15_SELECT)
#define BP_BCH_LAYOUTSELECT_CS14_SELECT	28
#define BM_BCH_LAYOUTSELECT_CS14_SELECT	0x30000000
#define BF_BCH_LAYOUTSELECT_CS14_SELECT(v)  \
		(((v) << 28) & BM_BCH_LAYOUTSELECT_CS14_SELECT)
#define BP_BCH_LAYOUTSELECT_CS13_SELECT	26
#define BM_BCH_LAYOUTSELECT_CS13_SELECT	0x0C000000
#define BF_BCH_LAYOUTSELECT_CS13_SELECT(v)  \
		(((v) << 26) & BM_BCH_LAYOUTSELECT_CS13_SELECT)
#define BP_BCH_LAYOUTSELECT_CS12_SELECT	24
#define BM_BCH_LAYOUTSELECT_CS12_SELECT	0x03000000
#define BF_BCH_LAYOUTSELECT_CS12_SELECT(v)  \
		(((v) << 24) & BM_BCH_LAYOUTSELECT_CS12_SELECT)
#define BP_BCH_LAYOUTSELECT_CS11_SELECT	22
#define BM_BCH_LAYOUTSELECT_CS11_SELECT	0x00C00000
#define BF_BCH_LAYOUTSELECT_CS11_SELECT(v)  \
		(((v) << 22) & BM_BCH_LAYOUTSELECT_CS11_SELECT)
#define BP_BCH_LAYOUTSELECT_CS10_SELECT	20
#define BM_BCH_LAYOUTSELECT_CS10_SELECT	0x00300000
#define BF_BCH_LAYOUTSELECT_CS10_SELECT(v)  \
		(((v) << 20) & BM_BCH_LAYOUTSELECT_CS10_SELECT)
#define BP_BCH_LAYOUTSELECT_CS9_SELECT	18
#define BM_BCH_LAYOUTSELECT_CS9_SELECT	0x000C0000
#define BF_BCH_LAYOUTSELECT_CS9_SELECT(v)  \
		(((v) << 18) & BM_BCH_LAYOUTSELECT_CS9_SELECT)
#define BP_BCH_LAYOUTSELECT_CS8_SELECT	16
#define BM_BCH_LAYOUTSELECT_CS8_SELECT	0x00030000
#define BF_BCH_LAYOUTSELECT_CS8_SELECT(v)  \
		(((v) << 16) & BM_BCH_LAYOUTSELECT_CS8_SELECT)
#define BP_BCH_LAYOUTSELECT_CS7_SELECT	14
#define BM_BCH_LAYOUTSELECT_CS7_SELECT	0x0000C000
#define BF_BCH_LAYOUTSELECT_CS7_SELECT(v)  \
		(((v) << 14) & BM_BCH_LAYOUTSELECT_CS7_SELECT)
#define BP_BCH_LAYOUTSELECT_CS6_SELECT	12
#define BM_BCH_LAYOUTSELECT_CS6_SELECT	0x00003000
#define BF_BCH_LAYOUTSELECT_CS6_SELECT(v)  \
		(((v) << 12) & BM_BCH_LAYOUTSELECT_CS6_SELECT)
#define BP_BCH_LAYOUTSELECT_CS5_SELECT	10
#define BM_BCH_LAYOUTSELECT_CS5_SELECT	0x00000C00
#define BF_BCH_LAYOUTSELECT_CS5_SELECT(v)  \
		(((v) << 10) & BM_BCH_LAYOUTSELECT_CS5_SELECT)
#define BP_BCH_LAYOUTSELECT_CS4_SELECT	8
#define BM_BCH_LAYOUTSELECT_CS4_SELECT	0x00000300
#define BF_BCH_LAYOUTSELECT_CS4_SELECT(v)  \
		(((v) << 8) & BM_BCH_LAYOUTSELECT_CS4_SELECT)
#define BP_BCH_LAYOUTSELECT_CS3_SELECT	6
#define BM_BCH_LAYOUTSELECT_CS3_SELECT	0x000000C0
#define BF_BCH_LAYOUTSELECT_CS3_SELECT(v)  \
		(((v) << 6) & BM_BCH_LAYOUTSELECT_CS3_SELECT)
#define BP_BCH_LAYOUTSELECT_CS2_SELECT	4
#define BM_BCH_LAYOUTSELECT_CS2_SELECT	0x00000030
#define BF_BCH_LAYOUTSELECT_CS2_SELECT(v)  \
		(((v) << 4) & BM_BCH_LAYOUTSELECT_CS2_SELECT)
#define BP_BCH_LAYOUTSELECT_CS1_SELECT	2
#define BM_BCH_LAYOUTSELECT_CS1_SELECT	0x0000000C
#define BF_BCH_LAYOUTSELECT_CS1_SELECT(v)  \
		(((v) << 2) & BM_BCH_LAYOUTSELECT_CS1_SELECT)
#define BP_BCH_LAYOUTSELECT_CS0_SELECT	0
#define BM_BCH_LAYOUTSELECT_CS0_SELECT	0x00000003
#define BF_BCH_LAYOUTSELECT_CS0_SELECT(v)  \
		(((v) << 0) & BM_BCH_LAYOUTSELECT_CS0_SELECT)

/*============================================================================*/

#define HW_BCH_FLASH0LAYOUT0	(0x00000080)

#define BP_BCH_FLASH0LAYOUT0_NBLOCKS	24
#define BM_BCH_FLASH0LAYOUT0_NBLOCKS	0xFF000000
#define BF_BCH_FLASH0LAYOUT0_NBLOCKS(v) \
		(((v) << 24) & BM_BCH_FLASH0LAYOUT0_NBLOCKS)
#define BP_BCH_FLASH0LAYOUT0_META_SIZE	16
#define BM_BCH_FLASH0LAYOUT0_META_SIZE	0x00FF0000
#define BF_BCH_FLASH0LAYOUT0_META_SIZE(v)  \
		(((v) << 16) & BM_BCH_FLASH0LAYOUT0_META_SIZE)
#define BP_BCH_FLASH0LAYOUT0_ECC0	12
#define BM_BCH_FLASH0LAYOUT0_ECC0	0x0000F000
#define BF_BCH_FLASH0LAYOUT0_ECC0(v)  \
		(((v) << 12) & BM_BCH_FLASH0LAYOUT0_ECC0)
#define BV_BCH_FLASH0LAYOUT0_ECC0__NONE  0x0
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC2  0x1
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC4  0x2
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC6  0x3
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC8  0x4
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC10 0x5
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC12 0x6
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC14 0x7
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC16 0x8
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC18 0x9
#define BV_BCH_FLASH0LAYOUT0_ECC0__ECC20 0xA
#define BP_BCH_FLASH0LAYOUT0_DATA0_SIZE	0
#define BM_BCH_FLASH0LAYOUT0_DATA0_SIZE	0x00000FFF
#define BF_BCH_FLASH0LAYOUT0_DATA0_SIZE(v)  \
		(((v) << 0) & BM_BCH_FLASH0LAYOUT0_DATA0_SIZE)

/*============================================================================*/

#define HW_BCH_FLASH0LAYOUT1	(0x00000090)

#define BP_BCH_FLASH0LAYOUT1_PAGE_SIZE	16
#define BM_BCH_FLASH0LAYOUT1_PAGE_SIZE	0xFFFF0000
#define BF_BCH_FLASH0LAYOUT1_PAGE_SIZE(v) \
		(((v) << 16) & BM_BCH_FLASH0LAYOUT1_PAGE_SIZE)
#define BP_BCH_FLASH0LAYOUT1_ECCN	12
#define BM_BCH_FLASH0LAYOUT1_ECCN	0x0000F000
#define BF_BCH_FLASH0LAYOUT1_ECCN(v)  \
		(((v) << 12) & BM_BCH_FLASH0LAYOUT1_ECCN)
#define BV_BCH_FLASH0LAYOUT1_ECCN__NONE  0x0
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC2  0x1
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC4  0x2
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC6  0x3
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC8  0x4
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC10 0x5
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC12 0x6
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC14 0x7
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC16 0x8
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC18 0x9
#define BV_BCH_FLASH0LAYOUT1_ECCN__ECC20 0xA
#define BP_BCH_FLASH0LAYOUT1_DATAN_SIZE	0
#define BM_BCH_FLASH0LAYOUT1_DATAN_SIZE	0x00000FFF
#define BF_BCH_FLASH0LAYOUT1_DATAN_SIZE(v)  \
		(((v) << 0) & BM_BCH_FLASH0LAYOUT1_DATAN_SIZE)

/*============================================================================*/

#define HW_BCH_FLASH1LAYOUT0	(0x000000a0)

#define BP_BCH_FLASH1LAYOUT0_NBLOCKS	24
#define BM_BCH_FLASH1LAYOUT0_NBLOCKS	0xFF000000
#define BF_BCH_FLASH1LAYOUT0_NBLOCKS(v) \
		(((v) << 24) & BM_BCH_FLASH1LAYOUT0_NBLOCKS)
#define BP_BCH_FLASH1LAYOUT0_META_SIZE	16
#define BM_BCH_FLASH1LAYOUT0_META_SIZE	0x00FF0000
#define BF_BCH_FLASH1LAYOUT0_META_SIZE(v)  \
		(((v) << 16) & BM_BCH_FLASH1LAYOUT0_META_SIZE)
#define BP_BCH_FLASH1LAYOUT0_ECC0	12
#define BM_BCH_FLASH1LAYOUT0_ECC0	0x0000F000
#define BF_BCH_FLASH1LAYOUT0_ECC0(v)  \
		(((v) << 12) & BM_BCH_FLASH1LAYOUT0_ECC0)
#define BV_BCH_FLASH1LAYOUT0_ECC0__NONE  0x0
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC2  0x1
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC4  0x2
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC6  0x3
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC8  0x4
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC10 0x5
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC12 0x6
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC14 0x7
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC16 0x8
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC18 0x9
#define BV_BCH_FLASH1LAYOUT0_ECC0__ECC20 0xA
#define BP_BCH_FLASH1LAYOUT0_DATA0_SIZE	0
#define BM_BCH_FLASH1LAYOUT0_DATA0_SIZE	0x00000FFF
#define BF_BCH_FLASH1LAYOUT0_DATA0_SIZE(v)  \
		(((v) << 0) & BM_BCH_FLASH1LAYOUT0_DATA0_SIZE)

/*============================================================================*/

#define HW_BCH_FLASH1LAYOUT1	(0x000000b0)

#define BP_BCH_FLASH1LAYOUT1_PAGE_SIZE	16
#define BM_BCH_FLASH1LAYOUT1_PAGE_SIZE	0xFFFF0000
#define BF_BCH_FLASH1LAYOUT1_PAGE_SIZE(v) \
		(((v) << 16) & BM_BCH_FLASH1LAYOUT1_PAGE_SIZE)
#define BP_BCH_FLASH1LAYOUT1_ECCN	12
#define BM_BCH_FLASH1LAYOUT1_ECCN	0x0000F000
#define BF_BCH_FLASH1LAYOUT1_ECCN(v)  \
		(((v) << 12) & BM_BCH_FLASH1LAYOUT1_ECCN)
#define BV_BCH_FLASH1LAYOUT1_ECCN__NONE  0x0
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC2  0x1
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC4  0x2
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC6  0x3
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC8  0x4
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC10 0x5
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC12 0x6
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC14 0x7
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC16 0x8
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC18 0x9
#define BV_BCH_FLASH1LAYOUT1_ECCN__ECC20 0xA
#define BP_BCH_FLASH1LAYOUT1_DATAN_SIZE	0
#define BM_BCH_FLASH1LAYOUT1_DATAN_SIZE	0x00000FFF
#define BF_BCH_FLASH1LAYOUT1_DATAN_SIZE(v)  \
		(((v) << 0) & BM_BCH_FLASH1LAYOUT1_DATAN_SIZE)

/*============================================================================*/

#define HW_BCH_FLASH2LAYOUT0	(0x000000c0)

#define BP_BCH_FLASH2LAYOUT0_NBLOCKS	24
#define BM_BCH_FLASH2LAYOUT0_NBLOCKS	0xFF000000
#define BF_BCH_FLASH2LAYOUT0_NBLOCKS(v) \
		(((v) << 24) & BM_BCH_FLASH2LAYOUT0_NBLOCKS)
#define BP_BCH_FLASH2LAYOUT0_META_SIZE	16
#define BM_BCH_FLASH2LAYOUT0_META_SIZE	0x00FF0000
#define BF_BCH_FLASH2LAYOUT0_META_SIZE(v)  \
		(((v) << 16) & BM_BCH_FLASH2LAYOUT0_META_SIZE)
#define BP_BCH_FLASH2LAYOUT0_ECC0	12
#define BM_BCH_FLASH2LAYOUT0_ECC0	0x0000F000
#define BF_BCH_FLASH2LAYOUT0_ECC0(v)  \
		(((v) << 12) & BM_BCH_FLASH2LAYOUT0_ECC0)
#define BV_BCH_FLASH2LAYOUT0_ECC0__NONE  0x0
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC2  0x1
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC4  0x2
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC6  0x3
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC8  0x4
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC10 0x5
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC12 0x6
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC14 0x7
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC16 0x8
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC18 0x9
#define BV_BCH_FLASH2LAYOUT0_ECC0__ECC20 0xA
#define BP_BCH_FLASH2LAYOUT0_DATA0_SIZE	0
#define BM_BCH_FLASH2LAYOUT0_DATA0_SIZE	0x00000FFF
#define BF_BCH_FLASH2LAYOUT0_DATA0_SIZE(v)  \
		(((v) << 0) & BM_BCH_FLASH2LAYOUT0_DATA0_SIZE)

/*============================================================================*/

#define HW_BCH_FLASH2LAYOUT1	(0x000000d0)

#define BP_BCH_FLASH2LAYOUT1_PAGE_SIZE	16
#define BM_BCH_FLASH2LAYOUT1_PAGE_SIZE	0xFFFF0000
#define BF_BCH_FLASH2LAYOUT1_PAGE_SIZE(v) \
		(((v) << 16) & BM_BCH_FLASH2LAYOUT1_PAGE_SIZE)
#define BP_BCH_FLASH2LAYOUT1_ECCN	12
#define BM_BCH_FLASH2LAYOUT1_ECCN	0x0000F000
#define BF_BCH_FLASH2LAYOUT1_ECCN(v)  \
		(((v) << 12) & BM_BCH_FLASH2LAYOUT1_ECCN)
#define BV_BCH_FLASH2LAYOUT1_ECCN__NONE  0x0
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC2  0x1
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC4  0x2
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC6  0x3
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC8  0x4
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC10 0x5
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC12 0x6
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC14 0x7
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC16 0x8
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC18 0x9
#define BV_BCH_FLASH2LAYOUT1_ECCN__ECC20 0xA
#define BP_BCH_FLASH2LAYOUT1_DATAN_SIZE	0
#define BM_BCH_FLASH2LAYOUT1_DATAN_SIZE	0x00000FFF
#define BF_BCH_FLASH2LAYOUT1_DATAN_SIZE(v)  \
		(((v) << 0) & BM_BCH_FLASH2LAYOUT1_DATAN_SIZE)

/*============================================================================*/

#define HW_BCH_FLASH3LAYOUT0	(0x000000e0)

#define BP_BCH_FLASH3LAYOUT0_NBLOCKS	24
#define BM_BCH_FLASH3LAYOUT0_NBLOCKS	0xFF000000
#define BF_BCH_FLASH3LAYOUT0_NBLOCKS(v) \
		(((v) << 24) & BM_BCH_FLASH3LAYOUT0_NBLOCKS)
#define BP_BCH_FLASH3LAYOUT0_META_SIZE	16
#define BM_BCH_FLASH3LAYOUT0_META_SIZE	0x00FF0000
#define BF_BCH_FLASH3LAYOUT0_META_SIZE(v)  \
		(((v) << 16) & BM_BCH_FLASH3LAYOUT0_META_SIZE)
#define BP_BCH_FLASH3LAYOUT0_ECC0	12
#define BM_BCH_FLASH3LAYOUT0_ECC0	0x0000F000
#define BF_BCH_FLASH3LAYOUT0_ECC0(v)  \
		(((v) << 12) & BM_BCH_FLASH3LAYOUT0_ECC0)
#define BV_BCH_FLASH3LAYOUT0_ECC0__NONE  0x0
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC2  0x1
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC4  0x2
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC6  0x3
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC8  0x4
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC10 0x5
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC12 0x6
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC14 0x7
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC16 0x8
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC18 0x9
#define BV_BCH_FLASH3LAYOUT0_ECC0__ECC20 0xA
#define BP_BCH_FLASH3LAYOUT0_DATA0_SIZE	0
#define BM_BCH_FLASH3LAYOUT0_DATA0_SIZE	0x00000FFF
#define BF_BCH_FLASH3LAYOUT0_DATA0_SIZE(v)  \
		(((v) << 0) & BM_BCH_FLASH3LAYOUT0_DATA0_SIZE)

/*============================================================================*/

#define HW_BCH_FLASH3LAYOUT1	(0x000000f0)

#define BP_BCH_FLASH3LAYOUT1_PAGE_SIZE	16
#define BM_BCH_FLASH3LAYOUT1_PAGE_SIZE	0xFFFF0000
#define BF_BCH_FLASH3LAYOUT1_PAGE_SIZE(v) \
		(((v) << 16) & BM_BCH_FLASH3LAYOUT1_PAGE_SIZE)
#define BP_BCH_FLASH3LAYOUT1_ECCN	12
#define BM_BCH_FLASH3LAYOUT1_ECCN	0x0000F000
#define BF_BCH_FLASH3LAYOUT1_ECCN(v)  \
		(((v) << 12) & BM_BCH_FLASH3LAYOUT1_ECCN)
#define BV_BCH_FLASH3LAYOUT1_ECCN__NONE  0x0
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC2  0x1
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC4  0x2
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC6  0x3
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC8  0x4
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC10 0x5
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC12 0x6
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC14 0x7
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC16 0x8
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC18 0x9
#define BV_BCH_FLASH3LAYOUT1_ECCN__ECC20 0xA
#define BP_BCH_FLASH3LAYOUT1_DATAN_SIZE	0
#define BM_BCH_FLASH3LAYOUT1_DATAN_SIZE	0x00000FFF
#define BF_BCH_FLASH3LAYOUT1_DATAN_SIZE(v)  \
		(((v) << 0) & BM_BCH_FLASH3LAYOUT1_DATAN_SIZE)

/*============================================================================*/

#define HW_BCH_DEBUG0	(0x00000100)
#define HW_BCH_DEBUG0_SET	(0x00000104)
#define HW_BCH_DEBUG0_CLR	(0x00000108)
#define HW_BCH_DEBUG0_TOG	(0x0000010c)

#define BP_BCH_DEBUG0_RSVD1	27
#define BM_BCH_DEBUG0_RSVD1	0xF8000000
#define BF_BCH_DEBUG0_RSVD1(v) \
		(((v) << 27) & BM_BCH_DEBUG0_RSVD1)
#define BM_BCH_DEBUG0_ROM_BIST_ENABLE	0x04000000
#define BM_BCH_DEBUG0_ROM_BIST_COMPLETE	0x02000000
#define BP_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL	16
#define BM_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL	0x01FF0000
#define BF_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL(v)  \
		(((v) << 16) & BM_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL)
#define BV_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL__NORMAL    0x0
#define BV_BCH_DEBUG0_KES_DEBUG_SYNDROME_SYMBOL__TEST_MODE 0x1
#define BM_BCH_DEBUG0_KES_DEBUG_SHIFT_SYND	0x00008000
#define BM_BCH_DEBUG0_KES_DEBUG_PAYLOAD_FLAG	0x00004000
#define BV_BCH_DEBUG0_KES_DEBUG_PAYLOAD_FLAG__DATA 0x1
#define BV_BCH_DEBUG0_KES_DEBUG_PAYLOAD_FLAG__AUX  0x1
#define BM_BCH_DEBUG0_KES_DEBUG_MODE4K	0x00002000
#define BV_BCH_DEBUG0_KES_DEBUG_MODE4K__4k 0x1
#define BV_BCH_DEBUG0_KES_DEBUG_MODE4K__2k 0x1
#define BM_BCH_DEBUG0_KES_DEBUG_KICK	0x00001000
#define BM_BCH_DEBUG0_KES_STANDALONE	0x00000800
#define BV_BCH_DEBUG0_KES_STANDALONE__NORMAL    0x0
#define BV_BCH_DEBUG0_KES_STANDALONE__TEST_MODE 0x1
#define BM_BCH_DEBUG0_KES_DEBUG_STEP	0x00000400
#define BM_BCH_DEBUG0_KES_DEBUG_STALL	0x00000200
#define BV_BCH_DEBUG0_KES_DEBUG_STALL__NORMAL 0x0
#define BV_BCH_DEBUG0_KES_DEBUG_STALL__WAIT   0x1
#define BM_BCH_DEBUG0_BM_KES_TEST_BYPASS	0x00000100
#define BV_BCH_DEBUG0_BM_KES_TEST_BYPASS__NORMAL    0x0
#define BV_BCH_DEBUG0_BM_KES_TEST_BYPASS__TEST_MODE 0x1
#define BP_BCH_DEBUG0_RSVD0	6
#define BM_BCH_DEBUG0_RSVD0	0x000000C0
#define BF_BCH_DEBUG0_RSVD0(v)  \
		(((v) << 6) & BM_BCH_DEBUG0_RSVD0)
#define BP_BCH_DEBUG0_DEBUG_REG_SELECT	0
#define BM_BCH_DEBUG0_DEBUG_REG_SELECT	0x0000003F
#define BF_BCH_DEBUG0_DEBUG_REG_SELECT(v)  \
		(((v) << 0) & BM_BCH_DEBUG0_DEBUG_REG_SELECT)

/*============================================================================*/

#define HW_BCH_DBGKESREAD	(0x00000110)

#define BP_BCH_DBGKESREAD_VALUES	0
#define BM_BCH_DBGKESREAD_VALUES	0xFFFFFFFF
#define BF_BCH_DBGKESREAD_VALUES(v)	(v)

/*============================================================================*/

#define HW_BCH_DBGCSFEREAD	(0x00000120)

#define BP_BCH_DBGCSFEREAD_VALUES	0
#define BM_BCH_DBGCSFEREAD_VALUES	0xFFFFFFFF
#define BF_BCH_DBGCSFEREAD_VALUES(v)	(v)

/*============================================================================*/

#define HW_BCH_DBGSYNDGENREAD	(0x00000130)

#define BP_BCH_DBGSYNDGENREAD_VALUES	0
#define BM_BCH_DBGSYNDGENREAD_VALUES	0xFFFFFFFF
#define BF_BCH_DBGSYNDGENREAD_VALUES(v)	(v)

/*============================================================================*/

#define HW_BCH_DBGAHBMREAD	(0x00000140)

#define BP_BCH_DBGAHBMREAD_VALUES	0
#define BM_BCH_DBGAHBMREAD_VALUES	0xFFFFFFFF
#define BF_BCH_DBGAHBMREAD_VALUES(v)	(v)

/*============================================================================*/

#define HW_BCH_BLOCKNAME	(0x00000150)

#define BP_BCH_BLOCKNAME_NAME	0
#define BM_BCH_BLOCKNAME_NAME	0xFFFFFFFF
#define BF_BCH_BLOCKNAME_NAME(v)	(v)

/*============================================================================*/

#define HW_BCH_VERSION	(0x00000160)

#define BP_BCH_VERSION_MAJOR	24
#define BM_BCH_VERSION_MAJOR	0xFF000000
#define BF_BCH_VERSION_MAJOR(v) \
		(((v) << 24) & BM_BCH_VERSION_MAJOR)
#define BP_BCH_VERSION_MINOR	16
#define BM_BCH_VERSION_MINOR	0x00FF0000
#define BF_BCH_VERSION_MINOR(v)  \
		(((v) << 16) & BM_BCH_VERSION_MINOR)
#define BP_BCH_VERSION_STEP	0
#define BM_BCH_VERSION_STEP	0x0000FFFF
#define BF_BCH_VERSION_STEP(v)  \
		(((v) << 0) & BM_BCH_VERSION_STEP)

/*============================================================================*/

#endif
