/**
 * roboRIO typedefs header file
 *
 * Definitions for roboRIO
 * This file should be included from "RoboRio.h", never directly
 * Copyright (c) 2015,
 * National Instruments Corporation.
 * All rights reserved.
 */

#ifndef RoboRio_Typedefs_h_
#define RoboRio_Typedefs_h_

/**
* Guard against direct include
*/
#ifndef RoboRio_h_
#    error "Please include RoboRio.h instead of RoboRio_Typedefs.h"
#endif


/**
 * Include NiFpga header files
 */
#include "NiFpga.h"
#include "NiFpga_RoboRioFpga20.h"


/**
 * Set the Bitfile and the Signtature
 */
#define RoboRio_Bitfile	NiFpga_RoboRioFpga20_Bitfile
#define RoboRio_Signature NiFpga_RoboRioFpga20_Signature

/**
 * Define the weight and offset constants of AIO for roboRIO.
 */
#if !defined(AIB_0WGHT)
#define AIB_0WGHT  1220703
#endif

#if !defined(AIB_0OFST)
#define AIB_0OFST  0
#endif

#if !defined(AIB_0SIGN)
#define AIB_0SIGN  0
#endif

#if !defined(AIB_1WGHT)
#define AIB_1WGHT  1220703
#endif

#if !defined(AIB_1OFST)
#define AIB_1OFST  0
#endif

#if !defined(AIB_1SIGN)
#define AIB_1SIGN  0
#endif

#if !defined(AIB_2WGHT)
#define AIB_2WGHT  1220703
#endif

#if !defined(AIB_2OFST)
#define AIB_2OFST  0
#endif

#if !defined(AIB_2SIGN)
#define AIB_2SIGN  0
#endif

#if !defined(AIB_3WGHT)
#define AIB_3WGHT  1220703
#endif

#if !defined(AIB_3OFST)
#define AIB_3OFST  0
#endif

#if !defined(AIB_3SIGN)
#define AIB_3SIGN  0
#endif

#if !defined(AIAI_0WGHT)
#define AIAI_0WGHT  1220703
#endif

#if !defined(AIAI_0OFST)
#define AIAI_0OFST  0
#endif

#if !defined(AIAI_0SIGN)
#define AIAI_0SIGN  0
#endif

#if !defined(AIAI_1WGHT)
#define AIAI_1WGHT  1220703
#endif

#if !defined(AIAI_1OFST)
#define AIAI_1OFST  0
#endif

#if !defined(AIAI_1SIGN)
#define AIAI_1SIGN  0
#endif

#if !defined(AIAI_2WGHT)
#define AIAI_2WGHT  1220703
#endif

#if !defined(AIAI_2OFST)
#define AIAI_2OFST  0
#endif

#if !defined(AIAI_2SIGN)
#define AIAI_2SIGN  0
#endif

#if !defined(AIAI_3WGHT)
#define AIAI_3WGHT  1220703
#endif

#if !defined(AIAI_3OFST)
#define AIAI_3OFST  0
#endif

#if !defined(AIAI_3SIGN)
#define AIAI_3SIGN  0
#endif

#if !defined(AOB_0WGHT)
#define AOB_0WGHT  1220703
#endif

#if !defined(AOB_0OFST)
#define AOB_0OFST  0
#endif

#if !defined(AOB_0SIGN)
#define AOB_0SIGN  0
#endif

#if !defined(AOB_1WGHT)
#define AOB_1WGHT  1220703
#endif

#if !defined(AOB_1OFST)
#define AOB_1OFST  0
#endif

#if !defined(AOB_1SIGN)
#define AOB_1SIGN  0
#endif

/**
 * Define the accelerometer weight constant.
 */
#if !defined(ACCSCALEWGHT_CST)
#define ACCSCALEWGHT_CST  256
#endif

/**
 * Define the IRQ number range
 */
#if !defined(IRQNO_MAX)
#define IRQNO_MAX  8
#endif

#if !defined(IRQNO_MIN)
#define IRQNO_MIN  1
#endif


/**
 * Redefinition of the NiFpga Bool Indicator enum.
 * This is provided as a convenience to shorten the default enum names. The
 * NiFpga_ReadBool and NiFpga_WriteBool functions should be used to access these
 * items.
 */
typedef enum
{
   AOSYSSTAT = NiFpga_RoboRioFpga20_IndicatorBool_AOSYSSTAT,
   SYSACCRDY = NiFpga_RoboRioFpga20_IndicatorBool_SYSACCRDY,
   SYSAIRDY = NiFpga_RoboRioFpga20_IndicatorBool_SYSAIRDY,
   SYSRDY = NiFpga_RoboRioFpga20_IndicatorBool_SYSRDY,
} RoboRioFpga20_IndicatorBool;

/**
 * Redefinition of the NiFpga U8 Indicator enum.
 * This is provided as a convenience to shorten the default enum names. The
 * NiFpga_ReadU8 and NiFpga_WriteU8 functions should be used to access these
 * items.
 */
typedef enum
{
   DIBTN = NiFpga_RoboRioFpga20_IndicatorU8_DIBTN,
   DIOB_158IN = NiFpga_RoboRioFpga20_IndicatorU8_DIOB_158IN,
   DIOB_70IN = NiFpga_RoboRioFpga20_IndicatorU8_DIOB_70IN,
   DIODIO_70IN = NiFpga_RoboRioFpga20_IndicatorU8_DIODIO_70IN,
   DIODIO_98IN = NiFpga_RoboRioFpga20_IndicatorU8_DIODIO_98IN,
   DIOSPI_CS30IN = NiFpga_RoboRioFpga20_IndicatorU8_DIOSPI_CS30IN,
   ENCBSTAT = NiFpga_RoboRioFpga20_IndicatorU8_ENCBSTAT,
   ENCDIO_0STAT = NiFpga_RoboRioFpga20_IndicatorU8_ENCDIO_0STAT,
   ENCDIO_1STAT = NiFpga_RoboRioFpga20_IndicatorU8_ENCDIO_1STAT,
   ENCDIO_2STAT = NiFpga_RoboRioFpga20_IndicatorU8_ENCDIO_2STAT,
   ENCDIO_3STAT = NiFpga_RoboRioFpga20_IndicatorU8_ENCDIO_3STAT,
   ENCDIO_4STAT = NiFpga_RoboRioFpga20_IndicatorU8_ENCDIO_4STAT,
   I2CBDATI = NiFpga_RoboRioFpga20_IndicatorU8_I2CBDATI,
   I2CBSTAT = NiFpga_RoboRioFpga20_IndicatorU8_I2CBSTAT,
   I2CI2CDATI = NiFpga_RoboRioFpga20_IndicatorU8_I2CI2CDATI,
   I2CI2CSTAT = NiFpga_RoboRioFpga20_IndicatorU8_I2CI2CSTAT,
   SPIBSTAT = NiFpga_RoboRioFpga20_IndicatorU8_SPIBSTAT,
   SPISPISTAT = NiFpga_RoboRioFpga20_IndicatorU8_SPISPISTAT,
} RoboRioFpga20_IndicatorU8;

/**
 * Redefinition of the NiFpga U16 Indicator enum.
 * This is provided as a convenience to shorten the default enum names. The
 * NiFpga_ReadU16 and NiFpga_WriteU16 functions should be used to access these
 * items.
 */
typedef enum
{
   ACCXVAL = NiFpga_RoboRioFpga20_IndicatorU16_ACCXVAL,
   ACCYVAL = NiFpga_RoboRioFpga20_IndicatorU16_ACCYVAL,
   ACCZVAL = NiFpga_RoboRioFpga20_IndicatorU16_ACCZVAL,
   AIAI_0VAL = NiFpga_RoboRioFpga20_IndicatorU16_AIAI_0VAL,
   AIAI_1VAL = NiFpga_RoboRioFpga20_IndicatorU16_AIAI_1VAL,
   AIAI_2VAL = NiFpga_RoboRioFpga20_IndicatorU16_AIAI_2VAL,
   AIAI_3VAL = NiFpga_RoboRioFpga20_IndicatorU16_AIAI_3VAL,
   AIB_0VAL = NiFpga_RoboRioFpga20_IndicatorU16_AIB_0VAL,
   AIB_1VAL = NiFpga_RoboRioFpga20_IndicatorU16_AIB_1VAL,
   AIB_2VAL = NiFpga_RoboRioFpga20_IndicatorU16_AIB_2VAL,
   AIB_3VAL = NiFpga_RoboRioFpga20_IndicatorU16_AIB_3VAL,
   PWMB_0CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMB_0CNTR,
   PWMB_1CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMB_1CNTR,
   PWMB_2CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMB_2CNTR,
   PWMPWM_0CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_0CNTR,
   PWMPWM_1CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_1CNTR,
   PWMPWM_2CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_2CNTR,
   PWMPWM_3CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_3CNTR,
   PWMPWM_4CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_4CNTR,
   PWMPWM_5CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_5CNTR,
   PWMPWM_6CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_6CNTR,
   PWMPWM_7CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_7CNTR,
   PWMPWM_8CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_8CNTR,
   PWMPWM_9CNTR = NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_9CNTR,
   SPIBDATI = NiFpga_RoboRioFpga20_IndicatorU16_SPIBDATI,
   SPISPIDATI = NiFpga_RoboRioFpga20_IndicatorU16_SPISPIDATI,
} RoboRioFpga20_IndicatorU16;

/**
 * Redefinition of the NiFpga U32 Indicator enum.
 * This is provided as a convenience to shorten the default enum names. The
 * NiFpga_ReadU32 and NiFpga_WriteU32 functions should be used to access these
 * items.
 */
typedef enum
{
   ENCBCNTR = NiFpga_RoboRioFpga20_IndicatorU32_ENCBCNTR,
   ENCDIO_0CNTR = NiFpga_RoboRioFpga20_IndicatorU32_ENCDIO_0CNTR,
   ENCDIO_1CNTR = NiFpga_RoboRioFpga20_IndicatorU32_ENCDIO_1CNTR,
   ENCDIO_2CNTR = NiFpga_RoboRioFpga20_IndicatorU32_ENCDIO_2CNTR,
   ENCDIO_3CNTR = NiFpga_RoboRioFpga20_IndicatorU32_ENCDIO_3CNTR,
   ENCDIO_4CNTR = NiFpga_RoboRioFpga20_IndicatorU32_ENCDIO_4CNTR,
   IRQTIMERREAD = NiFpga_RoboRioFpga20_IndicatorU32_IRQTIMERREAD,
} RoboRioFpga20_IndicatorU32;

/**
 * Redefinition of the NiFpga Bool Control enum.
 * This is provided as a convenience to shorten the default enum names. The
 * NiFpga_ReadBool and NiFpga_WriteBool functions should be used to access these
 * items.
 */
typedef enum
{
   AOSYSGO = NiFpga_RoboRioFpga20_ControlBool_AOSYSGO,
   DORSLOUT = NiFpga_RoboRioFpga20_ControlBool_DORSLOUT,
   I2CBGO = NiFpga_RoboRioFpga20_ControlBool_I2CBGO,
   I2CI2CGO = NiFpga_RoboRioFpga20_ControlBool_I2CI2CGO,
   IRQDI_BTNENA = NiFpga_RoboRioFpga20_ControlBool_IRQDI_BTNENA,
   IRQDI_BTNFALL = NiFpga_RoboRioFpga20_ControlBool_IRQDI_BTNFALL,
   IRQDI_BTNRISE = NiFpga_RoboRioFpga20_ControlBool_IRQDI_BTNRISE,
   IRQTIMERSETTIME = NiFpga_RoboRioFpga20_ControlBool_IRQTIMERSETTIME,
   SPIBGO = NiFpga_RoboRioFpga20_ControlBool_SPIBGO,
   SPISPIGO = NiFpga_RoboRioFpga20_ControlBool_SPISPIGO,
} RoboRioFpga20_ControlBool;

/**
 * Redefinition of the NiFpga U8 Control enum.
 * This is provided as a convenience to shorten the default enum names. The
 * NiFpga_ReadU8 and NiFpga_WriteU8 functions should be used to access these
 * items.
 */
typedef enum
{
   DIOB_158DIR = NiFpga_RoboRioFpga20_ControlU8_DIOB_158DIR,
   DIOB_158OUT = NiFpga_RoboRioFpga20_ControlU8_DIOB_158OUT,
   DIOB_70DIR = NiFpga_RoboRioFpga20_ControlU8_DIOB_70DIR,
   DIOB_70OUT = NiFpga_RoboRioFpga20_ControlU8_DIOB_70OUT,
   DIODIO_70DIR = NiFpga_RoboRioFpga20_ControlU8_DIODIO_70DIR,
   DIODIO_70OUT = NiFpga_RoboRioFpga20_ControlU8_DIODIO_70OUT,
   DIODIO_98DIR = NiFpga_RoboRioFpga20_ControlU8_DIODIO_98DIR,
   DIODIO_98OUT = NiFpga_RoboRioFpga20_ControlU8_DIODIO_98OUT,
   DIOSPI_CS30DIR = NiFpga_RoboRioFpga20_ControlU8_DIOSPI_CS30DIR,
   DIOSPI_CS30OUT = NiFpga_RoboRioFpga20_ControlU8_DIOSPI_CS30OUT,
   DOLED50 = NiFpga_RoboRioFpga20_ControlU8_DOLED50,
   DORELAYOUT = NiFpga_RoboRioFpga20_ControlU8_DORELAYOUT,
   ENCBCNFG = NiFpga_RoboRioFpga20_ControlU8_ENCBCNFG,
   ENCDIO_0CNFG = NiFpga_RoboRioFpga20_ControlU8_ENCDIO_0CNFG,
   ENCDIO_1CNFG = NiFpga_RoboRioFpga20_ControlU8_ENCDIO_1CNFG,
   ENCDIO_2CNFG = NiFpga_RoboRioFpga20_ControlU8_ENCDIO_2CNFG,
   ENCDIO_3CNFG = NiFpga_RoboRioFpga20_ControlU8_ENCDIO_3CNFG,
   ENCDIO_4CNFG = NiFpga_RoboRioFpga20_ControlU8_ENCDIO_4CNFG,
   I2CBADDR = NiFpga_RoboRioFpga20_ControlU8_I2CBADDR,
   I2CBCNFG = NiFpga_RoboRioFpga20_ControlU8_I2CBCNFG,
   I2CBCNTL = NiFpga_RoboRioFpga20_ControlU8_I2CBCNTL,
   I2CBCNTR = NiFpga_RoboRioFpga20_ControlU8_I2CBCNTR,
   I2CBDATO = NiFpga_RoboRioFpga20_ControlU8_I2CBDATO,
   I2CI2CADDR = NiFpga_RoboRioFpga20_ControlU8_I2CI2CADDR,
   I2CI2CCNFG = NiFpga_RoboRioFpga20_ControlU8_I2CI2CCNFG,
   I2CI2CCNTL = NiFpga_RoboRioFpga20_ControlU8_I2CI2CCNTL,
   I2CI2CCNTR = NiFpga_RoboRioFpga20_ControlU8_I2CI2CCNTR,
   I2CI2CDATO = NiFpga_RoboRioFpga20_ControlU8_I2CI2CDATO,
   IRQAI_B_0NO = NiFpga_RoboRioFpga20_ControlU8_IRQAI_B_0NO,
   IRQAI_B_1NO = NiFpga_RoboRioFpga20_ControlU8_IRQAI_B_1NO,
   IRQAI_B_30CNFG = NiFpga_RoboRioFpga20_ControlU8_IRQAI_B_30CNFG,
   IRQDIO_B_0NO = NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_0NO,
   IRQDIO_B_1NO = NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_1NO,
   IRQDIO_B_2NO = NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_2NO,
   IRQDIO_B_3NO = NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_3NO,
   IRQDIO_B_70ENA = NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_70ENA,
   IRQDIO_B_70FALL = NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_70FALL,
   IRQDIO_B_70RISE = NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_70RISE,
   IRQDI_BTNNO = NiFpga_RoboRioFpga20_ControlU8_IRQDI_BTNNO,
   PWMB_0CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMB_0CNFG,
   PWMB_0CS = NiFpga_RoboRioFpga20_ControlU8_PWMB_0CS,
   PWMB_1CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMB_1CNFG,
   PWMB_1CS = NiFpga_RoboRioFpga20_ControlU8_PWMB_1CS,
   PWMB_2CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMB_2CNFG,
   PWMB_2CS = NiFpga_RoboRioFpga20_ControlU8_PWMB_2CS,
   PWMPWM_0CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_0CNFG,
   PWMPWM_0CS = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_0CS,
   PWMPWM_1CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_1CNFG,
   PWMPWM_1CS = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_1CS,
   PWMPWM_2CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_2CNFG,
   PWMPWM_2CS = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_2CS,
   PWMPWM_3CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_3CNFG,
   PWMPWM_3CS = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_3CS,
   PWMPWM_4CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_4CNFG,
   PWMPWM_4CS = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_4CS,
   PWMPWM_5CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_5CNFG,
   PWMPWM_5CS = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_5CS,
   PWMPWM_6CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_6CNFG,
   PWMPWM_6CS = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_6CS,
   PWMPWM_7CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_7CNFG,
   PWMPWM_7CS = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_7CS,
   PWMPWM_8CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_8CNFG,
   PWMPWM_8CS = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_8CS,
   PWMPWM_9CNFG = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_9CNFG,
   PWMPWM_9CS = NiFpga_RoboRioFpga20_ControlU8_PWMPWM_9CS,
   SPIBIRQNO = NiFpga_RoboRioFpga20_ControlU8_SPIBIRQNO,
   SPISPIIRQNO = NiFpga_RoboRioFpga20_ControlU8_SPISPIIRQNO,
   SYSSELECTB = NiFpga_RoboRioFpga20_ControlU8_SYSSELECTB,
   SYSSELECTDIO = NiFpga_RoboRioFpga20_ControlU8_SYSSELECTDIO,
} RoboRioFpga20_ControlU8;

/**
 * Redefinition of the NiFpga U16 Control enum.
 * This is provided as a convenience to shorten the default enum names. The
 * NiFpga_ReadU16 and NiFpga_WriteU16 functions should be used to access these
 * items.
 */
typedef enum
{
   AOB_0VAL = NiFpga_RoboRioFpga20_ControlU16_AOB_0VAL,
   AOB_1VAL = NiFpga_RoboRioFpga20_ControlU16_AOB_1VAL,
   IRQAI_B_0HYSTERESIS = NiFpga_RoboRioFpga20_ControlU16_IRQAI_B_0HYSTERESIS,
   IRQAI_B_0THRESHOLD = NiFpga_RoboRioFpga20_ControlU16_IRQAI_B_0THRESHOLD,
   IRQAI_B_1HYSTERESIS = NiFpga_RoboRioFpga20_ControlU16_IRQAI_B_1HYSTERESIS,
   IRQAI_B_1THRESHOLD = NiFpga_RoboRioFpga20_ControlU16_IRQAI_B_1THRESHOLD,
   PWMB_0CMP = NiFpga_RoboRioFpga20_ControlU16_PWMB_0CMP,
   PWMB_0MAX = NiFpga_RoboRioFpga20_ControlU16_PWMB_0MAX,
   PWMB_1CMP = NiFpga_RoboRioFpga20_ControlU16_PWMB_1CMP,
   PWMB_1MAX = NiFpga_RoboRioFpga20_ControlU16_PWMB_1MAX,
   PWMB_2CMP = NiFpga_RoboRioFpga20_ControlU16_PWMB_2CMP,
   PWMB_2MAX = NiFpga_RoboRioFpga20_ControlU16_PWMB_2MAX,
   PWMPWM_0CMP = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_0CMP,
   PWMPWM_0MAX = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_0MAX,
   PWMPWM_1CMP = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_1CMP,
   PWMPWM_1MAX = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_1MAX,
   PWMPWM_2CMP = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_2CMP,
   PWMPWM_2MAX = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_2MAX,
   PWMPWM_3CMP = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_3CMP,
   PWMPWM_3MAX = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_3MAX,
   PWMPWM_4CMP = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_4CMP,
   PWMPWM_4MAX = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_4MAX,
   PWMPWM_5CMP = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_5CMP,
   PWMPWM_5MAX = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_5MAX,
   PWMPWM_6CMP = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_6CMP,
   PWMPWM_6MAX = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_6MAX,
   PWMPWM_7CMP = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_7CMP,
   PWMPWM_7MAX = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_7MAX,
   PWMPWM_8CMP = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_8CMP,
   PWMPWM_8MAX = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_8MAX,
   PWMPWM_9CMP = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_9CMP,
   PWMPWM_9MAX = NiFpga_RoboRioFpga20_ControlU16_PWMPWM_9MAX,
   SPIBCNFG = NiFpga_RoboRioFpga20_ControlU16_SPIBCNFG,
   SPIBCNT = NiFpga_RoboRioFpga20_ControlU16_SPIBCNT,
   SPIBDATO = NiFpga_RoboRioFpga20_ControlU16_SPIBDATO,
   SPISPICNFG = NiFpga_RoboRioFpga20_ControlU16_SPISPICNFG,
   SPISPICNT = NiFpga_RoboRioFpga20_ControlU16_SPISPICNT,
   SPISPIDATO = NiFpga_RoboRioFpga20_ControlU16_SPISPIDATO,
} RoboRioFpga20_ControlU16;

/**
 * Redefinition of the NiFpga U32 Control enum.
 * This is provided as a convenience to shorten the default enum names. The
 * NiFpga_ReadU32 and NiFpga_WriteU32 functions should be used to access these
 * items.
 */
typedef enum
{
   IRQDIO_B_0CNT = NiFpga_RoboRioFpga20_ControlU32_IRQDIO_B_0CNT,
   IRQDIO_B_1CNT = NiFpga_RoboRioFpga20_ControlU32_IRQDIO_B_1CNT,
   IRQDIO_B_2CNT = NiFpga_RoboRioFpga20_ControlU32_IRQDIO_B_2CNT,
   IRQDIO_B_3CNT = NiFpga_RoboRioFpga20_ControlU32_IRQDIO_B_3CNT,
   IRQDI_BTNCNT = NiFpga_RoboRioFpga20_ControlU32_IRQDI_BTNCNT,
   IRQTIMERWRITE = NiFpga_RoboRioFpga20_ControlU32_IRQTIMERWRITE,
} RoboRioFpga20_ControlU32;

#endif /* RoboRio_Typedefs_h_ */