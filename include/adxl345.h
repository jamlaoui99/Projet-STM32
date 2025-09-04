#ifndef ADXL345_H
#define ADXL345_H

#include "stm32f4xx_hal.h"

typedef struct {
    SPI_HandleTypeDef *hspi;
    GPIO_TypeDef *cs_port;
    uint16_t cs_pin;
} ADXL345_Handle;

HAL_StatusTypeDef ADXL345_Init(ADXL345_Handle *h);
HAL_StatusTypeDef ADXL345_ReadAxes_g(ADXL345_Handle *h, float *x, float *y, float *z);

#endif
