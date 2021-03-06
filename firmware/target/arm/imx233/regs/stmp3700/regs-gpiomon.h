/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * This file was automatically generated by headergen, DO NOT EDIT it.
 * headergen version: 2.1.8
 * XML versions: stmp3700:3.2.0
 *
 * Copyright (C) 2013 by Amaury Pouly
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef __HEADERGEN__STMP3700__GPIOMON__H__
#define __HEADERGEN__STMP3700__GPIOMON__H__

#define REGS_GPIOMON_BASE (0x8003c300)

#define REGS_GPIOMON_VERSION "3.2.0"

/**
 * Register: HW_GPIOMON_BANK0_DATAIN
 * Address: 0
 * SCT: no
*/
#define HW_GPIOMON_BANK0_DATAIN         (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x0))
#define BP_GPIOMON_BANK0_DATAIN_DATA    0
#define BM_GPIOMON_BANK0_DATAIN_DATA    0xffffffff
#define BF_GPIOMON_BANK0_DATAIN_DATA(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_BANK1_DATAIN
 * Address: 0x10
 * SCT: no
*/
#define HW_GPIOMON_BANK1_DATAIN         (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x10))
#define BP_GPIOMON_BANK1_DATAIN_DATA    0
#define BM_GPIOMON_BANK1_DATAIN_DATA    0xffffffff
#define BF_GPIOMON_BANK1_DATAIN_DATA(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_BANK2_DATAIN
 * Address: 0x20
 * SCT: no
*/
#define HW_GPIOMON_BANK2_DATAIN         (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x20))
#define BP_GPIOMON_BANK2_DATAIN_DATA    0
#define BM_GPIOMON_BANK2_DATAIN_DATA    0xffffffff
#define BF_GPIOMON_BANK2_DATAIN_DATA(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_BANK3_DATAIN
 * Address: 0x30
 * SCT: no
*/
#define HW_GPIOMON_BANK3_DATAIN         (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x30))
#define BP_GPIOMON_BANK3_DATAIN_DATA    0
#define BM_GPIOMON_BANK3_DATAIN_DATA    0xffffffff
#define BF_GPIOMON_BANK3_DATAIN_DATA(v) (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_BANK0_DATAOUT
 * Address: 0x40
 * SCT: yes
*/
#define HW_GPIOMON_BANK0_DATAOUT            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x40 + 0x0))
#define HW_GPIOMON_BANK0_DATAOUT_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x40 + 0x4))
#define HW_GPIOMON_BANK0_DATAOUT_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x40 + 0x8))
#define HW_GPIOMON_BANK0_DATAOUT_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x40 + 0xc))
#define BP_GPIOMON_BANK0_DATAOUT_DATA       0
#define BM_GPIOMON_BANK0_DATAOUT_DATA       0xffffffff
#define BF_GPIOMON_BANK0_DATAOUT_DATA(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_BANK1_DATAOUT
 * Address: 0x50
 * SCT: yes
*/
#define HW_GPIOMON_BANK1_DATAOUT            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x50 + 0x0))
#define HW_GPIOMON_BANK1_DATAOUT_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x50 + 0x4))
#define HW_GPIOMON_BANK1_DATAOUT_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x50 + 0x8))
#define HW_GPIOMON_BANK1_DATAOUT_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x50 + 0xc))
#define BP_GPIOMON_BANK1_DATAOUT_DATA       0
#define BM_GPIOMON_BANK1_DATAOUT_DATA       0xffffffff
#define BF_GPIOMON_BANK1_DATAOUT_DATA(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_BANK2_DATAOUT
 * Address: 0x60
 * SCT: yes
*/
#define HW_GPIOMON_BANK2_DATAOUT            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x60 + 0x0))
#define HW_GPIOMON_BANK2_DATAOUT_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x60 + 0x4))
#define HW_GPIOMON_BANK2_DATAOUT_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x60 + 0x8))
#define HW_GPIOMON_BANK2_DATAOUT_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x60 + 0xc))
#define BP_GPIOMON_BANK2_DATAOUT_DATA       0
#define BM_GPIOMON_BANK2_DATAOUT_DATA       0xffffffff
#define BF_GPIOMON_BANK2_DATAOUT_DATA(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_BANK3_DATAOUT
 * Address: 0x70
 * SCT: yes
*/
#define HW_GPIOMON_BANK3_DATAOUT            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x70 + 0x0))
#define HW_GPIOMON_BANK3_DATAOUT_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x70 + 0x4))
#define HW_GPIOMON_BANK3_DATAOUT_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x70 + 0x8))
#define HW_GPIOMON_BANK3_DATAOUT_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x70 + 0xc))
#define BP_GPIOMON_BANK3_DATAOUT_DATA       0
#define BM_GPIOMON_BANK3_DATAOUT_DATA       0xffffffff
#define BF_GPIOMON_BANK3_DATAOUT_DATA(v)    (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_BANK0_DATAOEN
 * Address: 0x80
 * SCT: yes
*/
#define HW_GPIOMON_BANK0_DATAOEN                    (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x80 + 0x0))
#define HW_GPIOMON_BANK0_DATAOEN_SET                (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x80 + 0x4))
#define HW_GPIOMON_BANK0_DATAOEN_CLR                (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x80 + 0x8))
#define HW_GPIOMON_BANK0_DATAOEN_TOG                (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x80 + 0xc))
#define BP_GPIOMON_BANK0_DATAOEN_OUTPUT_ENABLES     0
#define BM_GPIOMON_BANK0_DATAOEN_OUTPUT_ENABLES     0xffffffff
#define BF_GPIOMON_BANK0_DATAOEN_OUTPUT_ENABLES(v)  (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_BANK1_DATAOEN
 * Address: 0x90
 * SCT: yes
*/
#define HW_GPIOMON_BANK1_DATAOEN                    (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x90 + 0x0))
#define HW_GPIOMON_BANK1_DATAOEN_SET                (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x90 + 0x4))
#define HW_GPIOMON_BANK1_DATAOEN_CLR                (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x90 + 0x8))
#define HW_GPIOMON_BANK1_DATAOEN_TOG                (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x90 + 0xc))
#define BP_GPIOMON_BANK1_DATAOEN_OUTPUT_ENABLES     0
#define BM_GPIOMON_BANK1_DATAOEN_OUTPUT_ENABLES     0xffffffff
#define BF_GPIOMON_BANK1_DATAOEN_OUTPUT_ENABLES(v)  (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_BANK2_DATAOEN
 * Address: 0xa0
 * SCT: yes
*/
#define HW_GPIOMON_BANK2_DATAOEN                    (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xa0 + 0x0))
#define HW_GPIOMON_BANK2_DATAOEN_SET                (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xa0 + 0x4))
#define HW_GPIOMON_BANK2_DATAOEN_CLR                (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xa0 + 0x8))
#define HW_GPIOMON_BANK2_DATAOEN_TOG                (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xa0 + 0xc))
#define BP_GPIOMON_BANK2_DATAOEN_OUTPUT_ENABLES     0
#define BM_GPIOMON_BANK2_DATAOEN_OUTPUT_ENABLES     0xffffffff
#define BF_GPIOMON_BANK2_DATAOEN_OUTPUT_ENABLES(v)  (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_BANK3_DATAOEN
 * Address: 0xb0
 * SCT: yes
*/
#define HW_GPIOMON_BANK3_DATAOEN                    (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xb0 + 0x0))
#define HW_GPIOMON_BANK3_DATAOEN_SET                (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xb0 + 0x4))
#define HW_GPIOMON_BANK3_DATAOEN_CLR                (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xb0 + 0x8))
#define HW_GPIOMON_BANK3_DATAOEN_TOG                (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xb0 + 0xc))
#define BP_GPIOMON_BANK3_DATAOEN_OUTPUT_ENABLES     0
#define BM_GPIOMON_BANK3_DATAOEN_OUTPUT_ENABLES     0xffffffff
#define BF_GPIOMON_BANK3_DATAOEN_OUTPUT_ENABLES(v)  (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_CTRL
 * Address: 0xc0
 * SCT: yes
*/
#define HW_GPIOMON_CTRL                     (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xc0 + 0x0))
#define HW_GPIOMON_CTRL_SET                 (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xc0 + 0x4))
#define HW_GPIOMON_CTRL_CLR                 (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xc0 + 0x8))
#define HW_GPIOMON_CTRL_TOG                 (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xc0 + 0xc))
#define BP_GPIOMON_CTRL_RSRVD               4
#define BM_GPIOMON_CTRL_RSRVD               0xfffffff0
#define BF_GPIOMON_CTRL_RSRVD(v)            (((v) << 4) & 0xfffffff0)
#define BP_GPIOMON_CTRL_PINMUX_ALT_RESET    3
#define BM_GPIOMON_CTRL_PINMUX_ALT_RESET    0x8
#define BF_GPIOMON_CTRL_PINMUX_ALT_RESET(v) (((v) << 3) & 0x8)
#define BP_GPIOMON_CTRL_OEN_8MA             2
#define BM_GPIOMON_CTRL_OEN_8MA             0x4
#define BF_GPIOMON_CTRL_OEN_8MA(v)          (((v) << 2) & 0x4)
#define BP_GPIOMON_CTRL_OEN_4MA             1
#define BM_GPIOMON_CTRL_OEN_4MA             0x2
#define BF_GPIOMON_CTRL_OEN_4MA(v)          (((v) << 1) & 0x2)
#define BP_GPIOMON_CTRL_OEN_NAND            0
#define BM_GPIOMON_CTRL_OEN_NAND            0x1
#define BF_GPIOMON_CTRL_OEN_NAND(v)         (((v) << 0) & 0x1)

/**
 * Register: HW_GPIOMON_ALT1_PINMUX_BANK0
 * Address: 0xd0
 * SCT: yes
*/
#define HW_GPIOMON_ALT1_PINMUX_BANK0            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xd0 + 0x0))
#define HW_GPIOMON_ALT1_PINMUX_BANK0_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xd0 + 0x4))
#define HW_GPIOMON_ALT1_PINMUX_BANK0_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xd0 + 0x8))
#define HW_GPIOMON_ALT1_PINMUX_BANK0_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xd0 + 0xc))
#define BP_GPIOMON_ALT1_PINMUX_BANK0_INDEX      0
#define BM_GPIOMON_ALT1_PINMUX_BANK0_INDEX      0xffffffff
#define BF_GPIOMON_ALT1_PINMUX_BANK0_INDEX(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_ALT1_PINMUX_BANK1
 * Address: 0xe0
 * SCT: yes
*/
#define HW_GPIOMON_ALT1_PINMUX_BANK1            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xe0 + 0x0))
#define HW_GPIOMON_ALT1_PINMUX_BANK1_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xe0 + 0x4))
#define HW_GPIOMON_ALT1_PINMUX_BANK1_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xe0 + 0x8))
#define HW_GPIOMON_ALT1_PINMUX_BANK1_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xe0 + 0xc))
#define BP_GPIOMON_ALT1_PINMUX_BANK1_INDEX      0
#define BM_GPIOMON_ALT1_PINMUX_BANK1_INDEX      0xffffffff
#define BF_GPIOMON_ALT1_PINMUX_BANK1_INDEX(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_ALT1_PINMUX_BANK2
 * Address: 0xf0
 * SCT: yes
*/
#define HW_GPIOMON_ALT1_PINMUX_BANK2            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xf0 + 0x0))
#define HW_GPIOMON_ALT1_PINMUX_BANK2_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xf0 + 0x4))
#define HW_GPIOMON_ALT1_PINMUX_BANK2_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xf0 + 0x8))
#define HW_GPIOMON_ALT1_PINMUX_BANK2_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0xf0 + 0xc))
#define BP_GPIOMON_ALT1_PINMUX_BANK2_INDEX      0
#define BM_GPIOMON_ALT1_PINMUX_BANK2_INDEX      0xffffffff
#define BF_GPIOMON_ALT1_PINMUX_BANK2_INDEX(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_ALT1_PINMUX_BANK3
 * Address: 0x100
 * SCT: yes
*/
#define HW_GPIOMON_ALT1_PINMUX_BANK3            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x100 + 0x0))
#define HW_GPIOMON_ALT1_PINMUX_BANK3_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x100 + 0x4))
#define HW_GPIOMON_ALT1_PINMUX_BANK3_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x100 + 0x8))
#define HW_GPIOMON_ALT1_PINMUX_BANK3_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x100 + 0xc))
#define BP_GPIOMON_ALT1_PINMUX_BANK3_INDEX      0
#define BM_GPIOMON_ALT1_PINMUX_BANK3_INDEX      0xffffffff
#define BF_GPIOMON_ALT1_PINMUX_BANK3_INDEX(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_ALT2_PINMUX_BANK0
 * Address: 0x110
 * SCT: yes
*/
#define HW_GPIOMON_ALT2_PINMUX_BANK0            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x110 + 0x0))
#define HW_GPIOMON_ALT2_PINMUX_BANK0_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x110 + 0x4))
#define HW_GPIOMON_ALT2_PINMUX_BANK0_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x110 + 0x8))
#define HW_GPIOMON_ALT2_PINMUX_BANK0_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x110 + 0xc))
#define BP_GPIOMON_ALT2_PINMUX_BANK0_INDEX      0
#define BM_GPIOMON_ALT2_PINMUX_BANK0_INDEX      0xffffffff
#define BF_GPIOMON_ALT2_PINMUX_BANK0_INDEX(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_ALT2_PINMUX_BANK1
 * Address: 0x120
 * SCT: yes
*/
#define HW_GPIOMON_ALT2_PINMUX_BANK1            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x120 + 0x0))
#define HW_GPIOMON_ALT2_PINMUX_BANK1_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x120 + 0x4))
#define HW_GPIOMON_ALT2_PINMUX_BANK1_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x120 + 0x8))
#define HW_GPIOMON_ALT2_PINMUX_BANK1_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x120 + 0xc))
#define BP_GPIOMON_ALT2_PINMUX_BANK1_INDEX      0
#define BM_GPIOMON_ALT2_PINMUX_BANK1_INDEX      0xffffffff
#define BF_GPIOMON_ALT2_PINMUX_BANK1_INDEX(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_ALT2_PINMUX_BANK2
 * Address: 0x130
 * SCT: yes
*/
#define HW_GPIOMON_ALT2_PINMUX_BANK2            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x130 + 0x0))
#define HW_GPIOMON_ALT2_PINMUX_BANK2_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x130 + 0x4))
#define HW_GPIOMON_ALT2_PINMUX_BANK2_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x130 + 0x8))
#define HW_GPIOMON_ALT2_PINMUX_BANK2_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x130 + 0xc))
#define BP_GPIOMON_ALT2_PINMUX_BANK2_INDEX      0
#define BM_GPIOMON_ALT2_PINMUX_BANK2_INDEX      0xffffffff
#define BF_GPIOMON_ALT2_PINMUX_BANK2_INDEX(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_ALT2_PINMUX_BANK3
 * Address: 0x140
 * SCT: yes
*/
#define HW_GPIOMON_ALT2_PINMUX_BANK3            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x140 + 0x0))
#define HW_GPIOMON_ALT2_PINMUX_BANK3_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x140 + 0x4))
#define HW_GPIOMON_ALT2_PINMUX_BANK3_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x140 + 0x8))
#define HW_GPIOMON_ALT2_PINMUX_BANK3_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x140 + 0xc))
#define BP_GPIOMON_ALT2_PINMUX_BANK3_INDEX      0
#define BM_GPIOMON_ALT2_PINMUX_BANK3_INDEX      0xffffffff
#define BF_GPIOMON_ALT2_PINMUX_BANK3_INDEX(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_ALT3_PINMUX_BANK0
 * Address: 0x150
 * SCT: yes
*/
#define HW_GPIOMON_ALT3_PINMUX_BANK0            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x150 + 0x0))
#define HW_GPIOMON_ALT3_PINMUX_BANK0_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x150 + 0x4))
#define HW_GPIOMON_ALT3_PINMUX_BANK0_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x150 + 0x8))
#define HW_GPIOMON_ALT3_PINMUX_BANK0_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x150 + 0xc))
#define BP_GPIOMON_ALT3_PINMUX_BANK0_INDEX      0
#define BM_GPIOMON_ALT3_PINMUX_BANK0_INDEX      0xffffffff
#define BF_GPIOMON_ALT3_PINMUX_BANK0_INDEX(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_ALT3_PINMUX_BANK1
 * Address: 0x160
 * SCT: yes
*/
#define HW_GPIOMON_ALT3_PINMUX_BANK1            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x160 + 0x0))
#define HW_GPIOMON_ALT3_PINMUX_BANK1_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x160 + 0x4))
#define HW_GPIOMON_ALT3_PINMUX_BANK1_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x160 + 0x8))
#define HW_GPIOMON_ALT3_PINMUX_BANK1_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x160 + 0xc))
#define BP_GPIOMON_ALT3_PINMUX_BANK1_INDEX      0
#define BM_GPIOMON_ALT3_PINMUX_BANK1_INDEX      0xffffffff
#define BF_GPIOMON_ALT3_PINMUX_BANK1_INDEX(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_ALT3_PINMUX_BANK2
 * Address: 0x170
 * SCT: yes
*/
#define HW_GPIOMON_ALT3_PINMUX_BANK2            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x170 + 0x0))
#define HW_GPIOMON_ALT3_PINMUX_BANK2_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x170 + 0x4))
#define HW_GPIOMON_ALT3_PINMUX_BANK2_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x170 + 0x8))
#define HW_GPIOMON_ALT3_PINMUX_BANK2_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x170 + 0xc))
#define BP_GPIOMON_ALT3_PINMUX_BANK2_INDEX      0
#define BM_GPIOMON_ALT3_PINMUX_BANK2_INDEX      0xffffffff
#define BF_GPIOMON_ALT3_PINMUX_BANK2_INDEX(v)   (((v) << 0) & 0xffffffff)

/**
 * Register: HW_GPIOMON_ALT3_PINMUX_BANK3
 * Address: 0x180
 * SCT: yes
*/
#define HW_GPIOMON_ALT3_PINMUX_BANK3            (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x180 + 0x0))
#define HW_GPIOMON_ALT3_PINMUX_BANK3_SET        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x180 + 0x4))
#define HW_GPIOMON_ALT3_PINMUX_BANK3_CLR        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x180 + 0x8))
#define HW_GPIOMON_ALT3_PINMUX_BANK3_TOG        (*(volatile unsigned long *)(REGS_GPIOMON_BASE + 0x180 + 0xc))
#define BP_GPIOMON_ALT3_PINMUX_BANK3_INDEX      0
#define BM_GPIOMON_ALT3_PINMUX_BANK3_INDEX      0xffffffff
#define BF_GPIOMON_ALT3_PINMUX_BANK3_INDEX(v)   (((v) << 0) & 0xffffffff)

#endif /* __HEADERGEN__STMP3700__GPIOMON__H__ */
