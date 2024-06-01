/************************************************************************/
/*    File Version : V1.00                                              */
/*    History : 0.50  (2014-09-18)  [Hardware Manual Revision : 0.50]   */
/*            : 1.00  (2015-05-18)  [Hardware Manual Revision : 1.00]   */
/*    Date Modified: 21/07/2015                                         */
/************************************************************************/

#ifndef INTERRUPT_HANDLERS_H
#define INTERRUPT_HANDLERS_H

// INT_Exception(Supervisor Instruction)

void INT_Excep_SuperVisorInst(void) __attribute__ ((interrupt));

// INT_Exception(Access Instruction)

void INT_Excep_AccessInst(void) __attribute__ ((interrupt));

// INT_Exception(Undefined Instruction)

void INT_Excep_UndefinedInst(void) __attribute__ ((interrupt));

// INT_Exception(Floating Point)

void INT_Excep_FloatingPoint(void) __attribute__ ((interrupt));

// INT_NMI

void INT_NonMaskableInterrupt(void) __attribute__ ((interrupt));

// INT_Dummy

void INT_Dummy(void) __attribute__ ((interrupt));

// BRK

void INT_Excep_BRK(void) __attribute__ ((interrupt));

// vector  1 reserved
// vector  2 reserved
// vector  3 reserved
// vector  4 reserved
// vector  5 reserved
// vector  6 reserved
// vector  7 reserved
// vector  8 reserved
// vector  9 reserved
// vector 10 reserved
// vector 11 reserved
// vector 12 reserved
// vector 13 reserved
// vector 14 reserved
// vector 15 reserved

// BSC BUSERR

void INT_Excep_BSC_BUSERR(void) __attribute__ ((interrupt));

// vector 17 reserved
// vector 18 reserved
// vector 19 reserved
// vector 20 reserved
// vector 21 reserved
// vector 22 reserved

// FCU FRDYI

void INT_Excep_FCU_FRDYI(void) __attribute__ ((interrupt));

// vector 24 reserved
// vector 25 reserved
// vector 26 reserved

// ICU SWINT

void INT_Excep_ICU_SWINT(void) __attribute__ ((interrupt));

// CMT0 CMI0

void INT_Excep_CMT0_CMI0(void) __attribute__ ((interrupt));

// CMT1 CMI1

void INT_Excep_CMT1_CMI1(void) __attribute__ ((interrupt));

// CMT2 CMI2

void INT_Excep_CMT2_CMI2(void) __attribute__ ((interrupt));

// CMT3 CMI3

void INT_Excep_CMT3_CMI3(void) __attribute__ ((interrupt));

// CAC FERRF

void INT_Excep_CAC_FERRF(void) __attribute__ ((interrupt));

// CAC MENDF

void INT_Excep_CAC_MENDF(void) __attribute__ ((interrupt));

// CAC OVFF

void INT_Excep_CAC_OVFF(void) __attribute__ ((interrupt));

// vector 35 reserved

// USB0 D0FIFO0

void INT_Excep_USB0_D0FIFO0(void) __attribute__ ((interrupt));

// USB0 D1FIFO0

void INT_Excep_USB0_D1FIFO0(void) __attribute__ ((interrupt));

// USB0 USBI0

void INT_Excep_USB0_USBI0(void) __attribute__ ((interrupt));

// vector 39 reserved

// SDHI SBFAI

void INT_Excep_SDHI_SBFAI(void) __attribute__ ((interrupt));

// SDHI CDETI

void INT_Excep_SDHI_CDETI(void) __attribute__ ((interrupt));

// SDHI CACI

void INT_Excep_SDHI_CACI(void) __attribute__ ((interrupt));

// SDHI SDACI

void INT_Excep_SDHI_SDACI(void) __attribute__ ((interrupt));

// RSPI0 SPEI0

void INT_Excep_RSPI0_SPEI0(void) __attribute__ ((interrupt));

// RSPI0 SPRI0

void INT_Excep_RSPI0_SPRI0(void) __attribute__ ((interrupt));

// RSPI0 SPTI0

void INT_Excep_RSPI0_SPTI0(void) __attribute__ ((interrupt));

// RSPI0 SPII0

void INT_Excep_RSPI0_SPII0(void) __attribute__ ((interrupt));

// vector 48 reserved
// vector 49 reserved
// vector 50 reserved
// vector 51 reserved

// RSCAN COMFRXINT

void INT_Excep_RSCAN_COMFRXINT(void) __attribute__ ((interrupt));

// RSCAN RXFINT

void INT_Excep_RSCAN_RXFINT(void) __attribute__ ((interrupt));

// RSCAN TXINT

void INT_Excep_RSCAN_TXINT(void) __attribute__ ((interrupt));

// RSCAN CHERRINT

void INT_Excep_RSCAN_CHERRINT(void) __attribute__ ((interrupt));

// RSCAN GLERRINT

void INT_Excep_RSCAN_GLERRINT(void) __attribute__ ((interrupt));

// DOC DOPCF

void INT_Excep_DOC_DOPCF(void) __attribute__ ((interrupt));

// CMPB CMPB0

void INT_Excep_CMPB_CMPB0(void) __attribute__ ((interrupt));

// CMPB CMPB1

void INT_Excep_CMPB_CMPB1(void) __attribute__ ((interrupt));

// CTSU CTSUWR

void INT_Excep_CTSU_CTSUWR(void) __attribute__ ((interrupt));

// CTSU CTSURD

void INT_Excep_CTSU_CTSURD(void) __attribute__ ((interrupt));

// CTSU CTSUFN

void INT_Excep_CTSU_CTSUFN(void) __attribute__ ((interrupt));

// RTC CUP

void INT_Excep_RTC_CUP(void) __attribute__ ((interrupt));

// ICU IRQ0

void INT_Excep_ICU_IRQ0(void) __attribute__ ((interrupt));

// ICU IRQ1

void INT_Excep_ICU_IRQ1(void) __attribute__ ((interrupt));

// ICU IRQ2

void INT_Excep_ICU_IRQ2(void) __attribute__ ((interrupt));

// ICU IRQ3

void INT_Excep_ICU_IRQ3(void) __attribute__ ((interrupt));

// ICU IRQ4

void INT_Excep_ICU_IRQ4(void) __attribute__ ((interrupt));

// ICU IRQ5

void INT_Excep_ICU_IRQ5(void) __attribute__ ((interrupt));

// ICU IRQ6

void INT_Excep_ICU_IRQ6(void) __attribute__ ((interrupt));

// ICU IRQ7

void INT_Excep_ICU_IRQ7(void) __attribute__ ((interrupt));

// vector 72 reserved
// vector 73 reserved
// vector 74 reserved
// vector 75 reserved
// vector 76 reserved
// vector 77 reserved
// vector 78 reserved
// vector 79 reserved

// ELC ELSR8I

void INT_Excep_ELC_ELSR8I(void) __attribute__ ((interrupt));

// vector 81 reserved
// vector 82 reserved
// vector 83 reserved
// vector 84 reserved
// vector 85 reserved
// vector 86 reserved
// vector 87 reserved

// LVD LVD1

void INT_Excep_LVD_LVD1(void) __attribute__ ((interrupt));

// LVD LVD2

void INT_Excep_LVD_LVD2(void) __attribute__ ((interrupt));

// CMPA CMPA1

//void INT_Excep_CMPA_CMPA1(void) __attribute__ ((interrupt));

// CMPA CMPA2

//void INT_Excep_CMPA_CMPA2(void) __attribute__ ((interrupt));

// USB0 USBR0

void INT_Excep_USB0_USBR0(void) __attribute__ ((interrupt));

// VBATT VBTLVDI

void INT_Excep_VBATT_VBTLVDI(void) __attribute__ ((interrupt));

// RTC ALM

void INT_Excep_RTC_ALM(void) __attribute__ ((interrupt));

// RTC PRD

void INT_Excep_RTC_PRD(void) __attribute__ ((interrupt));

// vector 94 reserved
// vector 95 reserved
// vector 96 reserved
// vector 97 reserved
// vector 98 reserved
// vector 99 reserved
// vector 100 reserved
// vector 101 reserved

// S12AD S12ADI0

void INT_Excep_S12AD_S12ADI0(void) __attribute__ ((interrupt));

// S12AD GBADI

void INT_Excep_S12AD_GBADI(void) __attribute__ ((interrupt));

// CMPB1 CMPB2

void INT_Excep_CMPB1_CMPB2(void) __attribute__ ((interrupt));

// CMPB1 CMPB3

void INT_Excep_CMPB1_CMPB3(void) __attribute__ ((interrupt));

// ELC ELSR18I

void INT_Excep_ELC_ELSR18I(void) __attribute__ ((interrupt));

// ELC ELSR19I

void INT_Excep_ELC_ELSR19I(void) __attribute__ ((interrupt));

// SSI0 SSIF0

void INT_Excep_SSI0_SSIF0(void) __attribute__ ((interrupt));

// SSI0 SSIRXI0

void INT_Excep_SSI0_SSIRXI0(void) __attribute__ ((interrupt));

// SSI0 SSITXI0

void INT_Excep_SSI0_SSITXI0(void) __attribute__ ((interrupt));

// SECURITY RD

void INT_Excep_SECURITY_RD(void) __attribute__ ((interrupt));

// SECURITY WR

void INT_Excep_SECURITY_WR(void) __attribute__ ((interrupt));

// SECURITY ERR

void INT_Excep_SECURITY_ERR(void) __attribute__ ((interrupt));

// MTU0 TGIA0

void INT_Excep_MTU0_TGIA0(void) __attribute__ ((interrupt));

// MTU0 TGIB0

void INT_Excep_MTU0_TGIB0(void) __attribute__ ((interrupt));

// MTU0 TGIC0

void INT_Excep_MTU0_TGIC0(void) __attribute__ ((interrupt));

// MTU0 TGID0

void INT_Excep_MTU0_TGID0(void) __attribute__ ((interrupt));

// MTU0 TCIV0

void INT_Excep_MTU0_TCIV0(void) __attribute__ ((interrupt));

// MTU0 TGIE0

void INT_Excep_MTU0_TGIE0(void) __attribute__ ((interrupt));

// MTU0 TGIF0

void INT_Excep_MTU0_TGIF0(void) __attribute__ ((interrupt));

// MTU1 TGIA1

void INT_Excep_MTU1_TGIA1(void) __attribute__ ((interrupt));

// MTU1 TGIB1

void INT_Excep_MTU1_TGIB1(void) __attribute__ ((interrupt));

// MTU1 TCIV1

void INT_Excep_MTU1_TCIV1(void) __attribute__ ((interrupt));

// MTU1 TCIU1

void INT_Excep_MTU1_TCIU1(void) __attribute__ ((interrupt));

// MTU2 TGIA2

void INT_Excep_MTU2_TGIA2(void) __attribute__ ((interrupt));

// MTU2 TGIB2

void INT_Excep_MTU2_TGIB2(void) __attribute__ ((interrupt));

// MTU2 TCIV2

void INT_Excep_MTU2_TCIV2(void) __attribute__ ((interrupt));

// MTU2 TCIU2

void INT_Excep_MTU2_TCIU2(void) __attribute__ ((interrupt));

// MTU3 TGIA3

void INT_Excep_MTU3_TGIA3(void) __attribute__ ((interrupt));

// MTU3 TGIB3

void INT_Excep_MTU3_TGIB3(void) __attribute__ ((interrupt));

// MTU3 TGIC3

void INT_Excep_MTU3_TGIC3(void) __attribute__ ((interrupt));

// MTU3 TGID3

void INT_Excep_MTU3_TGID3(void) __attribute__ ((interrupt));

// MTU3 TCIV3

void INT_Excep_MTU3_TCIV3(void) __attribute__ ((interrupt));

// MTU4 TGIA4

void INT_Excep_MTU4_TGIA4(void) __attribute__ ((interrupt));

// MTU4 TGIB4

void INT_Excep_MTU4_TGIB4(void) __attribute__ ((interrupt));

// MTU4 TGIC4

void INT_Excep_MTU4_TGIC4(void) __attribute__ ((interrupt));

// MTU4 TGID4

void INT_Excep_MTU4_TGID4(void) __attribute__ ((interrupt));

// MTU4 TCIV4

void INT_Excep_MTU4_TCIV4(void) __attribute__ ((interrupt));

// MTU5 TGIU5

void INT_Excep_MTU5_TGIU5(void) __attribute__ ((interrupt));

// MTU5 TGIV5

void INT_Excep_MTU5_TGIV5(void) __attribute__ ((interrupt));

// MTU5 TGIW5

void INT_Excep_MTU5_TGIW5(void) __attribute__ ((interrupt));

// TPU0 TGI0A

void INT_Excep_TPU0_TGI0A(void) __attribute__ ((interrupt));

// TPU0 TGI0B

void INT_Excep_TPU0_TGI0B(void) __attribute__ ((interrupt));

// TPU0 TGI0C

void INT_Excep_TPU0_TGI0C(void) __attribute__ ((interrupt));

// TPU0 TGI0D

void INT_Excep_TPU0_TGI0D(void) __attribute__ ((interrupt));

// TPU0 TCI0V

void INT_Excep_TPU0_TCI0V(void) __attribute__ ((interrupt));

// TPU1 TGI1A

void INT_Excep_TPU1_TGI1A(void) __attribute__ ((interrupt));

// TPU1 TGI1B

void INT_Excep_TPU1_TGI1B(void) __attribute__ ((interrupt));

// TPU1 TCI1V

void INT_Excep_TPU1_TCI1V(void) __attribute__ ((interrupt));

// TPU1 TCI1U

void INT_Excep_TPU1_TCI1U(void) __attribute__ ((interrupt));

// TPU2 TGI2A

void INT_Excep_TPU2_TGI2A(void) __attribute__ ((interrupt));

// TPU2 TGI2B

void INT_Excep_TPU2_TGI2B(void) __attribute__ ((interrupt));

// TPU2 TCI2V

void INT_Excep_TPU2_TCI2V(void) __attribute__ ((interrupt));

// TPU2 TCI2U

void INT_Excep_TPU2_TCI2U(void) __attribute__ ((interrupt));

// TPU3 TGI3A

void INT_Excep_TPU3_TGI3A(void) __attribute__ ((interrupt));

// TPU3 TGI3B

void INT_Excep_TPU3_TGI3B(void) __attribute__ ((interrupt));

// TPU3 TGI3C

void INT_Excep_TPU3_TGI3C(void) __attribute__ ((interrupt));

// TPU3 TGI3D

void INT_Excep_TPU3_TGI3D(void) __attribute__ ((interrupt));

// TPU3 TCI3V

void INT_Excep_TPU3_TCI3V(void) __attribute__ ((interrupt));

// TPU4 TGI4A

void INT_Excep_TPU4_TGI4A(void) __attribute__ ((interrupt));

// TPU4 TGI4B

void INT_Excep_TPU4_TGI4B(void) __attribute__ ((interrupt));

// TPU4 TCI4V

void INT_Excep_TPU4_TCI4V(void) __attribute__ ((interrupt));

// TPU4 TCI4U

void INT_Excep_TPU4_TCI4U(void) __attribute__ ((interrupt));

// TPU5 TGI5A

void INT_Excep_TPU5_TGI5A(void) __attribute__ ((interrupt));

// TPU5 TGI5B

void INT_Excep_TPU5_TGI5B(void) __attribute__ ((interrupt));

// TPU5 TCI5V

void INT_Excep_TPU5_TCI5V(void) __attribute__ ((interrupt));

// TPU5 TCI5U

void INT_Excep_TPU5_TCI5U(void) __attribute__ ((interrupt));

// vector 168 reserved
// vector 169 reserved

// POE OEI1

void INT_Excep_POE_OEI1(void) __attribute__ ((interrupt));

// POE OEI2

void INT_Excep_POE_OEI2(void) __attribute__ ((interrupt));

// vector 172 reserved
// vector 173 reserved

// TMR0 CMIA0

void INT_Excep_TMR0_CMIA0(void) __attribute__ ((interrupt));

// TMR0 CMIB0

void INT_Excep_TMR0_CMIB0(void) __attribute__ ((interrupt));

// TMR0 OVI0

void INT_Excep_TMR0_OVI0(void) __attribute__ ((interrupt));

// TMR1 CMIA1

void INT_Excep_TMR1_CMIA1(void) __attribute__ ((interrupt));

// TMR1 CMIB1

void INT_Excep_TMR1_CMIB1(void) __attribute__ ((interrupt));

// TMR1 OVI1

void INT_Excep_TMR1_OVI1(void) __attribute__ ((interrupt));

// TMR2 CMIA2

void INT_Excep_TMR2_CMIA2(void) __attribute__ ((interrupt));

// TMR2 CMIB2

void INT_Excep_TMR2_CMIB2(void) __attribute__ ((interrupt));

// TMR2 OVI2

void INT_Excep_TMR2_OVI2(void) __attribute__ ((interrupt));

// TMR3 CMIA3

void INT_Excep_TMR3_CMIA3(void) __attribute__ ((interrupt));

// TMR3 CMIB3

void INT_Excep_TMR3_CMIB3(void) __attribute__ ((interrupt));

// TMR3 OVI3

void INT_Excep_TMR3_OVI3(void) __attribute__ ((interrupt));

// vector 186 reserved
// vector 187 reserved
// vector 188 reserved
// vector 189 reserved
// vector 190 reserved
// vector 191 reserved
// vector 192 reserved
// vector 193 reserved
// vector 194 reserved
// vector 195 reserved
// vector 196 reserved
// vector 197 reserved

// DMAC DMAC0I

void INT_Excep_DMAC_DMAC0I(void) __attribute__ ((interrupt));

// DMAC DMAC1I

void INT_Excep_DMAC_DMAC1I(void) __attribute__ ((interrupt));

// DMAC DMAC2I

void INT_Excep_DMAC_DMAC2I(void) __attribute__ ((interrupt));

// DMAC DMAC3I

void INT_Excep_DMAC_DMAC3I(void) __attribute__ ((interrupt));

// vector 202 reserved
// vector 203 reserved
// vector 204 reserved
// vector 205 reserved
// vector 206 reserved
// vector 207 reserved
// vector 208 reserved
// vector 209 reserved
// vector 210 reserved
// vector 211 reserved
// vector 212 reserved
// vector 213 reserved

// SCI0 ERI0

void INT_Excep_SCI0_ERI0(void) __attribute__ ((interrupt));

// SCI0 RXI0

void INT_Excep_SCI0_RXI0(void) __attribute__ ((interrupt));

// SCI0 TXI0

void INT_Excep_SCI0_TXI0(void) __attribute__ ((interrupt));

// SCI0 TEI0

void INT_Excep_SCI0_TEI0(void) __attribute__ ((interrupt));

// SCI1 ERI1

void INT_Excep_SCI1_ERI1(void) __attribute__ ((interrupt));

// SCI1 RXI1

void INT_Excep_SCI1_RXI1(void) __attribute__ ((interrupt));

// SCI1 TXI1

void INT_Excep_SCI1_TXI1(void) __attribute__ ((interrupt));

// SCI1 TEI1

void INT_Excep_SCI1_TEI1(void) __attribute__ ((interrupt));

// SCI5 ERI5

void INT_Excep_SCI5_ERI5(void) __attribute__ ((interrupt));

// SCI5 RXI5

void INT_Excep_SCI5_RXI5(void) __attribute__ ((interrupt));

// SCI5 TXI5

void INT_Excep_SCI5_TXI5(void) __attribute__ ((interrupt));

// SCI5 TEI5

void INT_Excep_SCI5_TEI5(void) __attribute__ ((interrupt));

// SCI6 ERI6

void INT_Excep_SCI6_ERI6(void) __attribute__ ((interrupt));

// SCI6 RXI6

void INT_Excep_SCI6_RXI6(void) __attribute__ ((interrupt));

// SCI6 TXI6

void INT_Excep_SCI6_TXI6(void) __attribute__ ((interrupt));

// SCI6 TEI6

void INT_Excep_SCI6_TEI6(void) __attribute__ ((interrupt));

// SCI8 ERI8

void INT_Excep_SCI8_ERI8(void) __attribute__ ((interrupt));

// SCI8 RXI8

void INT_Excep_SCI8_RXI8(void) __attribute__ ((interrupt));

// SCI8 TXI8

void INT_Excep_SCI8_TXI8(void) __attribute__ ((interrupt));

// SCI8 TEI8

void INT_Excep_SCI8_TEI8(void) __attribute__ ((interrupt));

// SCI9 ERI9

void INT_Excep_SCI9_ERI9(void) __attribute__ ((interrupt));

// SCI9 RXI9

void INT_Excep_SCI9_RXI9(void) __attribute__ ((interrupt));

// SCI9 TXI9

void INT_Excep_SCI9_TXI9(void) __attribute__ ((interrupt));

// SCI9 TEI9

void INT_Excep_SCI9_TEI9(void) __attribute__ ((interrupt));

// SCI12 ERI12

void INT_Excep_SCI12_ERI12(void) __attribute__ ((interrupt));

// SCI12 RXI12

void INT_Excep_SCI12_RXI12(void) __attribute__ ((interrupt));

// SCI12 TXI12

void INT_Excep_SCI12_TXI12(void) __attribute__ ((interrupt));

// SCI12 TEI12

void INT_Excep_SCI12_TEI12(void) __attribute__ ((interrupt));

// SCI12 SCIX0

void INT_Excep_SCI12_SCIX0(void) __attribute__ ((interrupt));

// SCI12 SCIX1

void INT_Excep_SCI12_SCIX1(void) __attribute__ ((interrupt));

// SCI12 SCIX2

void INT_Excep_SCI12_SCIX2(void) __attribute__ ((interrupt));

// SCI12 SCIX3

void INT_Excep_SCI12_SCIX3(void) __attribute__ ((interrupt));

// RIIC0 EEI0

void INT_Excep_RIIC0_EEI0(void) __attribute__ ((interrupt));

// RIIC0 RXI0

void INT_Excep_RIIC0_RXI0(void) __attribute__ ((interrupt));

// RIIC0 TXI0

void INT_Excep_RIIC0_TXI0(void) __attribute__ ((interrupt));

// RIIC0 TEI0

void INT_Excep_RIIC0_TEI0(void) __attribute__ ((interrupt));

// vector 250 reserved
// vector 251 reserved
// vector 252 reserved
// vector 253 reserved
// vector 254 reserved
// vector 255 reserved

//;<<VECTOR DATA START (POWER ON RESET)>>
//;Power On Reset PC
extern void PowerON_Reset(void) __attribute__ ((interrupt));
//;<<VECTOR DATA END (POWER ON RESET)>>
#endif
