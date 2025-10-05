#include <Wire.h>

#define I2C_SDA 47
#define I2C_SCL 48

void setup() {
  // Start I2C with custom pins
  Wire.begin(I2C_SDA, I2C_SCL);

  Serial.begin(115200);
  Serial.println("\nI2C Scanner with custom pins (SDA=47, SCL=48)");
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
    Serial.println("Done\n");
  }

  delay(5000);  // Wait 5 seconds before next scan
}
