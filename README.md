# Système de maintenance basé sur STM32

Ce projet est une application embarquée basée sur STM32, permettant de surveiller une machine industrielle en temps réel grâce à plusieurs capteurs (accéléromètre, capteur de température infrarouge, microphone).
Les données collectées sont transmises via Wi-Fi (ESP8266) et publiées sur un serveur MQTT.

## Fonctionnalités

- Lecture des capteurs :

ADXL345 : mesure des vibrations (axes X, Y, Z).

MLX90614 : mesure de la température par infrarouge.

Microphone (ADC) : mesure du bruit (RMS).

- Contrôle des actionneurs :

Ventilateur (Fan) via PWM.

Machine (Moteur) via PWM.

- Logique intégrée :

Si la température > 35 °C → ralentir la machine, activer le ventilateur à 100 %.

Si la température < 30 °C → remettre la machine à 100 %, désactiver le ventilateur.

- Communication :

Connexion Wi-Fi via ESP8266 (AT Commands).

Transmission des données sur un broker MQTT

## Matériel nécessaire

 STM32 (ex : STM32F4 ou STM32G4).

 ESP8266 avec firmware AT.

 ADXL345 (accéléromètre).

 MLX90614 (capteur infrarouge de température).

 Microphone relié à l’ADC.

 Ventilateur + machine commandés par PWM

## Configuration MQTT

Host : 192.168.1.100

Port : 1883

Topics :

factory/m1/temperature

factory/m1/vibration

factory/m1/microphone

factory/m1/state

## Compilation & Flash

Ouvrir le projet dans STM32CubeIDE.

Configurer les périphériques (SPI, I2C, UART, ADC, TIM3).

Compiler le projet (Build Project).

Flasher le firmware sur la carte STM32

## Utilisation

Une fois lancé :

Les mesures des capteurs sont prises périodiquement.

Les données sont publiées sur le broker MQTT.

La logique de contrôle ajuste automatiquement la machine et le ventilateur.


Ces données peuvent être visualisées avec MQTT Explorer, Node-RED ou Grafan

