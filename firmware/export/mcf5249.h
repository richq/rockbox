/***************************************************************************
 *             __________               __   ___.
 *   Open      \______   \ ____   ____ |  | _\_ |__   _______  ___
 *   Source     |       _//  _ \_/ ___\|  |/ /| __ \ /  _ \  \/  /
 *   Jukebox    |    |   (  <_> )  \___|    < | \_\ (  <_> > <  <
 *   Firmware   |____|_  /\____/ \___  >__|_ \|___  /\____/__/\_ \
 *                     \/            \/     \/    \/            \/
 * $Id$
 *
 * Copyright (C) 2004 by Linus Nielsen Feltzing
 *
 * All files in this archive are subject to the GNU General Public License.
 * See the file COPYING in the source tree root for full license agreement.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 ****************************************************************************/
#ifndef __MCF5249_H__
#define __MCF5249_H__

#define MBAR  0x40000000
#define MBAR2 0x80000000

#define SYSTEM_CTRL     (*(unsigned char *)(MBAR + 0x000))
#define BUSMASTER_CTRL  (*(unsigned char *)(MBAR + 0x00c))

#define IPR    (*(unsigned long *)(MBAR + 0x040))
#define IMR    (*(unsigned long *)(MBAR + 0x044))
#define ICR0   (*(unsigned long *)(MBAR + 0x04c))
#define ICR4   (*(unsigned long *)(MBAR + 0x050))
#define ICR8   (*(unsigned long *)(MBAR + 0x054))

#define CSAR0 (*(unsigned long *)(MBAR + 0x080))
#define CSMR0 (*(unsigned long *)(MBAR + 0x084))
#define CSCR0 (*(unsigned long *)(MBAR + 0x088))
#define CSAR1 (*(unsigned long *)(MBAR + 0x08c))
#define CSMR1 (*(unsigned long *)(MBAR + 0x090))
#define CSCR1 (*(unsigned long *)(MBAR + 0x094))
#define CSAR2 (*(unsigned long *)(MBAR + 0x098))
#define CSMR2 (*(unsigned long *)(MBAR + 0x09c))
#define CSCR2 (*(unsigned long *)(MBAR + 0x0a0))
#define CSAR3 (*(unsigned long *)(MBAR + 0x0a4))
#define CSMR3 (*(unsigned long *)(MBAR + 0x0a8))
#define CSCR3 (*(unsigned long *)(MBAR + 0x0ac))

#define DCR   (*(unsigned long *)(MBAR + 0x100))
#define DACR0 (*(unsigned long *)(MBAR + 0x108))
#define DMR0  (*(unsigned long *)(MBAR + 0x10c))
#define DACR1 (*(unsigned long *)(MBAR + 0x110))
#define DMR1  (*(unsigned long *)(MBAR + 0x114))
#define TMR0  (*(unsigned short *)(MBAR + 0x140))
#define TRR0  (*(unsigned short *)(MBAR + 0x144))
#define TCR0  (*(unsigned short *)(MBAR + 0x148))
#define TCN0  (*(unsigned short *)(MBAR + 0x14c))
#define TER0  (*(unsigned short *)(MBAR + 0x150))
#define TMR1  (*(unsigned short *)(MBAR + 0x180))
#define TRR1  (*(unsigned short *)(MBAR + 0x184))
#define TCR1  (*(unsigned short *)(MBAR + 0x188))
#define TCN1  (*(unsigned short *)(MBAR + 0x18c))
#define TER1  (*(unsigned short *)(MBAR + 0x190))

#define UMR10  (*(unsigned char *)(MBAR + 0x1c0))
#define UMR20  (*(unsigned char *)(MBAR + 0x1c0))
#define USR0   (*(unsigned char *)(MBAR + 0x1c4))
#define UCSR0  (*(unsigned char *)(MBAR + 0x1c4))
#define UCR0   (*(unsigned char *)(MBAR + 0x1c8))
#define URB0   (*(unsigned char *)(MBAR + 0x1cc))
#define UTB0   (*(unsigned char *)(MBAR + 0x1cc))
#define UIPCR0 (*(unsigned char *)(MBAR + 0x1d0))
#define UACR0  (*(unsigned char *)(MBAR + 0x1d0))
#define UISR0  (*(unsigned char *)(MBAR + 0x1d4))
#define UIMR0  (*(unsigned char *)(MBAR + 0x1d4))
#define UBG10  (*(unsigned char *)(MBAR + 0x1d8))
#define UBG20  (*(unsigned char *)(MBAR + 0x1dc))
#define UIVR0  (*(unsigned char *)(MBAR + 0x1f0))
#define UIP0   (*(unsigned char *)(MBAR + 0x1f4))
#define UOP10  (*(unsigned char *)(MBAR + 0x1f8))
#define UOP00  (*(unsigned char *)(MBAR + 0x1fc))

#define UMR11  (*(unsigned char *)(MBAR + 0x200))
#define UMR21  (*(unsigned char *)(MBAR + 0x200))
#define USR1   (*(unsigned char *)(MBAR + 0x204))
#define UCSR1  (*(unsigned char *)(MBAR + 0x204))
#define UCR1   (*(unsigned char *)(MBAR + 0x208))
#define URB1   (*(unsigned char *)(MBAR + 0x20c))
#define UTB1   (*(unsigned char *)(MBAR + 0x20c))
#define UIPCR1 (*(unsigned char *)(MBAR + 0x210))
#define UACR1  (*(unsigned char *)(MBAR + 0x210))
#define UISR1  (*(unsigned char *)(MBAR + 0x214))
#define UIMR1  (*(unsigned char *)(MBAR + 0x214))
#define UBG11  (*(unsigned char *)(MBAR + 0x218))
#define UBG21  (*(unsigned char *)(MBAR + 0x21c))
#define UIVR1  (*(unsigned char *)(MBAR + 0x230))
#define UIP1   (*(unsigned char *)(MBAR + 0x234))
#define UOP11  (*(unsigned char *)(MBAR + 0x238))
#define UOP01  (*(unsigned char *)(MBAR + 0x23c))

#define MADR   (*(unsigned char *)(MBAR + 0x280))
#define MFDR   (*(unsigned char *)(MBAR + 0x284))
#define MBCR   (*(unsigned char *)(MBAR + 0x288))
#define MBSR   (*(unsigned char *)(MBAR + 0x28c))
#define MBDR   (*(unsigned char *)(MBAR + 0x290))

#define SAR0   (*(unsigned long *)(MBAR + 0x300))
#define DAR0   (*(unsigned long *)(MBAR + 0x304))
#define DCR0   (*(unsigned short *)(MBAR + 0x308))
#define BCR0   (*(unsigned short *)(MBAR + 0x30c))
#define DSR0   (*(unsigned char *)(MBAR + 0x310))
#define DIVR0  (*(unsigned char *)(MBAR + 0x314))

#define SAR1   (*(unsigned long *)(MBAR + 0x340))
#define DAR1   (*(unsigned long *)(MBAR + 0x344))
#define DCR1   (*(unsigned short *)(MBAR + 0x348))
#define BCR1   (*(unsigned short *)(MBAR + 0x34c))
#define DSR1   (*(unsigned char *)(MBAR + 0x350))
#define DIVR1  (*(unsigned char *)(MBAR + 0x354))

#define SAR2   (*(unsigned long *)(MBAR + 0x380))
#define DAR2   (*(unsigned long *)(MBAR + 0x384))
#define DCR2   (*(unsigned short *)(MBAR + 0x388))
#define BCR2   (*(unsigned short *)(MBAR + 0x38c))
#define DSR2   (*(unsigned char *)(MBAR + 0x390))
#define DIVR2  (*(unsigned char *)(MBAR + 0x394))

#define SAR3   (*(unsigned long *)(MBAR + 0x3c0))
#define DAR3   (*(unsigned long *)(MBAR + 0x3c4))
#define DCR3   (*(unsigned short *)(MBAR + 0x3c8))
#define BCR3   (*(unsigned short *)(MBAR + 0x3cc))
#define DSR3   (*(unsigned char *)(MBAR + 0x3d0))
#define DIVR3  (*(unsigned char *)(MBAR + 0x3d4))

#define QSPIMR    (*(unsigned short *)(MBAR + 0x400))
#define QSPIQDLYR (*(unsigned short *)(MBAR + 0x404))
#define QSPIQWR   (*(unsigned short *)(MBAR + 0x408))
#define QSPIQIR   (*(unsigned short *)(MBAR + 0x40c))
#define QSPIQAR   (*(unsigned short *)(MBAR + 0x410))
#define QIR       (*(unsigned short *)(MBAR + 0x414))

#define GPIO_READ   (*(unsigned long *)(MBAR2 + 0x000))
#define GPIO_OUT    (*(unsigned long *)(MBAR2 + 0x004))
#define GPIO_ENABLE (*(unsigned long *)(MBAR2 + 0x008))
#define GPIO_FUNCTION (*(unsigned long *)(MBAR2 + 0x00c))

#define IIS1CONFIG (*(unsigned long *)(MBAR2 + 0x010))
#define IIS2CONFIG (*(unsigned long *)(MBAR2 + 0x014))
#define IIS3CONFIG (*(unsigned long *)(MBAR2 + 0x018))
#define IIS4CONFIG (*(unsigned long *)(MBAR2 + 0x01c))
#define EBU1CONFIG (*(unsigned long *)(MBAR2 + 0x020))
#define EBU1RCVCCHANNEL1 (*(unsigned long *)(MBAR2 + 0x024))
#define EBUTXCCHANNEL1   (*(unsigned long *)(MBAR2 + 0x028))
#define EBUTXCCHANNEL2   (*(unsigned long *)(MBAR2 + 0x02c))
#define DATAINCONTROL    (*(unsigned long *)(MBAR2 + 0x030))
#define PDIR1_L  (*(unsigned long *)(MBAR2 + 0x034))
#define PDIR3_L  (*(unsigned long *)(MBAR2 + 0x044))
#define PDIR1_R  (*(unsigned long *)(MBAR2 + 0x054))
#define PDIR3_R  (*(unsigned long *)(MBAR2 + 0x064))
#define PDOR1_L  (*(unsigned long *)(MBAR2 + 0x034))
#define PDOR1_R  (*(unsigned long *)(MBAR2 + 0x044))
#define PDOR2_L  (*(unsigned long *)(MBAR2 + 0x054))
#define PDOR2_R  (*(unsigned long *)(MBAR2 + 0x064))
#define PDIR3    (*(unsigned long *)(MBAR2 + 0x074))
#define PDOR3    (*(unsigned long *)(MBAR2 + 0x074))
#define UCHANNELTRANSMIT  (*(unsigned long *)(MBAR2 + 0x084))
#define U1CHANNELRECEIVE  (*(unsigned long *)(MBAR2 + 0x088))
#define Q1CHANNELRECEIVE  (*(unsigned long *)(MBAR2 + 0x08c))
#define CD_TEXT_CONTROL   (*(unsigned char *)(MBAR2 + 0x092))
#define INTERRUPTEN       (*(unsigned long *)(MBAR2 + 0x094))
#define INTERRUPTCLEAR    (*(unsigned long *)(MBAR2 + 0x098))
#define INTERRUPTSTAT     (*(unsigned long *)(MBAR2 + 0x098))
#define DMACONFIG         (*(unsigned char *)(MBAR2 + 0x09f))
#define PHASECONFIG       (*(unsigned char *)(MBAR2 + 0x0a3))
#define XTRIM             (*(unsigned short *)(MBAR2 + 0x0a6))
#define FREQMEAS          (*(unsigned long *)(MBAR2 + 0x0a8))
#define BLOCKCONTROL      (*(unsigned short *)(MBAR2 + 0x0ca))
#define AUDIOGLOB         (*(unsigned short *)(MBAR2 + 0x0ce))
#define EBU2CONFIG        (*(unsigned long *)(MBAR2 + 0x0d0))
#define EBU2RCVCCHANNEL1  (*(unsigned short *)(MBAR2 + 0x0d4))
#define U2CHANNELRECEIVE  (*(unsigned long *)(MBAR2 + 0x0d8))
#define Q2CHANNELRECEIVE  (*(unsigned long *)(MBAR2 + 0x0dc))

#define GPIO1_READ   (*(unsigned long *)(MBAR2 + 0x0b0))
#define GPIO1_OUT    (*(unsigned long *)(MBAR2 + 0x0b4))
#define GPIO1_ENABLE (*(unsigned long *)(MBAR2 + 0x0b8))
#define GPIO1_FUNCTION (*(unsigned long *)(MBAR2 + 0x0bc))
#define GPIO_INT_STAT  (*(unsigned long *)(MBAR2 + 0x0c0))
#define GPIO_INT_CLEAR (*(unsigned long *)(MBAR2 + 0x0c0))
#define GPIO_INT_EN    (*(unsigned long *)(MBAR2 + 0x0c4))
#define INTERRUPTSTAT3  (*(unsigned long *)(MBAR2 + 0x0e0))
#define INTERRUPTCLEAR3 (*(unsigned long *)(MBAR2 + 0x0e0))
#define INTERRUPTEN3    (*(unsigned long *)(MBAR2 + 0x0e4))
#define INTPRI1  (*(unsigned long *)(MBAR2 + 0x140))
#define INTPRI2  (*(unsigned long *)(MBAR2 + 0x144))
#define INTPRI3  (*(unsigned long *)(MBAR2 + 0x148))
#define INTPRI4  (*(unsigned long *)(MBAR2 + 0x14c))
#define INTPRI5  (*(unsigned long *)(MBAR2 + 0x150))
#define INTPRI6  (*(unsigned long *)(MBAR2 + 0x154))
#define INTPRI7  (*(unsigned long *)(MBAR2 + 0x158))
#define INTPRI8  (*(unsigned long *)(MBAR2 + 0x15c))
#define SPURVEC  (*(unsigned char *)(MBAR2 + 0x167))
#define INTBASE  (*(unsigned char *)(MBAR2 + 0x16b))
#define PLLCONTROL (*(unsigned long *)(MBAR2 + 0x180))
#define DMAROUTE   (*(unsigned long *)(MBAR2 + 0x188))
#define IDECONFIG1 (*(unsigned long *)(MBAR2 + 0x18c))
#define IDECONFIG2 (*(unsigned long *)(MBAR2 + 0x190))
#define IPERRORADR (*(unsigned long *)(MBAR2 + 0x194))
#define EXTRAINT   (*(unsigned long *)(MBAR2 + 0x198))

#define ADCONFIG   (*(unsigned short *)(MBAR2 + 0x402))
#define ADVALUE    (*(unsigned short *)(MBAR2 + 0x406))
#define MADR2      (*(unsigned char *)(MBAR2 + 0x440))
#define MFDR2      (*(unsigned char *)(MBAR2 + 0x444))
#define MBCR2      (*(unsigned char *)(MBAR2 + 0x448))
#define MBSR2      (*(unsigned char *)(MBAR2 + 0x44c))
#define MBDR2      (*(unsigned char *)(MBAR2 + 0x450))

#define FLASHMEDIACONFIG   (*(unsigned long *)(MBAR2 + 0x460))
#define FLASHMEDIACMD1     (*(unsigned long *)(MBAR2 + 0x464))
#define FLASHMEDIACMD2     (*(unsigned long *)(MBAR2 + 0x468))
#define FLASHMEDIADATA1    (*(unsigned long *)(MBAR2 + 0x46c))
#define FLASHMEDIADATA2    (*(unsigned long *)(MBAR2 + 0x470))
#define FLASHMEDIASTATUS   (*(unsigned long *)(MBAR2 + 0x474))
#define FLASHMEDIAINTEN    (*(unsigned long *)(MBAR2 + 0x478))
#define FLASHMEDIAINTSTAT  (*(unsigned long *)(MBAR2 + 0x47c))
#define FLASHMEDIAINTCLEAR (*(unsigned long *)(MBAR2 + 0x47c))

#define DEVICE_ID (*(unsigned long *)(MBAR2 + 0x0ac))

#endif
