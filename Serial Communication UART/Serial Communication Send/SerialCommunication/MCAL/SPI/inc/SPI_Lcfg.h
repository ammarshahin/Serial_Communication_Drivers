/*
 * SPI_Lcfg.h
 *
 * Created: 11/12/2019 11:31:50 AM
 *  Author: Ammar Shahin
 */ 


#ifndef SPI_LCFG_H_
#define SPI_LCFG_H_

/************************************************************************/
/*                            Files Includes                            */
/************************************************************************/
#include "Typedefs.h"

/************************************************************************/
/*                               Macros                                 */
/************************************************************************/


/************************************************************************/
/*                          Linking Structure                            */
/************************************************************************/
typedef struct Timers_CFG_S{
	uint8  ch_no;
	uint8  Timers_Mode;
	uint16 Timers_count;
	uint8  Timers_Interrupt;
	uint32 CPU_CLK;
}Timers_CFG_S;

/************************************************************************/
/*                       Extern Global variables                        */
/************************************************************************/
extern Timers_CFG_S timer0_cfg_s;
extern Timers_CFG_S timer1_cfg_s;
extern Timers_CFG_S timer2_cfg_s;





#endif /* SPI_LCFG_H_ */