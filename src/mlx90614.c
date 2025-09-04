#include "mlx90614.h"

HAL_StatusTypeDef MLX90614_Init(MLX90614_Handle *h, I2C_HandleTypeDef *hi2c, uint8_t addr) {
    h->hi2c = hi2c;
    h->addr = addr;
    return HAL_OK;
}

HAL_StatusTypeDef MLX90614_ReadObjectC(MLX90614_Handle *h, float *tC) {
    // TODO: read object temperature from sensor
    *tC = 25.0f; // fake value
    return HAL_OK;
}
