#include "main.h"
#include "adxl345.h"
#include "mlx90614.h"
#include "vibfreq.h"
#include "mqtt_client.h"
#include "mqtt_transport_esp_at.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

/* Handles & peripherals */
SPI_HandleTypeDef hspi1;
I2C_HandleTypeDef hi2c1;
UART_HandleTypeDef huart2; /* Console */
UART_HandleTypeDef huart3; /* ESP8266 */
ADC_HandleTypeDef hadc1;
TIM_HandleTypeDef htim3;

/* Global devices */
static ADXL345_Handle g_adxl;
static MLX90614_Handle g_mlx;
static esp_at_t g_esp;
static mqtt_client_t g_mq;

int main(void)
{
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    MX_SPI1_Init();
    MX_I2C1_Init();
    MX_USART2_UART_Init();
    MX_USART3_UART_Init();
    MX_ADC1_Init();
    MX_TIM3_Init();

    printf("[BOOT] Ready.\r\n");

    /* TODO: init drivers, Wi-Fi, MQTT ... */
    while (1)
    {
        /* TODO: main loop logic */
    }
}
