/***********************************************************************//** 
 * \file  interrupt.c
 * \brief  source file for interrypt handlers
 * \copyright Copyright (C) 2015-2020 @ APTCHIP
 * <table>
 * <tr><th> Date  <th>Version  <th>Author  <th>Description
 * <tr><td> 2020-8-10 <td>V0.0  <td>WNN   <td>initial
 * </table>
 * *********************************************************************
*/

/* Includes ------------------------------------------------------------------*/

#include <soc.h>
#include <drv/mbox.h>
//#include <drv/uart.h>
//#include <drv/adc.h>
#include <drv/pin.h>
#include <drv/gpio.h>
//#include <drv/iwdt.h>
#include "board_config.h"
#include "csp.h"
#include "ifc.h"
//#include "iic.h"

/* externs function--------------------------------------------------------*/
//extern void bt_irqhandler(csp_bt_t *ptBtBase);
//extern void tick_irqhandler(void);					
//extern void dma_irqhandler(csp_dma_t *ptDmaBase);
//extern void uart_irqhandler(csp_uart_t *ptUartBase,uint8_t byIdx);
//extern void usart_irqhandler(csp_usart_t *ptUsartBase,uint8_t byIdx);
//extern void lin_irqhandler(csp_lin_t *ptLinBase, uint8_t byIdx);
//extern void cnta_irqhandler(csp_cnta_t *ptCntaBase);
//extern void spi_irqhandler(csp_spi_t *ptSpiBase);
//extern void sio_irqhandler(csp_sio_t *ptSioBase);
//extern void adc_irqhandler(csp_adc_t *ptAdcBase);
//extern void ept_initen_irqhandler(csp_ept_t *ptEptBase);
//extern void gpta0_initen_irqhandler(csp_gpta_t *ptGptaBase);
//extern void gpio_irqhandler(uint8_t byExiNum);
//extern void ifc_irqhandler(void);
//extern void lpt_irqhandler(csp_lpt_t *ptLptBase);
//extern void wwdt_irqhandler(void);
//extern void rtc_irqhandler(csp_rtc_t *ptRtcBase);
//
extern void mbox_irqhandler(csp_mbox_t *ptMboxBase);
//extern void csi_tick_increase(void);
/* private function--------------------------------------------------------*/

/* extern variablesr------------------------------------------------------*/

/* Private variablesr------------------------------------------------------*/

uint32_t g_wAdcData[16];
uint8_t g_byAdcDone = 0;
/*************************************************************/
//CORET Interrupt
//EntryParameter:NONE
//ReturnValue:NONE
/*************************************************************/

//void coret_int_handler(void) 
//{
//    // ISR content ...
//	tick_irqhandler();		//system coret 
//}


void mbox0_int0_int_handler(void) 
{	
	// ISR content ...
	csp_mbox_t *ptMboxChBase = MBOX_REG_BASE(MBOX0, MBOX_INT0);
	
	mbox_irqhandler(ptMboxChBase);
 
}

void bt0_int_handler(void) 
{
	// ISR content ...

}

void spi_int_handler(void) 
{	
	
	// ISR content ...
	
}
void cpu0_adc0_int_handler(void)
{

	// ISR content ...	 
}

void cpu0_adc1_int_handler(void)
{
	 // ISR content ...

}

void cpu0_dma0_int_handler(void) 
{

// ISR content ...

}

void cpu0_dma1_int_handler(void) 
{

    //ISR content ...

}

void cpu0_gpta0_int_handler(void) 
{
   //ISR content ...
}

void cpu0_gpta1_int_handler(void) 
{

    // ISR content ...
}

void cpu0_gpta2_int_handler(void) 
{
    // ISR content ...
}

void cpu0_gpta3_int_handler(void) 
{

	// ISR content ...
}

void cpu0_tkey_int_handler(void) 
{
   // ISR content ...

}

void cpu0_dac_int_handler(void) 
{

    // ISR content ...
}
void cpu0_ept_int_handler(void) 
{

    // ISR content ...
}

void cpu0_usart0_int_handler(void) 			
{

    // ISR content ...

}
void cpu0_usart1_int_handler(void) 
{
    // ISR content ...

}
void cpu0_uart0_int_handler(void) 
{

    // ISR content ...
}

void cpu0_uart1_int_handler(void) 
{

    // ISR content ...

}
void cpu0_uart2_int_handler(void) 
{

    // ISR content ...
}

void cpu0_sio0_int_handler(void) 
{
  // ISR content ...

}
void cpu0_sio1_int_handler(void) 
{
    // ISR content ...

}
void cpu0_i2c_int_handler(void) 
{

    // ISR content ...

}

void cpu0_rtc_int_handler(void) 
{

    // ISR content ...
}

void cpu0_cmp0_int_handler(void) 
{

    // ISR content ...

}

void cpu0_cmp1_int_handler(void) 
{

    // ISR content ...

}
void cpu0_cmp2_int_handler(void) 
{

    // ISR content ...
}

/*************************************************************/
/*************************************************************/
/*************************************************************/
void PriviledgeVioHandler(void) 
{
    // ISR content ...
	while(1){};
}

void SystemDesPtr(void) 
{
    // ISR content ...
	while(1){};
}

void MisalignedHandler(void) 
{
    // ISR content ...
	while(1){};
}

void IllegalInstrHandler(void) 
{
    // ISR content ...
	while(1){};
}

void AccessErrHandler(void) 
{
    // ISR content ...
	while(1){};
}

void BreakPointHandler(void) 
{
    // ISR content ...
	while(1){};
}

void UnrecExecpHandler(void) 
{
    // ISR content ...
	while(1){};
}

void Trap0Handler(void) 
{
    // ISR content ...
	while(1){};
}

void Trap1Handler(void) 
{
    // ISR content ...
	while(1){};
}

void Trap2Handler(void) 
{
    // ISR content ...
	while(1){};
}

void Trap3Handler(void) 
{
    // ISR content ...
	while(1){};

}

void PendTrapHandler(void) 
{
    // ISR content ...
	while(1){};
}




/******************* (C) COPYRIGHT 2020 APT Chip *****END OF FILE****/