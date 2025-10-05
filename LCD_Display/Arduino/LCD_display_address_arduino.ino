#include <Wire.h>

void setup() {
  Wire.begin();              // Start I2C using default pins (SDA=A4, SCL=A5)
  Serial.begin(9600);        // Initialize serial monitor
  while (!Serial);           // Wait for serial monitor to open (optional)
  Serial.println("\nI2C Scanner for Arduino");
}

void loop() {
  byte error, address;
  int nDevices = 0;

  Serial.println("Scanning...");

  for (address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    error = Wire.endTransmission();

    if (error == 0) {
      Serial.print("I2C device found at address 0x");
      if (address < 16) Serial.print("0");
      Serial.println(address, HEX);
      nDevices++;
    } else if (error == 4) {
      Serial.print("Unknown error at address 0x");
      if (address < 16) Serial.print("0");
      Serial.println(address, HEX);
    }
  }

  if (nDevices == 0) {
    Serial.println("No I2C devices found\n");
  } else {
    Serial.println("Scan complete\n");
  }

  delay(5000);  // Wait 5 seconds before next scan
}
