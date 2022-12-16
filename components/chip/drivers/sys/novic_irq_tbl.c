/*
 * Copyright (C) 2016 YunOS Project. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//#include <csi_config.h>
#include <soc.h>

extern void Default_Handler(void);

void (*g_irqvector[64])(void);
void (*g_nmivector)(void);

void irq_vectors_init(void)
{
    int i;

    for (i = 0; i < 64; i++) {
        g_irqvector[i] = Default_Handler;
    }
	
//#ifdef	CONFIG_IRQ_LOOKUP		//Table lookup method for interrupt processing 
	//init all irq table
	//g_irqvector[MBOX_GS232E_IRQ_NUM] 	= mbox_gs232e_int_handler;
	g_irqvector[MBOX0_INT0_IRQ_NUM] 	= mbox0_int0_int_handler;
	g_irqvector[BT0_IRQ_NUM] 			= bt0_int_handler;
	g_irqvector[SPI_IRQ_NUM] 			= spi_int_handler;
	g_irqvector[CPU0_ADC0_IRQ_NUM] 		= cpu0_adc0_int_handler;
	g_irqvector[CPU0_ADC1_IRQ_NUM] 		= cpu0_adc1_int_handler;
	g_irqvector[CPU0_DMA0_IRQ_NUM] 		= cpu0_dma0_int_handler;
	g_irqvector[CPU0_DMA1_IRQ_NUM] 		= cpu0_dma1_int_handler;
	g_irqvector[CPU0_GPTA0_IRQ_NUM]   	= cpu0_gpta0_int_handler;
	g_irqvector[CPU0_GPTA1_IRQ_NUM ] 	= cpu0_gpta1_int_handler;
	g_irqvector[CPU0_GPTA2_IRQ_NUM]  	= cpu0_gpta2_int_handler;
	g_irqvector[CPU0_GPTA3_IRQ_NUM]  	= cpu0_gpta3_int_handler;
	g_irqvector[CPU0_TKEY_IRQ_NUM]  	= cpu0_tkey_int_handler;
	g_irqvector[CPU0_DAC_IRQ_NUM]  		= cpu0_dac_int_handler;
	g_irqvector[CPU0_EPT_IRQ_NUM] 		= cpu0_ept_int_handler;
	g_irqvector[CPU0_USART0_IRQ_NUM] 	= cpu0_usart0_int_handler;
	g_irqvector[CPU0_USART1_IRQ_NUM] 	= cpu0_usart1_int_handler;
	g_irqvector[CPU0_UART0_IRQ_NUM] 	= cpu0_uart0_int_handler;
	g_irqvector[CPU0_UART1_IRQ_NUM] 	= cpu0_uart1_int_handler;
	g_irqvector[CPU0_UART2_IRQ_NUM] 	= cpu0_uart2_int_handler;
	g_irqvector[CPU0_SIO0_IRQ_NUM] 		= cpu0_sio0_int_handler;
	g_irqvector[CPU0_SIO1_IRQ_NUM] 		= cpu0_sio1_int_handler;
	g_irqvector[CPU0_I2C_IRQ_NUM] 		= cpu0_i2c_int_handler;
	g_irqvector[CPU0_RTC_IRQ_NUM] 		= cpu0_rtc_int_handler;
	g_irqvector[CPU0_CMP0_IRQ_NUM] 		= cpu0_cmp0_int_handler;
	g_irqvector[CPU0_CMP1_IRQ_NUM] 		= cpu0_cmp1_int_handler;
	g_irqvector[CPU0_CMP2_IRQ_NUM] 		= cpu0_cmp2_int_handler;


//#endif

}
