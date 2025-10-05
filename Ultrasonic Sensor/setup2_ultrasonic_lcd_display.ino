#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); // Replace 0x27 with your LCD I2C address
#define trigPin 7
#define echoPin 6

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  lcd.begin(16, 2);
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(4, 0);
  lcd.print("Tech Trends");
  delay(2000);
  lcd.setCursor(0, 0);
  lcd.print("Target Distance:");
}

void loop() {
  long duration, distance;

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1; // Distance in cm

  lcd.setCursor(0, 1);
  lcd.print("                "); // Clear row
  lcd.setCursor(0, 1);
  lcd.print(distance);
  lcd.print(" cm");

  delay(250);
}
