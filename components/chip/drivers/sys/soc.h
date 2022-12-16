 
/***********************************************************************//** 
 * \file  soc.h
 * \brief  CSI Core Peripheral Access Layer Header File for
 *           CSKYSOC Device Series
 * \copyright Copyright (C) 2015-2021 @ APTCHIP
 * <table>
 * <tr><th> Date  <th>Version  <th>Author  <th>Description
 * <tr><td> 2021-5-13 <td>V0.0 <td>ZJY     <td>initial
 * </table>
 * *********************************************************************
*/  

#ifndef _SOC_H_
#define _SOC_H_

#include <stdint.h>
#include <csi_core.h>
#include <drv/clk.h>
#include <drv/porting.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifndef ISOSC_VALU
#define ISOSC_VALUE			27000U
#endif

#ifndef EMOSC_VALUE
#define EMOSC_VALUE         24000000U
#endif

#ifndef EMOSC_32K_VALUE
#define EMOSC_32K_VALUE		32768U
#endif

#ifndef IMOSC_5M_VALUE
#define IMOSC_5M_VALUE		5556000U
#endif
#ifndef IMOSC_4M_VALUE
#define IMOSC_4M_VALUE      4194000U  

#endif
#ifndef IMOSC_2M_VALUE
#define IMOSC_2M_VALUE      2094000U
#endif
#ifndef IMOSC_131K_VALUE
#define IMOSC_131K_VALUE	131000U
#endif

#ifndef HFOSC_48M_VALUE
#define HFOSC_48M_VALUE     48000000U
#endif
#ifndef HFOSC_24M_VALUE
#define HFOSC_24M_VALUE     24000000U
#endif
#ifndef HFOSC_12M_VALUE
#define HFOSC_12M_VALUE     12000000U
#endif
#ifndef HFOSC_6M_VALUE
#define HFOSC_6M_VALUE      6000000U
#endif

//DMA
#define DMA_IDX_NUM			1
#define DMA_CH_MAX_NUM		6

//ETB dma start channel  number
//ETB max channel  number
#define ETB_CH_DMA_STAR		ETB_CH6
#define ETB_CH_MAX_NUM		12

//UARTx id number
#define UART_IDX_NUM   		3
#define UART_RECV_MAX_LEN	256

//USART id number
#define USART_IDX_NUM   		1
#define USART_RECV_MAX_LEN	128

//FLASH

#define PFLASHBASE			0x00000000  
#define PFLASHSIZE			0x00014000  //80K
#define PFLASHPAGE			320          
#define PFLASHLIMIT			(PFLASHBASE + PFLASHSIZE) 
#define USEROPTION_ADDR		0x000800C0
#define DFLASHBASE			0x10000000
#define DFLASHSIZE			0x00000C00 //3k
#define DFLASHPAGE			48  
#define DFLASHLIMIT 		(DFLASHBASE + DFLASHSIZE) 

#define IRQNUM				42
typedef enum {
	
	MBOX0_INT0_IRQ_NUM					= 17U,  //CPUO GENERATE
	BT0_IRQ_NUM							= 18U,
	SPI_IRQ_NUM							= 19U,	
	CPU0_ADC0_IRQ_NUM					= 20U,	 //NUM :20~42 from CPU0 
	CPU0_ADC1_IRQ_NUM    	  			= 21U,	
	CPU0_DMA0_IRQ_NUM					= 22U,
	CPU0_DMA1_IRQ_NUM					= 23U,
	CPU0_GPTA0_IRQ_NUM					= 24U,	
	CPU0_GPTA1_IRQ_NUM					= 25U,	
	CPU0_GPTA2_IRQ_NUM    				= 26U,
	CPU0_GPTA3_IRQ_NUM    				= 27U,
	CPU0_TKEY_IRQ_NUM					= 28U,
	CPU0_DAC_IRQ_NUM      				= 29U,
	CPU0_EPT_IRQ_NUM      				= 30U,
	CPU0_USART0_IRQ_NUM      			= 31U,
	CPU0_USART1_IRQ_NUM    				= 32U,
	CPU0_UART0_IRQ_NUM    				= 33U,
	CPU0_UART1_IRQ_NUM    				= 34U,
	CPU0_UART2_IRQ_NUM					= 35U,
	CPU0_SIO0_IRQ_NUM					= 36U,
	CPU0_SIO1_IRQ_NUM    				= 37U,
	CPU0_I2C_IRQ_NUM    				= 38U,
	CPU0_RTC_IRQ_NUM    				= 39U,
	CPU0_CMP0_IRQ_NUM					= 40U,
	CPU0_CMP1_IRQ_NUM					= 41U,
	CPU0_CMP2_IRQ_NUM					= 42U,
	
} irqn_type_e;

typedef enum {
	PA0			= 0U,
	PA1			= 1U,		
	PA2			= 2U,
    PA3			= 3U,
    PA4			= 4U,
    PA5			= 5U,
    PA6			= 6U,
    PA7			= 7U,
    PA8			= 8U,
    PA9			= 9U,
    PA10		= 10U,
    PA11		= 11U,
    PA12		= 12U,
    PA13		= 13U,
    PA14		= 14U,
    PA15		= 15U,
	
} pin_name_e;


typedef enum {
	
	PA0_GPD				    =  0U,
	PA0_INPUT				=  1U,		//input
	PA0_OUTPUT				=  2U,		//output
	PA0_OUTPUT_MONI		    =  3U,		//output with monitor	
	PA0_SPI1_MISO		    =  4U,		
	PA0_GPTA0_CHA			=  5U,		
	PA0_GPTB3_CHAX	        =  6U,		
    PA0_EBI3			    =  7U,
    PA0_QSPI_nCS1           =  8U,
    PA0_BT0_OUT             =  9U,
    PA0_LED_S2              =  10U,
	PA0_CPIN0P			    =  11U,
    PA0_OPA0P               =  12U,
	PA0_ADC_INA6            =  13U,
    
	
	PA1_GPD				    =  0U,
	PA1_INPUT				=  1U,		//input
	PA1_OUTPUT				=  2U,		//output
	PA1_OUTPUT_MONI		    =  3U,		//output with monitor
	PA1_SPI1_MOSI			=  4U,		
	PA1_GPTA0_CHB			=  5U,		
	PA1_GPTB4_CHAX		    =  6U,
		
	PA1_QSPI_nCS2			=  8U,
    PA1_BT1_OUT             =  9U,
    PA1_LED_S3              =  10U,
    PA1_CPIN0N              =  11U,
	PA1_OPA0N			    =  12U,
    PA1_ADC_INA7            =  13U,
	
	
	PA2_GPD				    =  0U,
	PA2_INPUT				=  1U,		//input
	PA2_OUTPUT				=  2U,		//output
	PA2_OUTPUT_MONI		    =  3U,		//output with monitor
    PA2_USART1_TX			=  4U,
    PA2_GPTA1_CHA           =  5U,
    PA2_CLO                 =  6U,
    PA2_UART1_TX          	=  7U,
	PA2_QSPI_nCS3			=  8U,
    PA2_BT2_OUT             =  9U,
	PA2_LED_S4              =  10U,
	PA2_UART0_TX            =  11U,
	PA2_OPA0X			    =  12U,
    PA2_ADC_INA8            =  13U,
	

	PA3_GPD				    =  0U,
	PA3_INPUT				=  1U,		//input
	PA3_OUTPUT				=  2U,		//output
	PA3_OUTPUT_MONI		    =  3U,		//output with monitor
	PA3_USART1_RX			=  4U,
    PA3_GPTA1_CHB           =  5U,
    PA3_GPTB5_CHAX          =  6U,
    PA3_UART1_RX            =  7U,
	PA3_QSPI_nSS			=  8U,
    PA3_BT3_OUT             =  9U,
	PA3_LED_S5              =  10U,
	PA3_UART0_RX            =  11U,
	PA3_OPA3P               =  12U,
	PA3_ADC_INA9            =  13U,
	
	
	PA4_GPD				    =  0U,
	PA4_INPUT				=  1U,		//input
	PA4_OUTPUT				=  2U,		//output
	PA4_OUTPUT_MONI		    =  3U,		//output with monitor
	PA4_SPI0_NSS			=  4U,
    PA4_USART1_CK           =  5U,
    PA4_DAC0_OUT            =  6U,
    PA4_LPT_OUT             =  7U,
	PA4_UART1_TX		    =  8U,
    PA4_UART0_TX            =  9U,	    	
	PA4_GROUP1              =  11U,
	PA4_OPA3N				=  12U,

	
	PA5_GPD				    =  0U,
	PA5_INPUT				=  1U,		//input
	PA5_OUTPUT				=  2U,		//output
	PA5_OUTPUT_MONI		    =  3U,		//output with monitor
	PA5_SPI0_SCK			=  4U,
    PA5_EBI3                =  5U,	
    PA5_LPT_IN              =  7U,
	PA5_UART1_RX			=  8U,
    PA5_UART0_RX            =  9U,
	PA5_LED_S6              =  10U,
	PA5_GROUP1              =  11U,
	PA5_OPA3X               =  12U,
	PA5_ADC_INA10           =  13U,
	
	
	PA6_GPD				    =  0U,
	PA6_INPUT				=  1U,		//input
	PA6_OUTPUT				=  2U,		//output
	PA6_OUTPUT_MONI		    =  3U,		//output with monitor
	PA6_SPI0_MISO			=  4U,
    PA6_GPTA2_CHA           =  5U,
    PA6_EBI0                =  6U,
	PA6_GPTB3_CHAX			=  8U,
	PA6_LED_S7              =  10U,
	PA6_GROUP1              =  11U,
	PA6_OPA2X               =  12U,
	PA6_ADC_INA11           =  13U,
	
	PA7_GPD				    =  0U,
	PA7_INPUT				=  1U,		//input
	PA7_OUTPUT				=  2U,		//output
	PA7_OUTPUT_MONI		    =  3U,		//output with monitor
	PA7_SPI0_MOSI			=  4U,
    PA7_GPTA2_CHB          	=  5U,
    PA7_GPTB3_CHAY          =  6U,
	PA7_GPTB4_CHAX			=  8U,
	PA7_GPTB0_CHAY          =  9U,
	PA7_GROUP1              =  11U,
	PA7_OPA2N               =  12U,
	PA7_ADC_INA12           =  13U,
	

	
	PA8_GPD				    =  0U,
	PA8_INPUT				=  1U,		//input
	PA8_OUTPUT				=  2U,		//output
	PA8_OUTPUT_MONI		    =  3U,		//output with monitor
	PA8_DAC0_OUT            =  4U,
    PA8_USART0_CK           =  5U,
    PA8_GPTB3_CHAX          =  6U,
    PA8_QSPI_nCS3	  	    =  7U,
	PA8_GPTB0_CHAX			=  8U,
	PA8_GPTB1_CHAX          =  9U,	
	PA8_CP0_OUT             =  11U,
	

	PA9_GPD				    =  0U,
	PA9_INPUT				=  1U,		//input
	PA9_OUTPUT				=  2U,		//output
	PA9_OUTPUT_MONI		    =  3U,		//output with monitor
	PA9_EBI1			    =  4U,
    PA9_USART0_TX           =  5U,
    PA9_GPTB4_CHAX          =  6U,
    PA9_QSPI_Nss	  	    =  7U,
	PA9_GPTB1_CHAX			=  8U,
	PA9_GPTB2_CHAY          =  9U,	
	PA9_CP1_OUT             =  11U,
	PA9_ADC_INB4            =  13U,
	
	
	PA10_GPD				=  0U,
	PA10_INPUT				=  1U,		//input
	PA10_OUTPUT			    =  2U,		//output
	PA10_OUTPUT_MONI		=  3U,		//output with monitor
	PA10_CNTA_BUZ			=  4U,
    PA10_USART0_RX          =  5U,
    PA10_GPTB5_CHAX         =  6U,
    PA10_EBI0	  	        =  7U,
	PA10_GPTB2_CHAX		    =  8U,
	PA10_GPTB2_CHAX_1       =  9U,	
	PA10_CP2_OUT         =  11U,	
    PA10_ADC_INB5            =  13U,
	
	PA11_GPD				=  0U,
	PA11_INPUT				=  1U,		//input
	PA11_OUTPUT			    =  2U,		//output
	PA11_OUTPUT_MONI		=  3U,		//output with monitor
	PA11_CAN_RX			    =  4U,
    PA11_EBI0               =  5U,
    PA11_SPI0_NSS	  	    =  7U,
	PA11_GPTB3_CHAY			=  8U,
	PA11_GPTB0_CHAY         =  9U,
	PA11_LED_C6             =  10U,
	PA11_GPTA1_CHA          =  11U,	
	PA11_ADC_INB6           =  13U,
	

	PA12_GPD				=  0U,
	PA12_INPUT				=  1U,		//input
	PA12_OUTPUT			    =  2U,		//output
	PA12_OUTPUT_MONI		=  3U,		//output with monitor
	PA12_CAN_TX		        =  4U,
    PA12_UART1_TX           =  5U,
    PA12_UART0_TX           =  6U,
    PA12_SPI0_SCK	  	    =  7U,
	PA12_GPTB3_CHAX			=  8U,
	PA12_GPTB0_CHAX         =  9U,
	PA12_LED_C7             =  10U,
	PA12_GPTA2_CHA          =  11U,	
	PA12_ADC_INB7           =  13U,
	
	PA13_GPD				=  0U,
	PA13_INPUT				=  1U,		//input
	PA13_OUTPUT			    =  2U,		//output
	PA13_OUTPUT_MONI		=  3U,		//output with monitor
	PA13_SWDIO				=  4U,
    PA13_I2C_SCL             =  5U,
    PA13_UART1_RX            =  6U,
    PA13_UART0_RX	  	     =  7U,

	
	PA14_GPD				=  0U,
	PA14_INPUT				=  1U,		
	PA14_OUTPUT			    =  2U,		
	PA14_OUTPUT_MONI		=  3U,		
	PA14_SWDCLK			    =  4U,
    PA14_I2C_SDA          	=  5U,
    PA14_UART1_TX           =  6U,
    PA14_UART0_TX		  	=  7U,
	PA14_LED_C9			    =  10U,
	
	PA15_GPD				=  0U,
	PA15_INPUT				=  1U,		
	PA15_OUTPUT			    =  2U,		
	PA15_OUTPUT_MONI		=  3U,		
	PA15_SPI0_NSS			=  4U,
    PA15_UART1_RX          	=  5U,
    PA15_UART0_RX           =  6U,
    PA15_SPI1_NSS		  	=  7U,
	PA15_EBI0			    =  8U,
	PA15_GROUP1             =  10U,
	PA15_CPIN7N             =  12U,
	PA15_ADC_INB8           =  13U,

	
	IOMAP					=  10U
} pin_func_e;

typedef enum{
	SWD_GRP0 = 0,
	SWD_GRP1,
	SWD_GRP2
}swd_grp_e;




//
//AHB1-APB1 for A3F011_CPU0
//--Peripheral Address Setting
#define APB1_PERI_BASE		0x40000000UL 
#define APB_SFR_BASE		(APB1_PERI_BASE + 0x0)
#define APB_IFC_BASE    	(APB1_PERI_BASE + 0x10000)
#define APB_ETCB_BASE    	(APB1_PERI_BASE + 0x20000)
#define APB_UART0_BASE  	(APB1_PERI_BASE + 0x30000)
#define APB_UART1_BASE  	(APB1_PERI_BASE + 0x31000)
#define APB_UART2_BASE  	(APB1_PERI_BASE + 0x32000)
#define APB_USART0_BASE   	(APB1_PERI_BASE + 0x33000)
#define APB_USART1_BASE   	(APB1_PERI_BASE + 0x34000)
#define APB_SPI0_BASE  		(APB1_PERI_BASE + 0x40000)
#define APB_SPI1_BASE  		(APB1_PERI_BASE + 0x41000)
#define APB_I2C0_BASE   	(APB1_PERI_BASE + 0x50000)
//#define APB_I2C1_BASE   	(APB1_PERI_BASE + 0x51000)
#define APB_SIO0_BASE  		(APB1_PERI_BASE + 0x60000)
#define APB_SIO1_BASE  		(APB1_PERI_BASE + 0x61000)
#define APB_CAN_BASE  		(APB1_PERI_BASE + 0x70000)
#define APB_STAMP_BASE  	(APB1_PERI_BASE + 0x71000)
#define APB_RTC_BASE		(APB1_PERI_BASE + 0x80000)
#define APB_LPT_BASE     	(APB1_PERI_BASE + 0x90000)
#define APB_WWDT_BASE		(APB1_PERI_BASE + 0xA0000)
#define APB_TKEY_BASE		(APB1_PERI_BASE + 0xB0000)
#define APB_TKDATA_BASE		(APB1_PERI_BASE + 0xB1000)
#define APB_TKEYSEQ_BASE	(APB1_PERI_BASE + 0xB2000)



//AHB1-APB2 for A3F011_CPU0
#define APB2_PERI_BASE		0x40400000UL 
#define APB_CNTA_BASE     	(APB2_PERI_BASE + 0x0)
#define APB_BT0_BASE       	(APB2_PERI_BASE + 0x1000)
#define APB_BT1_BASE      	(APB2_PERI_BASE + 0x2000)
#define APB_BT2_BASE       	(APB2_PERI_BASE + 0x3000)
#define APB_BT3_BASE      	(APB2_PERI_BASE + 0x4000)
#define APB_GPTA0_BASE    	(APB2_PERI_BASE + 0x5000)
#define APB_GPTA1_BASE    	(APB2_PERI_BASE + 0x6000)
#define APB_GPTA2_BASE    	(APB2_PERI_BASE + 0x7000)
#define APB_GPTA3_BASE    	(APB2_PERI_BASE + 0x8000)
#define APB_GPTB0_BASE   	(APB2_PERI_BASE + 0x9000)
//#define APB_GPTB1_BASE   	(APB2_PERI_BASE + 0xA000)
//#define APB_GPTB2_BASE   	(APB2_PERI_BASE + 0xB000)
//#define APB_GPTB3_BASE   	(APB2_PERI_BASE + 0xC000)
//#define APB_GPTB4_BASE   	(APB2_PERI_BASE + 0xD000)
#define APB_EPT_BASE   	(APB2_PERI_BASE + 0xE000)
//#define APB_EPT1_BASE   	(APB2_PERI_BASE + 0xF000)

#define APB_CMP0_BASE   	(APB2_PERI_BASE + 0x40000)
#define APB_CMP1_BASE  		(APB2_PERI_BASE + 0x41000)
#define APB_CMP2_BASE  		(APB2_PERI_BASE + 0x42000)
#define APB_CMP3_BASE  		(APB2_PERI_BASE + 0x43000)

#define APB_CODEC_BASE  	(APB2_PERI_BASE + 0x50000)
#define APB_I2S0_BASE  	    (APB2_PERI_BASE + 0x51000)
#define APB_I2S1_BASE  	    (APB2_PERI_BASE + 0x52000)

#define APB_FVR_BASE  	    (APB2_PERI_BASE + 0x60000)

#define APB_OPA0_BASE		(APB2_PERI_BASE + 0x70000)
#define APB_OPA1_BASE		(APB2_PERI_BASE + 0x71000)
#define APB_OPA2_BASE		(APB2_PERI_BASE + 0x72000)
#define APB_OPA3_BASE		(APB2_PERI_BASE + 0x73000)

//AHB1
#define AHB_CRC_BASE  		0x41000000UL 

#define AHB_DMA_BASE  		0x42000000UL 
#define AHB_DMA0_BASE  	    (AHB_DMA_BASE + 0x0)
#define AHB_DMA1_BASE  	    (AHB_DMA_BASE + 0x10000)

#define AHB_USB_BASE  		0x43000000UL 
#define AHB_USBUF_BASE  	0x44000000UL 
#define AHB_MBOX0_BASE		0x45000000UL 

//AHB2
#define AHB_GPIO_BASE 		0x50000000UL
#define AHB_GPIOA_BASE  	(AHB_GPIO_BASE + 0x0000) 	//A0  
#define AHB_GPIOB_BASE  	(AHB_GPIO_BASE + 0x20000) 	//B0 
#define AHB_GPIOC_BASE  	(AHB_GPIO_BASE + 0x40000) 	//A0  
#define AHB_GPIOD_BASE  	(AHB_GPIO_BASE + 0x60000) 	//B0 
#define AHB_IGRP_BASE		(AHB_GPIO_BASE + 0xF0000)

#define AHB_ADC_BASE        0x51000000UL
#define AHB_ADC0_BASE    	(AHB_ADC_BASE + 0x0)
#define AHB_ADC1_BASE    	(AHB_ADC_BASE + 0x10000)

#define AHB_DAC_BASE        0x52000000UL
#define AHB_DAC0_BASE    	(AHB_DAC_BASE + 0x0)
//#define AHB_DAC1_BASE    	(AHB_DAC_BASE + 0x10000)

#define AHB_CORDIC_BASE     0x53000000UL

#define AHB_TRNG_BASE        0x54000000UL
#define AHB_AES_BASE		 0x55000000UL
#define AHB_RSA_BASE		 0x56000000UL
#define AHB_SHA_BASE		 0x57000000UL

//AHB
#define AHB_QSPI_BASE		0x60000000UL

#define AHB_HWDIV_BASE		0x70000000UL

#define AHB_SYSCON_BASE	    0x80000000UL


#define CORE_ADDR_BASE  	0xE0000000//0xE0004000
#define CLIC_ADDR_BASE      0xE0800000 	



//CPU1 BASE ADDR
#define CPU1_APB_PERI_BASE			0x92000000UL 
#define CPU1_APB_SPI0_BASE  		(CPU1_APB_PERI_BASE + 0x00000)
#define CPU1_APB_BT0_BASE       	(CPU1_APB_PERI_BASE + 0x10000)


#define CPU1_AHB_SRAM1_BASE      	0x90000000UL   //CODE SRAM
#define CPU1_AHB_SRAM2_BASE     	0x91000000UL   //DATA SRAM
#define CPU1_AHB_MBOX1_BASE  		0x93000000UL





#define CONFIG_IRQ_NUM				32U
#define CK_CPU_ENALLNORMALIRQ		__enable_irq()
#define CK_CPU_DISALLNORMALIRQ		__disable_irq()

#define nop							asm ("nop")
#define NOP							asm ("nop")



//ISR Define for generating special interrupt related ASM (E902), with compile option -mistack

#define  ATTRIBUTE_ISR				__attribute__ ((interrupt ("machine")))

//sercpu1 interrupt
ATTRIBUTE_ISR 	void mbox0_int0_int_handler(void);			//mailbox0_cpu0  interrupt -cpu0
ATTRIBUTE_ISR 	void bt0_int_handler(void);					//BT0 interrupt -cpu1
ATTRIBUTE_ISR 	void spi_int_handler(void);			     	//SPI interrupt -cpu1

ATTRIBUTE_ISR	void cpu0_adc0_int_handler(void);          	//ADC0 interrupt CPU0
ATTRIBUTE_ISR 	void cpu0_adc1_int_handler(void);			//ADC1 interrupt
ATTRIBUTE_ISR 	void cpu0_dma0_int_handler(void);			//DMA0 interrupt
ATTRIBUTE_ISR 	void cpu0_dma1_int_handler(void);			//DMA1 interrupt 
ATTRIBUTE_ISR 	void cpu0_gpta0_int_handler(void);			//GPTA0 interrupt
ATTRIBUTE_ISR 	void cpu0_gpta1_int_handler(void);			//GPTA1 Interrupt
ATTRIBUTE_ISR 	void cpu0_gpta2_int_handler(void);			//GPTA2 interrupt
ATTRIBUTE_ISR 	void cpu0_gpta3_int_handler(void);			//GPTA3 interrupt
ATTRIBUTE_ISR 	void cpu0_tkey_int_handler(void);			//TKEY interrupt
ATTRIBUTE_ISR 	void cpu0_dac_int_handler(void);			//DAC interrupt
ATTRIBUTE_ISR 	void cpu0_ept_int_handler(void);			//EPT interrupt
ATTRIBUTE_ISR 	void cpu0_usart0_int_handler(void);			//USART0  interrupt
ATTRIBUTE_ISR 	void cpu0_usart1_int_handler(void);			//USART1 interrupt
ATTRIBUTE_ISR 	void cpu0_uart0_int_handler(void);		    //UART0 interrupt
ATTRIBUTE_ISR 	void cpu0_uart1_int_handler(void);			//UART1 Interrupt 
ATTRIBUTE_ISR 	void cpu0_uart2_int_handler(void);			//UART2 Interrupt 
ATTRIBUTE_ISR 	void cpu0_sio0_int_handler(void);			//SIO0 Interrupt
ATTRIBUTE_ISR 	void cpu0_sio1_int_handler(void);			//SIO1 interrupt
ATTRIBUTE_ISR 	void cpu0_i2c_int_handler(void);          	//I2C interrupt
ATTRIBUTE_ISR 	void cpu0_rtc_int_handler(void);			//RTC interrupt
ATTRIBUTE_ISR 	void cpu0_cmp0_int_handler(void); 			//CMP0 interrupt
ATTRIBUTE_ISR 	void cpu0_cmp1_int_handler(void);			//CMP1 interrupt
ATTRIBUTE_ISR 	void cpu0_cmp2_int_handler(void);			//CMP2 interrupt

//
ATTRIBUTE_ISR	void tspend_handler(void);				//tspend interrupt
ATTRIBUTE_ISR 	void sw_int_handler( void);				//CPU software interrupt

#ifdef __cplusplus
}
#endif

#endif  /* _SOC_H_ */
