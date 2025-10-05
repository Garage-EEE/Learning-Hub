// Sample Code: Joystick only
#include <Servo.h>

int vrx = A0; // Joystick X-axis
int vry = A1; // Joystick Y-axis
int sw = 7;   // Joystick button

void setup() {
    pinMode(vrx, INPUT);
    pinMode(vry, INPUT);
    pinMode(sw, INPUT);
    Serial.begin(9600);
}

void loop() {
    int x = analogRead(vrx);
    int y = analogRead(vry);
    int z = digitalRead(sw);

    Serial.print(x);
    Serial.print(",");
    Serial.print(y);
    Serial.print(",");
    Serial.println(z);

    delay(100);
}
