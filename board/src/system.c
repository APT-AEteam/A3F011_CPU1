
 
/***********************************************************************//** 
 * \file  system.c
 * \brief  CSI Device System Source File
 * \copyright Copyright (C) 2015-2020 @ APTCHIP
 * <table>
 * <tr><th> Date  <th>Version  <th>Author  <th>Description
 * <tr><td> 2021-5-13 <td>V0.0 <td>ZJY     <td>initial
 * </table>
 * *********************************************************************
*/  

#include <soc.h>
#include "sys_clk.h"
#include "csp_gpio.h"
#include "drv/tick.h"
//#include "drv/iwdt.h" 
#include "drv/pin.h" 
#include "csp.h"


/**
  \brief       initialize the system
  \param[in]   none
  \return      None
*/


void system_init(void)		//__attribute__((weak))
{
	uint32_t i;
	
	
	__disable_excp_irq(); // disable all interrupts
	
	
	/* get interrupt level from info */
    CLIC->CLICCFG = (((CLIC->CLICINFO & CLIC_INFO_CLICINTCTLBITS_Msk) >> CLIC_INFO_CLICINTCTLBITS_Pos) << CLIC_CLICCFG_NLBIT_Pos);

    for (i = 0; i < IRQNUM; i++) {
		CLIC->CLICINT[i].ATTR &= 0xfffffff9;	// tigger mode: level
        CLIC->CLICINT[i].ATTR |= 1;  			// use vector interrupt
    }

	//csp_iwdt_disable(SYSCON);		//disable iwdt
	csi_sysclk_config(tClkConfig);			//sysclk config
	csi_get_sclk_freq();			//get sysclk
	csi_get_pclk_freq();			//get PCLK
	//csi_tick_init();                //init systick(BT3)
	
	__enable_excp_irq(); //enable all interrupts
	
}
