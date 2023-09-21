#ifndef ADE78X_H
#define ADE78X_H

/* 
IC Datasheet:
https://www.analog.com/media/en/technical-documentation/data-sheets/ade7854a_7858a_7868a_7878a.pdf
at 20/09/2023 21:36 GMT-3
*/

/* REGISTER LIST */ // * Pages 78-80
/* Register List Located in DSP Data Memory RAM */
#define ADE78X_AIGAIN     0x4380 // Current A gain
#define ADE78X_AVGAIN     0x4381 // Voltage A gain
#define ADE78X_BIGAIN     0x4382 // Current B gain
#define ADE78X_BVGAIN     0x4383 // Voltage B gain
#define ADE78X_CIGAIN     0x4384 // Current C gain
#define ADE78X_CVGAIN     0x4385 // Voltage C gain
#define ADE78X_NIGAIN     0x4386 // Current N gain
#define ADE78X_AIRMSOS    0x4387 // Current A RMS offset
#define ADE78X_AVRMSOS    0x4388 // Voltage A RMS offset
#define ADE78X_BIRMSOS    0x4389 // Current B RMS offset
#define ADE78X_BVRMSOS    0x438A // Voltage B RMS offset
#define ADE78X_CIRMSOS    0x438B // Current C RMS offset
#define ADE78X_CVRMSOS    0x438C // Voltage C RMS offset
#define ADE78X_NIRMSOS    0x438D // Current N RMS offset
#define ADE78X_AVAGAIN    0x438E // Apparent Power A gain
#define ADE78X_BVAGAIN    0x438F // Apparent Power B gain
#define ADE78X_CVAGAIN    0x4390 // Apparent Power C gain
#define ADE78X_AWGAIN     0x4391 // Active Power A gain
#define ADE78X_AWATTOS    0x4392 // Active Power A offset
#define ADE78X_BWGAIN     0x4393 // Active Power B gain
#define ADE78X_BWATTOS    0x4394 // Active Power B offset
#define ADE78X_CWGAIN     0x4395 // Active Power C gain
#define ADE78X_CWATTOS    0x4396 // Active Power C offset
#define ADE78X_AVARGAIN   0x4397 // Reactive Power A gain
#define ADE78X_AVAROS     0x4398 // Reactive Power A offset
#define ADE78X_BVARGAIN   0x4399 // Reactive Power B gain
#define ADE78X_BVAROS     0x439A // Reactive Power B offset
#define ADE78X_CVARGAIN   0x439B // Reactive Power C gain
#define ADE78X_CVAROS     0x439C // Reactive Power C offset
#define ADE78X_AFWGAIN    0x439D // Fundamental Active Power A gain
#define ADE78X_AFWATTOS   0x439E // Fundamental Active Power A offset
#define ADE78X_BFWGAIN    0x439F // Fundamental Active Power B gain
#define ADE78X_BFWATTOS   0x43A0 // Fundamental Active Power B offset
#define ADE78X_CFWGAIN    0x43A1 // Fundamental Active Power C gain
#define ADE78X_CFWATTOS   0x43A2 // Fundamental Active Power C offset
#define ADE78X_AFVARGAIN  0x43A3 // Fundamental Reactive Power A gain
#define ADE78X_AFVAROS    0x43A4 // Fundamental Reactive Power A offset
#define ADE78X_BFVARGAIN  0x43A5 // Fundamental Reactive Power B gain
#define ADE78X_BFVAROS    0x43A6 // Fundamental Reactive Power B offset
#define ADE78X_CFVARGAIN  0x43A7 // Fundamental Reactive Power C gain
#define ADE78X_CFVAROS    0x43A8 // Fundamental Reactive Power C offset
#define ADE78X_VATHR1     0x43A9 // Apparent Power Threshold MSB 24bits
#define ADE78X_VATHR0     0x43AA // Apparent Power Threshold LSB 24bits
#define ADE78X_WTHR1      0x43AB // Active Power Threshold MSB 24bits
#define ADE78X_WTHR0      0x43AC // Active Power Threshold LSB 24bits
#define ADE78X_VARTHR1    0x43AD // Reactive Power Threshold MSB 24bits
#define ADE78X_VARTHR0    0x43AE // Reactive Power Threshold LSB 24bits
/* Reserved               0x43AF */
#define ADE78X_VANOLOAD   0x43B0 // No load threshold in Apparent Power
#define ADE78X_APNOLOAD   0x43B1 // No load threshold in Active Power
#define ADE78X_VARNOLOAD  0x43B2
#define ADE78X_VLEVEL     0x43B3 // No load threshold in Reactive Power
/* Reserved               0x43B4 */
#define ADE78X_DICOEFF    0x43B5
#define ADE78X_HPFDIS     0x43B6
/* Reserved               0x43B7 */
#define ADE78X_ISUMLVL    0x43B8
/* Reserved               0x43B9 to 0x43BE */
#define ADE78X_ISUM       0x43BF // Sum of IAWV, IBWV and ICWV
#define ADE78X_AIRMS      0x43C0 // Current A RMS
#define ADE78X_AVRMS      0x43C1 // Voltage A RMS
#define ADE78X_BIRMS      0x43C2 // Current B RMS
#define ADE78X_BVRMS      0x43C3 // Voltage B RMS
#define ADE78X_CIRMS      0x43C4 // Current C RMS
#define ADE78X_CVRMS      0x43C5 // Voltage C RMS
#define ADE78X_NIRMS      0x43C6 // Current N RMS
/* Reserved               0x43C7 to 0x43FF */

/* Internal DSP Memory RAM Registers */ // * Page 80
/* Reserved               0xE203 */
#define ADE78X_RUN        0xE228 // Start/Stop DSP

/* Billable Registers */ // * Pages 80-83
#define ADE78X_AWATTHR    0xE400 // Acumulated Active Energy A
#define ADE78X_BWATTHR    0xE401 // Acumulated Active Energy B
#define ADE78X_CWATTHR    0xE402 // Acumulated Active Energy C
#define ADE78X_AFWATTHR   0xE403 // Acumulated Fundamental Active Energy A
#define ADE78X_BFWATTHR   0xE404 // Acumulated Fundamental Active Energy B
#define ADE78X_CFWATTHR   0xE405 // Acumulated Fundamental Active Energy C
#define ADE78X_AVARHR     0xE406 // Acumulated Reactive Energy A
#define ADE78X_BVARHR     0xE407 // Acumulated Reactive Energy B
#define ADE78X_CVARHR     0xE408 // Acumulated Reactive Energy C
#define ADE78X_AFVARHR    0xE409 // Acumulated Fundamental Reactive Energy A
#define ADE78X_BFVARHR    0xE40A // Acumulated Fundamental Reactive Energy B
#define ADE78X_CFVARHR    0xE40B // Acumulated Fundamental Reactive Energy C
#define ADE78X_AVAHR      0xE40C // Acumulated Apparent Energy A
#define ADE78X_BVAHR      0xE40D // Acumulated Apparent Energy B
#define ADE78X_CVAHR      0xE40E // Acumulated Apparent Energy C
#define ADE78X_IPEAK      0xE500 // Current Peak
#define ADE78X_VPEAK      0xE501 // Voltage Peak
#define ADE78X_STATUS0    0xE502 // Interrupt Status Register 0
#define ADE78X_STATUS1    0xE503 // Interrupt Status Register 1
#define ADE78X_AIMAV      0xE504 // Phase A current mean absolute value
#define ADE78X_BIMAV      0xE505 // Phase B current mean absolute value
#define ADE78X_CIMAV      0xE506 // Phase C current mean absolute value
#define ADE78X_OILVL      0xE507
#define ADE78X_OVLVL      0xE508
#define ADE78X_SAGLVL     0xE509
#define ADE78X_MASK0      0xE50A
#define ADE78X_MASK1      0xE50B
#define ADE78X_IAWV       0xE50C
#define ADE78X_IBWV       0xE50D
#define ADE78X_ICWV       0xE50E
#define ADE78X_ICWV       0xE50F
#define ADE78X_VAWV       0xE510
#define ADE78X_VBWV       0xE511
#define ADE78X_VCWV       0xE512
#define ADE78X_AWATT      0xE513
#define ADE78X_BWATT      0xE514
#define ADE78X_CWATT      0xE515
#define ADE78X_AVAR       0xE516
#define ADE78X_BVAR       0xE517
#define ADE78X_CVAR       0xE518
#define ADE78X_AVA        0xE519
#define ADE78X_BVA        0xE51A
#define ADE78X_CVA        0xE51B
/* Reserved               0xE51C to 0xE51E */
#define ADE78X_CHECKSUM   0xE51F
#define ADE78X_VNOM       0xE520
/* Reserved               0xE521 to 0xE52F */
#define ADE78X_IARMS_LRIP 0xE530
#define ADE78X_VARMS_LRIP 0xE531
#define ADE78X_IBRMS_LRIP 0xE532
#define ADE78X_VBRMS_LRIP 0xE533
#define ADE78X_ICRMS_LRIP 0xE534
#define ADE78X_VCRMS_LRIP 0xE535
#define ADE78X_INRMS_LRIP 0xE536
/* Reserved   0xE537 to 0xE5FE */
#define ADE78X_LAST_RWDATA_32 0xE5FF
#define ADE78X_PHSTATUS   0xE600
#define ADE78X_ANGLE0     0xE601
#define ADE78X_ANGLE1     0xE602
#define ADE78X_ANGLE2     0xE603
/* Reserved               0xE604 to 0xE606 */
#define ADE78X_PERIOD     0xE607
#define ADE78X_PHNOLOAD   0xE608
/* Reserved               0xE609 to 0xE60B */
#define ADE78X_LINECYC    0xE60C
#define ADE78X_ZXTOUT     0xE60D
#define ADE78X_COMPMODE   0xE60E
#define ADE78X_GAIN       0xE60F
#define ADE78X_CFMODE     0xE610
#define ADE78X_CF1DEN     0xE611
#define ADE78X_CF2DEN     0xE612
#define ADE78X_CF3DEN     0xE613
#define ADE78X_APHCAL     0xE614
#define ADE78X_BPHCAL     0xE615
#define ADE78X_CPHCAL     0xE616
#define ADE78X_PHSIGN     0xE617
#define ADE78X_CONFIG     0xE617
/* Reserved               0xE619 to 0xE6FD */
#define ADE78X_LAST_ADDR  0xE6FE
#define ADE78X_LAST_RWDATA_16 0xE6FF
#define ADE78X_MMODE      0xE700
#define ADE78X_ACCMODE    0xE701
#define ADE78X_LCYCMODE   0xE702
#define ADE78X_PEAKCYC    0xE703
#define ADE78X_SAGCYC     0xE704
#define ADE78X_CFCYC      0xE705
#define ADE78X_HSDC_CFG   0xE706
#define ADE78X_VERSION    0xE707
/* Reserved               0xE708 to 0xE73F */
#define ADE78X_CONFIG_A   0xE740
/* Reserved               0xE741 to 0xE7FB */
#define ADE78X_LAST_RWDATA_8 0xE7FC
#define ADE78X_LAST_OP    0xE7FD
/* Reserved               0xEBFF */
#define ADE78X_LPOILVL    0xEC00
#define ADE78X_CONFIG2    0xEC01

/* STATUS0 REGISTER (ADDRESS 0xE502)  */
#define ADE78X_STATUS0_AEHF      0x00
#define ADE78X_STATUS0_FAEHF     0x01
#define ADE78X_STATUS0_REHF      0x02
#define ADE78X_STATUS0_FREHF     0x03
#define ADE78X_STATUS0_VAEHF     0x04
#define ADE78X_STATUS0_LENERGY   0x05
#define ADE78X_STATUS0_REVAPA    0x06
#define ADE78X_STATUS0_REVAPB    0x07
#define ADE78X_STATUS0_REVAPC    0x08
#define ADE78X_STATUS0_REVPSUM1  0x09
#define ADE78X_STATUS0_REVRPA    0x0A
#define ADE78X_STATUS0_REVRPB    0x0B
#define ADE78X_STATUS0_REVRPC    0x0C
#define ADE78X_STATUS0_REVPSUM2  0x0D
#define ADE78X_STATUS0_CF1       0x0E
#define ADE78X_STATUS0_CF2       0x0F
#define ADE78X_STATUS0_CF3       0xA0
#define ADE78X_STATUS0_DREADY    0xA1
#define ADE78X_STATUS0_REVPSUM3  0xA2

/* STATUS1 REGISTER (ADDRESS 0xE503)  */
#define ADE78X_STATUS1_NLOAD     0x00
#define ADE78X_STATUS1_FNLOAD    0x01
#define ADE78X_STATUS1_VANLOAD   0x02
#define ADE78X_STATUS1_ZXTOVA    0x03
#define ADE78X_STATUS1_ZXTOVB    0x04
#define ADE78X_STATUS1_ZXTOVC    0x05
#define ADE78X_STATUS1_ZXTOIA    0x06
#define ADE78X_STATUS1_ZXTOIB    0x07
#define ADE78X_STATUS1_ZXTOIC    0x08
#define ADE78X_STATUS1_ZXVA      0x09
#define ADE78X_STATUS1_ZXVB      0x0A
#define ADE78X_STATUS1_ZXVC      0x0B
#define ADE78X_STATUS1_ZXIA      0x0C
#define ADE78X_STATUS1_ZXIB      0x0D
#define ADE78X_STATUS1_ZXIC      0x0E
#define ADE78X_STATUS1_RSTDONE   0x0F
#define ADE78X_STATUS1_SAG       0xA0
#define ADE78X_STATUS1_OI        0xA1
#define ADE78X_STATUS1_OV        0xA2
#define ADE78X_STATUS1_SEQERR    0xA3
#define ADE78X_STATUS1_MISMTCH   0xA4
#define ADE78X_STATUS1_PKI       0xA7
#define ADE78X_STATUS1_PKV       0xA8
#define ADE78X_STATUS1_CRC       0xA9


#endif /* ADE78X_H */