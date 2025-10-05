#include <Wire.h>
#include <LiquidCrystal_PCF8574.h>

// Replace 0x27 with your LCD I2C address if different
LiquidCrystal_PCF8574 lcd(0x27);

void setup() {
  Serial.begin(115200);

  // Set custom I2C pins: SDA = GPIO 47, SCL = GPIO 48
  Wire.begin(47, 48);

  // Initialize LCD with 16 columns and 2 rows, using the Wire object
  lcd.begin(16, 2, Wire);

  // Turn on backlight
  lcd.setBacklight(255);

  // Display static text
  lcd.setCursor(0, 0);
  lcd.print("Hello, ESP32-S3!");
  lcd.setCursor(0, 1);
  lcd.print("I2C LCD working!");
}

void loop() {
  // Nothing needed here for static display
}
