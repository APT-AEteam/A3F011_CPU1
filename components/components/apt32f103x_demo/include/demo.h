/***********************************************************************//** 
 * \file  demo.h
 * \brief  demo description and static inline functions at register level 
 * \copyright Copyright (C) 2015-2020 @ APTCHIP
 * <table>
 * <tr><th> Date  <th>Version  <th>Author  <th>Description
 * <tr><td> 2020-12-11 <td>V0.0  <td>ZJY   <td>initial
 * </table>
 * *********************************************************************
*/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _DEMO_H
#define _DEMO_H

/* Includes ------------------------------------------------------------------*/
#include "common.h"


//bt demo
extern int bt_timer_demo(void);
extern int bt_pwm_demo(void);
int bt_sync_trg_start_demo(void);
int bt_sync_trg_count_demo(void);
int bt_sync_trg_stop_demo(void);
int bt_trg_out_demo(void);
int bt_soft_trg_out_demo(void);



//spi demo
void spi_master_send_demo(void);
void spi_master_send_int_demo(void);
void spi_slave_receive_int_demo(void);
void spi_master_send_receive_demo(void);
void spi_slave_send_receive_int_demo(void);
void spi_etcb_dma_send(void);
void spi_etcb_dma_send_receive(void);







#endif