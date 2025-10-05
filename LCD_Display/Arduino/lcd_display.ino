#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Parameter: I2C address, cols, rows
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();       // initialize LCD
  lcd.backlight();  // turn on the backlight

  lcd.setCursor(0, 0);  // row1,col0
  lcd.print("Hello, NTU!");

  lcd.setCursor(0, 1);  // row2,col0
  lcd.print("Garage@EEE");
}

void loop() {
  //Keep displaying 
}
