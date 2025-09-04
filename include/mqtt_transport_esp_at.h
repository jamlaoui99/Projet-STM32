#ifndef MQTT_TRANSPORT_ESP_AT_H
#define MQTT_TRANSPORT_ESP_AT_H

#include "stm32f4xx_hal.h"

typedef struct {
    UART_HandleTypeDef *huart;
    GPIO_TypeDef *rst_port;
    uint16_t rst_pin;
} esp_at_t;

int esp_at_init(esp_at_t *esp, UART_HandleTypeDef *huart, GPIO_TypeDef *rst_port, uint16_t rst_pin);
int esp_at_join_ap(esp_at_t *esp, const char *ssid, const char *pass, int timeout_ms);

#endif
