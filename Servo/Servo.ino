// Sample Code: Servo only
#include <Servo.h>

Servo servo_9;

void setup() {
    servo_9.attach(9);
}

void loop() {
    // rotate clockwise
    servo_9.write(0);
    delay(1000);

    // stop rotation
    servo_9.write(90);
    delay(1000); 

    // rotate anti-clockwise
    servo_9.write(180);
    delay(1000);

    // stop rotation
    servo_9.write(90);
    delay(1000);
} 
