#include "mqtt_transport_esp_at.h"

int esp_at_init(esp_at_t *esp, UART_HandleTypeDef *huart, GPIO_TypeDef *rst_port, uint16_t rst_pin) {
    // TODO: init ESP8266 transport
    return 0;
}

int esp_at_join_ap(esp_at_t *esp, const char *ssid, const char *pass, int timeout_ms) {
    // TODO: AT+CWJAP command
    return 0;
}
