//The following code will allow the servo to stop at intermediate positions instead of moving back to the original positions the moment the joystick is let go of. This allows for more precise control of the servo by the joystick.
// Sample Code: Joystick + Servo with deadzone
#include <Servo.h>

Servo myServo;
int xPin = A0;
int servoPin = 9;

int lastAngle = 90;  // Start servo at middle position
int deadzone = 50;   // Tolerance around center

void setup() {
    myServo.attach(servoPin);
    myServo.write(lastAngle);  // Move to initial position
}

void loop() {
    int xValue = analogRead(xPin);

    // Check if joystick is outside deadzone
    if (abs(xValue - 512) > deadzone) {
        int angle = map(xValue, 0, 1023, 0, 180);
        lastAngle = angle;           // Save new angle
        myServo.write(lastAngle);    // Update servo
    } else {
        // If joystick is near center, do nothing -> servo stays at last position
        myServo.write(lastAngle);
    }

    delay(15);
}
