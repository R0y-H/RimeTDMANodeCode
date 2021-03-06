/*
************************************************************************************************
* Filename   	: TempTimer.c
* Programmer : JiangJun
* Description	: Operation of a temp timer 
* Date           : 2015-08-31 15:00
* Copyright    : (c) RimeLink (www.rimelink.com)
************************************************************************************************
*/
#ifndef __TEMP_TIMER_H__
#define __TEMP_TIMER_H__

/*
*********************************************************************************************************
*                                                                          INCLUDE FILES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                                                          DEBUG SYSTEM
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                                                       MACROS & CONSTANTS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                            				     DEFINITIONS / TYPEDEFS
*********************************************************************************************************
*/
/**
 * @brief  Call back function when the Temp-Timer timeout.
 */
typedef void (* TEMP_TIMER_CB)(void);


/*
*********************************************************************************************************
*                                                                  GLOBAL VARIABLE & STRUCTURE
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                                                        FUNCTION PROTOTYPE
*********************************************************************************************************
*/
void temptimer_Init(void);
void temptimer_Start(uint16_t wMs, TEMP_TIMER_CB lpfnTimeOut);
void temptimer_Stop(void);


#endif /*__TEMP_TIMER_H__*/

