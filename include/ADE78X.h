#ifndef ADE78X_H
#define ADE78X_H

/* 
IC Datasheet:
https://www.analog.com/media/en/technical-documentation/data-sheets/ade7854a_7858a_7868a_7878a.pdf
at 20/09/2023 21:36 GMT-3
*/

/* REGISTER LIST */ // * Page 78
/* Register List Located in DSP Data Memory RAM */
#define ADE78X_AIGAIN    0x4380 // Current A gain
#define ADE78X_AVGAIN    0x4381 // Voltage A gain
#define ADE78X_BIGAIN    0x4382 // Current B gain
#define ADE78X_BVGAIN    0x4383 // Voltage B gain
#define ADE78X_CIGAIN    0x4384 // Current C gain
#define ADE78X_CVGAIN    0x4385 // Voltage C gain
#define ADE78X_NIGAIN    0x4386 // Current N gain
#define ADE78X_AIRMSOS   0x4387 // Current A RMS offset
#define ADE78X_AVRMSOS   0x4388 // Voltage A RMS offset
#define ADE78X_BIRMSOS   0x4389 // Current B RMS offset
#define ADE78X_BVRMSOS   0x438A // Voltage B RMS offset
#define ADE78X_CIRMSOS   0x438B // Current C RMS offset
#define ADE78X_CVRMSOS   0x438C // Voltage C RMS offset
#define ADE78X_NIRMSOS   0x438D // Current N RMS offset
#define ADE78X_AVAGAIN   0x438E // Apparent Power A gain
#define ADE78X_BVAGAIN   0x438F // Apparent Power B gain
#define ADE78X_CVAGAIN   0x4390 // Apparent Power C gain
#define ADE78X_AWGAIN    0x4391 // Active Power A gain
#define ADE78X_AWATTOS   0x4392 // Active Power A offset
#define ADE78X_BWGAIN    0x4393 // Active Power B gain
#define ADE78X_BWATTOS   0x4394 // Active Power B offset
#define ADE78X_CWGAIN    0x4395 // Active Power C gain
#define ADE78X_CWATTOS   0x4396 // Active Power C offset
#define ADE78X_AVARGAIN  0x4397 // Reactive Power A gain
#define ADE78X_AVAROS    0x4398 // Reactive Power A offset
#define ADE78X_BVARGAIN  0x4399 // Reactive Power B gain
#define ADE78X_BVAROS    0x439A // Reactive Power B offset
#define ADE78X_CVARGAIN  0x439B // Reactive Power C gain
#define ADE78X_CVAROS    0x439C // Reactive Power C offset
#define ADE78X_AFWGAIN   0x439D // Fundamental Active Power A gain
#define ADE78X_AFWATTOS  0x439E // Fundamental Active Power A offset
#define ADE78X_BFWGAIN   0x439F // Fundamental Active Power B gain
#define ADE78X_BFWATTOS  0x43A0 // Fundamental Active Power B offset
#define ADE78X_CFWGAIN   0x43A1 // Fundamental Active Power C gain
#define ADE78X_CFWATTOS  0x43A2 // Fundamental Active Power C offset
#define ADE78X_AFVARGAIN 0x43A3 // Fundamental Reactive Power A gain
#define ADE78X_AFVAROS   0x43A4 // Fundamental Reactive Power A offset
#define ADE78X_BFVARGAIN 0x43A5 // Fundamental Reactive Power B gain
#define ADE78X_BFVAROS   0x43A6 // Fundamental Reactive Power B offset
#define ADE78X_CFVARGAIN 0x43A7 // Fundamental Reactive Power C gain
#define ADE78X_CFVAROS   0x43A8 // Fundamental Reactive Power C offset
#define ADE78X_VATHR1    0x43A9 // Apparent Power Threshold MSB 24bits
#define ADE78X_VATHR0    0x43AA // Apparent Power Threshold LSB 24bits
#define ADE78X_WTHR1     0x43AB // Active Power Threshold MSB 24bits
#define ADE78X_WTHR0     0x43AC // Active Power Threshold LSB 24bits
#define ADE78X_VARTHR1   0x43AD // Reactive Power Threshold MSB 24bits
#define ADE78X_VARTHR0   0x43AE // Reactive Power Threshold LSB 24bits
/* Reserved              0x43AF */
#define ADE78X_VANOLOAD  0x43B0 // No load threshold in Apparent Power
#define ADE78X_APNOLOAD  0x43B1 // No load threshold in Active Power
#define ADE78X_VARNOLOAD 0x43B2
#define ADE78X_VLEVEL    0x43B3 // No load threshold in Reactive Power
/* Reserved              0x43B4 */
#define ADE78X_DICOEFF   0x43B5
#define ADE78X_HPFDIS    0x43B6
/* Reserved              0x43B7 */
#define ADE78X_ISUMLVL   0x43B8
/* Reserved              0x43B9 */
/* Reserved              0x43BA */
/* Reserved              0x43BB */
/* Reserved              0x43BC */
/* Reserved              0x43BD */
/* Reserved              0x43BE */
#define ADE78X_ISUM      0x43BF // Sum of IAWV, IBWV and ICWV
#define ADE78X_AIRMS     0x43C0 // Current A RMS
#define ADE78X_AVRMS     0x43C1 // Voltage A RMS
#define ADE78X_BIRMS     0x43C2 // Current B RMS
#define ADE78X_BVRMS     0x43C3 // Voltage B RMS
#define ADE78X_CIRMS     0x43C4 // Current C RMS
#define ADE78X_CVRMS     0x43C5 // Voltage C RMS
#define ADE78X_NIRMS     0x43C6 // Current N RMS
/* Reserved              0x43C7 to 0x43FF */

/* Internal DSP Memory RAM Registers */


#endif /* ADE78X_H */