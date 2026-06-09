#include <SoftwareSerial.h>
#include <TinyGPS++.h>

#define ACCIDENT_PIN 2

TinyGPSPlus gps;

// GPS RX, TX
SoftwareSerial gpsSerial(4, 3);

// GSM RX, TX
SoftwareSerial gsmSerial(7, 8);

String latitude = "";
String longitude = "";

void setup() {

  Serial.begin(9600);

  gpsSerial.begin(9600);
  gsmSerial.begin(9600);

  pinMode(ACCIDENT_PIN, INPUT);

  Serial.println("Smart Car Accident Detection System Started");
}

void getGPSLocation() {

  unsigned long start = millis();

  while (millis() - start < 5000) {

    while (gpsSerial.available()) {

      gps.encode(gpsSerial.read());

      if (gps.location.isValid()) {

        latitude = String(gps.location.lat(), 6);
        longitude = String(gps.location.lng(), 6);

        return;
      }
    }
  }

  latitude = "Not Available";
  longitude = "Not Available";
}

void sendSMS() {

  gsmSerial.println("AT+CMGF=1");
  delay(1000);

  gsmSerial.println("AT+CMGS=\"+911234567890\"");
  delay(1000);

  gsmSerial.println("🚨 Accident Detected!");

  gsmSerial.print("Latitude: ");
  gsmSerial.println(latitude);

  gsmSerial.print("Longitude: ");
  gsmSerial.println(longitude);

  gsmSerial.print("Google Maps: ");
  gsmSerial.print("https://maps.google.com/?q=");
  gsmSerial.print(latitude);
  gsmSerial.print(",");
  gsmSerial.println(longitude);

  gsmSerial.write(26);

  delay(5000);
}

void loop() {

  int accidentStatus = digitalRead(ACCIDENT_PIN);

  if (accidentStatus == HIGH) {

    Serial.println("Accident Detected");

    getGPSLocation();

    Serial.println("Location Retrieved");

    sendSMS();

    Serial.println("SOS Message Sent");

    delay(10000);
  }
}
