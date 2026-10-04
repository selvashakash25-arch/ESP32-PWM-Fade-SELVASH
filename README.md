# ESP32 PWM Fade

This project demonstrates LED brightness control using PWM with ESP32.

## Components

- ESP32
- Potentiometer
- LED
- 220Ω Resistor

## Pin Connections

Potentiometer:
- VCC → ESP32 3.3V
- GND → ESP32 GND
- SIG → GPIO 34

LED:
- GPIO 5 → 220Ω Resistor → LED
- LED → GND

## Working

The potentiometer gives an analog value from 0 to 4095.

The ESP32 converts this value to a PWM brightness value from 0 to 255.

Turning the potentiometer changes the LED brightness.

## Author
SELVASH

#wowki simulator link
https://wokwi.com/projects/476928686282695681
