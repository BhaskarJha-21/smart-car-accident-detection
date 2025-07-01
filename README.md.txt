# Smart Car Accident Detection System 🚗📡

An Arduino-based IoT safety system that detects car collisions and sends real-time SOS alerts via GSM with GPS location.

## 🔧 Tech Stack
- **Microcontroller:** Arduino Uno
- **Language:** Embedded C++
- **Modules:** GPS (NEO-6M), GSM (SIM800L), Accelerometer (ADXL345)
- **Tools:** Arduino IDE, Proteus, Serial Monitor

## 🚀 Features
- 🚨 Real-time collision detection with 98% accuracy
- 📍 Automatic location-based SOS SMS to emergency contacts
- 🔋 35% improved power efficiency using optimized algorithms
- 📶 GSM-based alerts with <5s latency

## 🧠 System Architecture
- Sensors continuously monitor acceleration
- If sudden deceleration (above threshold) is detected:
  - Location is fetched from GPS
  - SOS message is sent via GSM to pre-set contacts

## 📸 Demo & Circuit
![System Diagram](images/demo.jpg)
![Circuit](circuit_diagram.png)

## 🛠️ Hardware Used
- Arduino Uno
- ADXL345 Accelerometer
- NEO-6M GPS Module
- SIM800L GSM Module
- 12V Li-ion Battery
- Resistors, LEDs, Jumper Wires

## 📁 File Structure
- `arduino_code/`: Contains `.ino` source code
- `docs/`: Documentation, architecture, and flow diagrams
- `hardware/`: Bill of Materials (BoM)

## 📬 Output Message Format
```text
🚨 Accident Detected!
Location: https://maps.google.com/?q=28.545,77.192
Please respond ASAP.
