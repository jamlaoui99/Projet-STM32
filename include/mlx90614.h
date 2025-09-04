#ifndef MLX90614_H
#define MLX90614_H

#include "stm32f4xx_hal.h"

typedef struct {
    I2C_HandleTypeDef *hi2c;
    uint8_t addr;
} MLX90614_Handle;

HAL_StatusTypeDef MLX90614_Init(MLX90614_Handle *h, I2C_HandleTypeDef *hi2c, uint8_t addr);
HAL_StatusTypeDef MLX90614_ReadObjectC(MLX90614_Handle *h, float *tC);

#endif
