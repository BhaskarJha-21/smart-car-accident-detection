# Smart Car Accident Detection System Architecture

## 1. Introduction

The Smart Car Accident Detection System is an IoT-based safety solution designed to automatically detect vehicle accidents and notify emergency contacts with the accident location. The system combines accident detection, GPS tracking, and GSM communication to reduce emergency response time.

---

## 2. System Components

### Hardware Components

| Component             | Function                                        |
| --------------------- | ----------------------------------------------- |
| Arduino Uno           | Main microcontroller                            |
| ADXL345 Accelerometer | Detects sudden impact and abnormal acceleration |
| NEO-6M GPS Module     | Provides real-time latitude and longitude       |
| SIM800L GSM Module    | Sends emergency SMS alerts                      |
| Li-ion Battery        | Power supply                                    |
| Jumper Wires          | Hardware connections                            |

---

## 3. High-Level Architecture

```text
+-------------------+
|   ADXL345 Sensor  |
+-------------------+
          |
          v
+-------------------+
|   Arduino Uno     |
| Accident Analysis |
+-------------------+
          |
          |
   +------+------+
   |             |
   v             v
+--------+   +---------+
| GPS    |   | GSM     |
| NEO-6M |   | SIM800L |
+--------+   +---------+
     |            |
     +-----+------+
           |
           v
+----------------------+
| Emergency Contact    |
| Receives SOS Alert   |
+----------------------+
```

---

## 4. Working Flow

### Step 1: Data Monitoring

The ADXL345 accelerometer continuously measures acceleration values along the X, Y, and Z axes.

### Step 2: Accident Detection

Arduino compares incoming acceleration values against a predefined threshold.

If:

```text
Acceleration > Threshold
```

the event is classified as a possible accident.

### Step 3: GPS Location Retrieval

The Arduino requests the latest coordinates from the NEO-6M GPS module.

Example:

```text
Latitude  = 28.613939
Longitude = 77.209021
```

### Step 4: SOS Message Generation

A Google Maps URL is generated using the GPS coordinates.

Example:

```text
https://maps.google.com/?q=28.613939,77.209021
```

### Step 5: GSM Communication

The SIM800L module sends an SMS containing:

* Accident alert
* Latitude
* Longitude
* Google Maps link

### Step 6: Emergency Notification

The emergency contact receives the SMS and can directly navigate to the accident location.

---

## 5. Data Flow Diagram

```text
Accelerometer
      |
      v
Accident Detection
      |
      v
GPS Location Fetching
      |
      v
Message Generation
      |
      v
GSM SMS Transmission
      |
      v
Emergency Contact
```

---

## 6. Sequence Diagram

```text
ADXL345 -> Arduino : Acceleration Data

Arduino -> Arduino : Accident Analysis

Arduino -> GPS : Request Coordinates

GPS -> Arduino : Latitude & Longitude

Arduino -> GSM : Generate SOS Message

GSM -> Emergency Contact : Send SMS Alert
```

---

## 7. Sample Emergency Alert

```text
🚨 Accident Detected!

Latitude: 28.613939
Longitude: 77.209021

Location:
https://maps.google.com/?q=28.613939,77.209021

Please respond immediately.
```

---

## 8. Advantages

* Automatic accident reporting
* Faster emergency response
* Real-time location sharing
* Low-cost implementation
* Easy deployment in vehicles

---

## 9. Future Scope

* Cloud-based monitoring dashboard
* Mobile application integration
* Emergency voice calling
* Hospital and ambulance integration
* Machine learning-based accident severity analysis
* Real-time fleet monitoring

---

## 10. Conclusion

The Smart Car Accident Detection System provides an efficient and affordable solution for vehicle safety. By integrating accident detection, GPS tracking, and GSM communication, the system can automatically notify emergency contacts and significantly reduce the time required for assistance after an accident.
