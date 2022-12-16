/***********************************************************************//** 
 * \file  devices.c
 * \brief  source file for the devices
 * \copyright Copyright (C) 2015-2020 @ APTCHIP
 * <table>
 * <tr><th> Date  <th>Version  <th>Author  <th>Description
 * <tr><td> 2020-5-13 <td>V0.0  <td>ZJY    <td>initial
 * </table>
 * *********************************************************************
*/
//#include <csi_config.h>
#include <stdio.h>
#include <soc.h>
#include <sys_clk.h>
//#include <drv/uart.h>
#include <drv/bt.h>
//#include <drv/dma.h>
//#include <drv/iic.h>
//#include <drv/rtc.h>
#include <drv/spi.h>
//#include <drv/adc.h>
#include <drv/gpio.h>
#include <drv/irq.h>
#include <drv/pin.h>




const csi_irqmap_t irq_map[] = {
	
	{AHB_MBOX0_BASE,			MBOX0_INT0_IRQ_NUM		},   //CPU0 generate
    {CPU1_APB_BT0_BASE,         BT0_IRQ_NUM	    		},
	{CPU1_APB_SPI0_BASE,		SPI_IRQ_NUM				},
	{AHB_ADC0_BASE,             CPU0_ADC0_IRQ_NUM		},   //CPU0 generate
	{AHB_ADC1_BASE,           	CPU0_ADC1_IRQ_NUM		},
    {AHB_DMA0_BASE,           	CPU0_DMA0_IRQ_NUM		},
	{AHB_DMA1_BASE,           	CPU0_DMA1_IRQ_NUM		},
	{APB_GPTA0_BASE,          	CPU0_GPTA0_IRQ_NUM		},
	{APB_GPTA1_BASE,           	CPU0_GPTA1_IRQ_NUM		},
	{APB_GPTA2_BASE,           	CPU0_GPTA2_IRQ_NUM		},
	{APB_GPTA3_BASE,           	CPU0_GPTA3_IRQ_NUM		},
	{APB_TKEY_BASE,            	CPU0_TKEY_IRQ_NUM		},
	{AHB_DAC0_BASE,             CPU0_DAC_IRQ_NUM		},
	{APB_EPT_BASE,              CPU0_EPT_IRQ_NUM		},	
	{APB_USART0_BASE,           CPU0_USART0_IRQ_NUM		},
	{APB_USART1_BASE,           CPU0_USART1_IRQ_NUM		},
	{APB_UART0_BASE,            CPU0_UART0_IRQ_NUM	    },
    {APB_UART1_BASE,            CPU0_UART1_IRQ_NUM		},
    {APB_UART2_BASE,            CPU0_UART2_IRQ_NUM		},
	{APB_SIO0_BASE,             CPU0_SIO0_IRQ_NUM		},
    {APB_SIO1_BASE,             CPU0_SIO1_IRQ_NUM		},
	{APB_I2C0_BASE,            	CPU0_I2C_IRQ_NUM	    },
    {APB_RTC_BASE,              CPU0_RTC_IRQ_NUM		},
    {APB_CMP0_BASE,             CPU0_CMP0_IRQ_NUM		},
	{APB_CMP1_BASE,             CPU0_CMP1_IRQ_NUM		},
    {APB_CMP2_BASE,             CPU0_CMP2_IRQ_NUM		},
    {0,  						0			    		}
};

const csi_clkmap_t clk_map[] = {
//    {APB_MBOX_BASE,				MBOX_SYS_CLK		},
//    {APB_BT0_BASE,				BT_SYS_CLK			},
    {APB_SPI0_BASE,				SPI_SYS_CLK			},
    {0x00U, 					0xFFFFFFFFU			}
};

