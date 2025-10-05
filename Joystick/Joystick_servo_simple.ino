//Controls the movement of the servo through the joystick. When the joystick is moved from left to right, the servo also moves from left to right. The servo returns to the original position when the joystick is in the middle.
// Sample Code: Joystick controlling Servo
#include <Servo.h>

Servo myServo;  // Create a servo object
int xPin = A0;  // Joystick X-axis
int yPin = A1;  // Joystick Y-axis (optional)
int servoPin = 9;

void setup() {
    myServo.attach(servoPin);
    pinMode(xPin, INPUT);
    pinMode(yPin, INPUT);
}

void loop() {
    int xValue = analogRead(xPin);                 // Read joystick X-axis value
    int angle = map(xValue, 0, 1023, 0, 180);     // Convert to servo angle
    myServo.write(angle);                          // Move servo to mapped position
    delay(15);                                     // Small delay for smooth movement
}
