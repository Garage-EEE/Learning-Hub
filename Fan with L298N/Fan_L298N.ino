// Motor A connections
int enA = 9;
int in1 = 8;
int in2 = 7;

void setup() {
  // Set all the motor control pins to outputs
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  // Turn off motors - Initial state
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

void loop() {
  directionControl();
  delay(2000);
  speedControl();
  delay(2000);
}

// This function lets you control spinning direction of motors
void directionControl() {
  // Set motors to maximum speed
  digitalWrite(enA, HIGH);
  delay(2000);

  // Turn on motor A
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(2000);

  // Change motor direction
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  delay(2000);

  // Turn off motors
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}

// This function lets you control speed of the motor
void speedControl() {
  // Turn on motor
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);

  // Accelerate from zero to maximum speed
  for (int i = 0; i < 256; i++) {
    analogWrite(enA, i);
    delay(100);
  }

  // Decelerate from maximum speed to zero
  for (int i = 255; i >= 0; --i) {
    analogWrite(enA, i);
    delay(100);
  }

  // Turn off motor
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
}
