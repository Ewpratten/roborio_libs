/*
 * Generated with the FPGA Interface C API Generator 16.0.0
 * for NI-RIO 16.0.0 or later.
 */

#ifndef __NiFpga_RoboRioFpga20_h__
#define __NiFpga_RoboRioFpga20_h__

#ifndef NiFpga_Version
   #define NiFpga_Version 1600
#endif

#include "NiFpga.h"

/**
 * The filename of the FPGA bitfile.
 *
 * This is a #define to allow for string literal concatenation. For example:
 *
 *    static const char* const Bitfile = "C:\\" NiFpga_RoboRioFpga20_Bitfile;
 */
#define NiFpga_RoboRioFpga20_Bitfile "NiFpga_RoboRioFpga20.lvbitx"

/**
 * The signature of the FPGA bitfile.
 */
static const char* const NiFpga_RoboRioFpga20_Signature = "17EDA0A8A05CB4781D5CEEBB741B8781";

typedef enum
{
   NiFpga_RoboRioFpga20_IndicatorBool_AOSYSSTAT = 0x18206,
   NiFpga_RoboRioFpga20_IndicatorBool_SYSACCRDY = 0x1812E,
   NiFpga_RoboRioFpga20_IndicatorBool_SYSAIRDY = 0x1822A,
   NiFpga_RoboRioFpga20_IndicatorBool_SYSRDY = 0x18132,
} NiFpga_RoboRioFpga20_IndicatorBool;

typedef enum
{
   NiFpga_RoboRioFpga20_IndicatorU8_DIBTN = 0x180DA,
   NiFpga_RoboRioFpga20_IndicatorU8_DIOB_158IN = 0x18246,
   NiFpga_RoboRioFpga20_IndicatorU8_DIOB_70IN = 0x1823A,
   NiFpga_RoboRioFpga20_IndicatorU8_DIODIO_70IN = 0x180BE,
   NiFpga_RoboRioFpga20_IndicatorU8_DIODIO_98IN = 0x18082,
   NiFpga_RoboRioFpga20_IndicatorU8_DIOSPI_CS30IN = 0x18006,
   NiFpga_RoboRioFpga20_IndicatorU8_ENCBSTAT = 0x182C6,
   NiFpga_RoboRioFpga20_IndicatorU8_ENCDIO_0STAT = 0x180CE,
   NiFpga_RoboRioFpga20_IndicatorU8_ENCDIO_1STAT = 0x180B2,
   NiFpga_RoboRioFpga20_IndicatorU8_ENCDIO_2STAT = 0x180AE,
   NiFpga_RoboRioFpga20_IndicatorU8_ENCDIO_3STAT = 0x1808E,
   NiFpga_RoboRioFpga20_IndicatorU8_ENCDIO_4STAT = 0x1809A,
   NiFpga_RoboRioFpga20_IndicatorU8_I2CBDATI = 0x182A2,
   NiFpga_RoboRioFpga20_IndicatorU8_I2CBSTAT = 0x182B2,
   NiFpga_RoboRioFpga20_IndicatorU8_I2CI2CDATI = 0x180FE,
   NiFpga_RoboRioFpga20_IndicatorU8_I2CI2CSTAT = 0x18102,
   NiFpga_RoboRioFpga20_IndicatorU8_SPIBSTAT = 0x1825E,
   NiFpga_RoboRioFpga20_IndicatorU8_SPISPISTAT = 0x180E6,
} NiFpga_RoboRioFpga20_IndicatorU8;

typedef enum
{
   NiFpga_RoboRioFpga20_IndicatorU16_ACCXVAL = 0x18126,
   NiFpga_RoboRioFpga20_IndicatorU16_ACCYVAL = 0x18122,
   NiFpga_RoboRioFpga20_IndicatorU16_ACCZVAL = 0x1811E,
   NiFpga_RoboRioFpga20_IndicatorU16_AIAI_0VAL = 0x1821A,
   NiFpga_RoboRioFpga20_IndicatorU16_AIAI_1VAL = 0x1821E,
   NiFpga_RoboRioFpga20_IndicatorU16_AIAI_2VAL = 0x18222,
   NiFpga_RoboRioFpga20_IndicatorU16_AIAI_3VAL = 0x18226,
   NiFpga_RoboRioFpga20_IndicatorU16_AIB_0VAL = 0x1820A,
   NiFpga_RoboRioFpga20_IndicatorU16_AIB_1VAL = 0x1820E,
   NiFpga_RoboRioFpga20_IndicatorU16_AIB_2VAL = 0x18212,
   NiFpga_RoboRioFpga20_IndicatorU16_AIB_3VAL = 0x18216,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMB_0CNTR = 0x18272,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMB_1CNTR = 0x1827E,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMB_2CNTR = 0x18292,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_0CNTR = 0x181EA,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_1CNTR = 0x181E6,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_2CNTR = 0x181D2,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_3CNTR = 0x181BE,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_4CNTR = 0x181AA,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_5CNTR = 0x18146,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_6CNTR = 0x1815A,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_7CNTR = 0x1816E,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_8CNTR = 0x18182,
   NiFpga_RoboRioFpga20_IndicatorU16_PWMPWM_9CNTR = 0x18196,
   NiFpga_RoboRioFpga20_IndicatorU16_SPIBDATI = 0x1824E,
   NiFpga_RoboRioFpga20_IndicatorU16_SPISPIDATI = 0x180F6,
} NiFpga_RoboRioFpga20_IndicatorU16;

typedef enum
{
   NiFpga_RoboRioFpga20_IndicatorU32_ENCBCNTR = 0x182C0,
   NiFpga_RoboRioFpga20_IndicatorU32_ENCDIO_0CNTR = 0x180D0,
   NiFpga_RoboRioFpga20_IndicatorU32_ENCDIO_1CNTR = 0x180B4,
   NiFpga_RoboRioFpga20_IndicatorU32_ENCDIO_2CNTR = 0x180A8,
   NiFpga_RoboRioFpga20_IndicatorU32_ENCDIO_3CNTR = 0x18088,
   NiFpga_RoboRioFpga20_IndicatorU32_ENCDIO_4CNTR = 0x18094,
   NiFpga_RoboRioFpga20_IndicatorU32_IRQTIMERREAD = 0x18018,
} NiFpga_RoboRioFpga20_IndicatorU32;

typedef enum
{
   NiFpga_RoboRioFpga20_ControlBool_AOSYSGO = 0x18202,
   NiFpga_RoboRioFpga20_ControlBool_DORSLOUT = 0x180E2,
   NiFpga_RoboRioFpga20_ControlBool_I2CBGO = 0x182BA,
   NiFpga_RoboRioFpga20_ControlBool_I2CI2CGO = 0x1811A,
   NiFpga_RoboRioFpga20_ControlBool_IRQDI_BTNENA = 0x1802E,
   NiFpga_RoboRioFpga20_ControlBool_IRQDI_BTNFALL = 0x18026,
   NiFpga_RoboRioFpga20_ControlBool_IRQDI_BTNRISE = 0x1802A,
   NiFpga_RoboRioFpga20_ControlBool_IRQTIMERSETTIME = 0x18012,
   NiFpga_RoboRioFpga20_ControlBool_SPIBGO = 0x1825A,
   NiFpga_RoboRioFpga20_ControlBool_SPISPIGO = 0x180EA,
} NiFpga_RoboRioFpga20_ControlBool;

typedef enum
{
   NiFpga_RoboRioFpga20_ControlU8_DIOB_158DIR = 0x18242,
   NiFpga_RoboRioFpga20_ControlU8_DIOB_158OUT = 0x1823E,
   NiFpga_RoboRioFpga20_ControlU8_DIOB_70DIR = 0x18236,
   NiFpga_RoboRioFpga20_ControlU8_DIOB_70OUT = 0x18232,
   NiFpga_RoboRioFpga20_ControlU8_DIODIO_70DIR = 0x180C6,
   NiFpga_RoboRioFpga20_ControlU8_DIODIO_70OUT = 0x180CA,
   NiFpga_RoboRioFpga20_ControlU8_DIODIO_98DIR = 0x180A2,
   NiFpga_RoboRioFpga20_ControlU8_DIODIO_98OUT = 0x1809E,
   NiFpga_RoboRioFpga20_ControlU8_DIOSPI_CS30DIR = 0x1800A,
   NiFpga_RoboRioFpga20_ControlU8_DIOSPI_CS30OUT = 0x1800E,
   NiFpga_RoboRioFpga20_ControlU8_DOLED50 = 0x180DE,
   NiFpga_RoboRioFpga20_ControlU8_DORELAYOUT = 0x1812A,
   NiFpga_RoboRioFpga20_ControlU8_ENCBCNFG = 0x182BE,
   NiFpga_RoboRioFpga20_ControlU8_ENCDIO_0CNFG = 0x180D6,
   NiFpga_RoboRioFpga20_ControlU8_ENCDIO_1CNFG = 0x180BA,
   NiFpga_RoboRioFpga20_ControlU8_ENCDIO_2CNFG = 0x180A6,
   NiFpga_RoboRioFpga20_ControlU8_ENCDIO_3CNFG = 0x18086,
   NiFpga_RoboRioFpga20_ControlU8_ENCDIO_4CNFG = 0x18092,
   NiFpga_RoboRioFpga20_ControlU8_I2CBADDR = 0x182A6,
   NiFpga_RoboRioFpga20_ControlU8_I2CBCNFG = 0x182B6,
   NiFpga_RoboRioFpga20_ControlU8_I2CBCNTL = 0x182AE,
   NiFpga_RoboRioFpga20_ControlU8_I2CBCNTR = 0x182AA,
   NiFpga_RoboRioFpga20_ControlU8_I2CBDATO = 0x1829E,
   NiFpga_RoboRioFpga20_ControlU8_I2CI2CADDR = 0x1810A,
   NiFpga_RoboRioFpga20_ControlU8_I2CI2CCNFG = 0x18116,
   NiFpga_RoboRioFpga20_ControlU8_I2CI2CCNTL = 0x18112,
   NiFpga_RoboRioFpga20_ControlU8_I2CI2CCNTR = 0x1810E,
   NiFpga_RoboRioFpga20_ControlU8_I2CI2CDATO = 0x18106,
   NiFpga_RoboRioFpga20_ControlU8_IRQAI_B_0NO = 0x1803E,
   NiFpga_RoboRioFpga20_ControlU8_IRQAI_B_1NO = 0x1803A,
   NiFpga_RoboRioFpga20_ControlU8_IRQAI_B_30CNFG = 0x1804A,
   NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_0NO = 0x1804E,
   NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_1NO = 0x18052,
   NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_2NO = 0x18056,
   NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_3NO = 0x1805A,
   NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_70ENA = 0x18076,
   NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_70FALL = 0x1806E,
   NiFpga_RoboRioFpga20_ControlU8_IRQDIO_B_70RISE = 0x18072,
   NiFpga_RoboRioFpga20_ControlU8_IRQDI_BTNNO = 0x1801E,
   NiFpga_RoboRioFpga20_ControlU8_PWMB_0CNFG = 0x1826A,
   NiFpga_RoboRioFpga20_ControlU8_PWMB_0CS = 0x1826E,
   NiFpga_RoboRioFpga20_ControlU8_PWMB_1CNFG = 0x18282,
   NiFpga_RoboRioFpga20_ControlU8_PWMB_1CS = 0x18286,
   NiFpga_RoboRioFpga20_ControlU8_PWMB_2CNFG = 0x18296,
   NiFpga_RoboRioFpga20_ControlU8_PWMB_2CS = 0x1829A,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_0CNFG = 0x181F2,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_0CS = 0x181EE,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_1CNFG = 0x181DE,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_1CS = 0x181E2,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_2CNFG = 0x181CA,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_2CS = 0x181CE,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_3CNFG = 0x181B6,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_3CS = 0x181BA,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_4CNFG = 0x181A2,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_4CS = 0x181A6,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_5CNFG = 0x1813E,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_5CS = 0x18142,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_6CNFG = 0x18152,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_6CS = 0x18156,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_7CNFG = 0x18166,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_7CS = 0x1816A,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_8CNFG = 0x1817A,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_8CS = 0x1817E,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_9CNFG = 0x1818E,
   NiFpga_RoboRioFpga20_ControlU8_PWMPWM_9CS = 0x18192,
   NiFpga_RoboRioFpga20_ControlU8_SPIBIRQNO = 0x1807E,
   NiFpga_RoboRioFpga20_ControlU8_SPISPIIRQNO = 0x1807A,
   NiFpga_RoboRioFpga20_ControlU8_SYSSELECTB = 0x1822E,
   NiFpga_RoboRioFpga20_ControlU8_SYSSELECTDIO = 0x180C2,
} NiFpga_RoboRioFpga20_ControlU8;

typedef enum
{
   NiFpga_RoboRioFpga20_ControlU16_AOB_0VAL = 0x18002,
   NiFpga_RoboRioFpga20_ControlU16_AOB_1VAL = 0x181FE,
   NiFpga_RoboRioFpga20_ControlU16_IRQAI_B_0HYSTERESIS = 0x18032,
   NiFpga_RoboRioFpga20_ControlU16_IRQAI_B_0THRESHOLD = 0x18046,
   NiFpga_RoboRioFpga20_ControlU16_IRQAI_B_1HYSTERESIS = 0x18036,
   NiFpga_RoboRioFpga20_ControlU16_IRQAI_B_1THRESHOLD = 0x18042,
   NiFpga_RoboRioFpga20_ControlU16_PWMB_0CMP = 0x18266,
   NiFpga_RoboRioFpga20_ControlU16_PWMB_0MAX = 0x18262,
   NiFpga_RoboRioFpga20_ControlU16_PWMB_1CMP = 0x18276,
   NiFpga_RoboRioFpga20_ControlU16_PWMB_1MAX = 0x1827A,
   NiFpga_RoboRioFpga20_ControlU16_PWMB_2CMP = 0x1828A,
   NiFpga_RoboRioFpga20_ControlU16_PWMB_2MAX = 0x1828E,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_0CMP = 0x181F6,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_0MAX = 0x181FA,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_1CMP = 0x181DA,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_1MAX = 0x181D6,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_2CMP = 0x181C6,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_2MAX = 0x181C2,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_3CMP = 0x181B2,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_3MAX = 0x181AE,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_4CMP = 0x1819E,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_4MAX = 0x1819A,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_5CMP = 0x1813A,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_5MAX = 0x18136,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_6CMP = 0x1814E,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_6MAX = 0x1814A,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_7CMP = 0x18162,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_7MAX = 0x1815E,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_8CMP = 0x18176,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_8MAX = 0x18172,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_9CMP = 0x1818A,
   NiFpga_RoboRioFpga20_ControlU16_PWMPWM_9MAX = 0x18186,
   NiFpga_RoboRioFpga20_ControlU16_SPIBCNFG = 0x18252,
   NiFpga_RoboRioFpga20_ControlU16_SPIBCNT = 0x18256,
   NiFpga_RoboRioFpga20_ControlU16_SPIBDATO = 0x1824A,
   NiFpga_RoboRioFpga20_ControlU16_SPISPICNFG = 0x180F2,
   NiFpga_RoboRioFpga20_ControlU16_SPISPICNT = 0x180EE,
   NiFpga_RoboRioFpga20_ControlU16_SPISPIDATO = 0x180FA,
} NiFpga_RoboRioFpga20_ControlU16;

typedef enum
{
   NiFpga_RoboRioFpga20_ControlU32_IRQDIO_B_0CNT = 0x18068,
   NiFpga_RoboRioFpga20_ControlU32_IRQDIO_B_1CNT = 0x18064,
   NiFpga_RoboRioFpga20_ControlU32_IRQDIO_B_2CNT = 0x18060,
   NiFpga_RoboRioFpga20_ControlU32_IRQDIO_B_3CNT = 0x1805C,
   NiFpga_RoboRioFpga20_ControlU32_IRQDI_BTNCNT = 0x18020,
   NiFpga_RoboRioFpga20_ControlU32_IRQTIMERWRITE = 0x18014,
} NiFpga_RoboRioFpga20_ControlU32;

#endif
