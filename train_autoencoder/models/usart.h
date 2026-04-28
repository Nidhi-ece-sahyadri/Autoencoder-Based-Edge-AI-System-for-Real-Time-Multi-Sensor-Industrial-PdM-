#ifndef __USART_H__
#define __USART_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "main.h"

/* UART handle */
extern UART_HandleTypeDef huart2;

/* Init function */
void MX_USART2_UART_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* __USART_H__ */
