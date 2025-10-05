// Pin numbers for the RGB LED (adjust if using different pins)
const int redPin = 5;
const int greenPin = 6;
const int bluePin = 7;

void setup() {
  // Set the LED pins as OUTPUT
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Set RGB LED to Red
  setColor(255, 0, 0);
  delay(1000); // Wait for 1 second

  // Set RGB LED to Green
  setColor(0, 255, 0);
  delay(1000); // Wait for 1 second

  // Set RGB LED to Blue
  setColor(0, 0, 255);
  delay(1000); // Wait for 1 second

  // Set RGB LED to Yellow (Red + Green)
  setColor(255, 255, 0);
  delay(1000);

  // Set RGB LED to Cyan (Green + Blue)
  setColor(0, 255, 255);
  delay(1000);

  // Set RGB LED to Magenta (Red + Blue)
  setColor(255, 0, 255);
  delay(1000);

  // Set RGB LED to White (Red + Green + Blue)
  setColor(255, 255, 255);
  delay(1000);
}

// Function to set RGB LED color
void setColor(int redValue, int greenValue, int blueValue) {
  // For common cathode type: Use analogWrite directly
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}
