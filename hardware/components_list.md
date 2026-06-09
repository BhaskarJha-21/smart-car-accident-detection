# Hardware Components List

## Project: Smart Car Accident Detection System

This document contains the list of hardware components required to build the Smart Car Accident Detection System.

---

## 1. Bill of Materials (BoM)

| S.No | Component             | Quantity    | Purpose              |
| ---- | --------------------- | ----------- | -------------------- |
| 1    | Arduino Uno           | 1           | Main microcontroller |
| 2    | ADXL345 Accelerometer | 1           | Accident detection   |
| 3    | NEO-6M GPS Module     | 1           | Location tracking    |
| 4    | SIM800L GSM Module    | 1           | SMS communication    |
| 5    | Li-ion Battery (12V)  | 1           | Power supply         |
| 6    | Breadboard            | 1           | Circuit prototyping  |
| 7    | Jumper Wires          | Multiple    | Connections          |
| 8    | Resistors             | As Required | Circuit protection   |
| 9    | LEDs                  | 2           | Status indication    |
| 10   | USB Cable             | 1           | Arduino programming  |

---

## 2. Component Description

### Arduino Uno

The Arduino Uno acts as the central controller of the system. It receives data from the accelerometer, processes accident conditions, retrieves GPS coordinates, and communicates with the GSM module.

### ADXL345 Accelerometer

The ADXL345 is a three-axis accelerometer used to monitor sudden changes in acceleration caused by collisions or impacts.

### NEO-6M GPS Module

The GPS module provides real-time geographic coordinates including latitude and longitude.

### SIM800L GSM Module

The GSM module sends SMS alerts containing accident information and GPS coordinates to emergency contacts.

### Li-ion Battery

Provides power to the entire system when installed in a vehicle.

---

## 3. Estimated Cost Analysis

| Component                | Approximate Cost (₹) |
| ------------------------ | -------------------- |
| Arduino Uno              | 500                  |
| ADXL345 Accelerometer    | 250                  |
| NEO-6M GPS Module        | 500                  |
| SIM800L GSM Module       | 450                  |
| Li-ion Battery           | 300                  |
| Breadboard & Wires       | 150                  |
| Miscellaneous Components | 100                  |

### Total Estimated Cost

```text
₹ 2,250 (Approx.)
```

---

## 4. Power Requirements

| Component   | Operating Voltage |
| ----------- | ----------------- |
| Arduino Uno | 5V                |
| ADXL345     | 3.3V - 5V         |
| NEO-6M GPS  | 3.3V - 5V         |
| SIM800L GSM | 3.7V - 4.2V       |
| LEDs        | 2V - 3V           |

---

## 5. Pin Connections

| Module      | Arduino Pin |
| ----------- | ----------- |
| ADXL345 SDA | A4          |
| ADXL345 SCL | A5          |
| GPS TX      | D4          |
| GPS RX      | D3          |
| GSM TX      | D7          |
| GSM RX      | D8          |
| Status LED  | D13         |
| Power       | 5V          |
| Ground      | GND         |

---

## 6. Safety Notes

* Ensure proper power regulation for the SIM800L module.
* Avoid reverse polarity connections.
* Secure all connections before vehicle deployment.
* Test GPS signal acquisition in an open area.
* Verify SMS functionality using a valid SIM card.

---

## 7. Future Hardware Upgrades

* ESP32 for Wi-Fi connectivity
* GSM + GPS combined module
* Vibration sensor integration
* Buzzer alarm system
* OLED/LCD display
* Cloud IoT connectivity module

---

## Conclusion

The hardware configuration provides a low-cost, reliable, and scalable platform for accident detection and emergency notification. The selected components are widely available, easy to integrate with Arduino, and suitable for educational, research, and prototype-level deployment.
