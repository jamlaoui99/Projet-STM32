#include "mqtt_client.h"

int mqtt_connect(mqtt_client_t *c, const char *host, int port, int use_ssl) {
    // TODO: implement MQTT connect
    return 0; // success
}

int mqtt_publish_qos0(mqtt_client_t *c, const char *topic, const char *payload, int retain) {
    // TODO: send PUBLISH packet
    return 0;
}
