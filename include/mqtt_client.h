#ifndef MQTT_CLIENT_H
#define MQTT_CLIENT_H

#include <stdint.h>

typedef struct {
    char client_id[32];
    char username[32];
    char password[32];
    int keep_alive_s;
    int clean_session;
    int connected;
    void *ctx;
    struct {
        int (*open)(void *ctx, const char *host, int port);
        int (*write)(void *ctx, const void *buf, int len);
        int (*read)(void *ctx, void *buf, int len);
        int (*close)(void *ctx);
    } t;
} mqtt_client_t;

int mqtt_connect(mqtt_client_t *c, const char *host, int port, int use_ssl);
int mqtt_publish_qos0(mqtt_client_t *c, const char *topic, const char *payload, int retain);

#endif
