#ifndef MAIN_H
#define MAIN_H

#include "stm32f4xx_hal.h" // أو stm32g4xx_hal.h حسب البورد

void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_SPI1_Init(void);
static void MX_I2C1_Init(void);
static void MX_USART2_UART_Init(void);
static void MX_USART3_UART_Init(void);
static void MX_ADC1_Init(void);
static void MX_TIM3_Init(void);

#endif
