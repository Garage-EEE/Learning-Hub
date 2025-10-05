#define IR_SENSOR  7    // KY-033 OUT pin connected to Arduino digital pin 7
#define LED_PIN    13   // Optional onboard LED for indication

bool objectDetected = false;  // Tracks detection state

void setup() {
  Serial.begin(9600);        // Initialize serial communication
  pinMode(IR_SENSOR, INPUT); // Set IR sensor pin as input
  pinMode(LED_PIN, OUTPUT);  // Set LED pin as output
}

void loop() {
  int irValue = digitalRead(IR_SENSOR); // Read KY-033 output

  if (irValue == LOW) {  // Object detected (KY-033 OUT goes LOW)
    if (!objectDetected) {  // Trigger only once per detection
      Serial.println("Object Detected!");
      digitalWrite(LED_PIN, HIGH);  // Turn LED ON
      objectDetected = true;
      // Additional actions can be added here (motor, buzzer, etc.)
    }
  } else {  // No object detected
    if (objectDetected) {  // Trigger only once when object goes away
      Serial.println("No Object");
      digitalWrite(LED_PIN, LOW);   // Turn LED OFF
      objectDetected = false;
    }
  }

  delay(100); // Small delay to stabilize readings
}
