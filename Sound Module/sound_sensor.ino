// Define the pin connected to the sound sensor's Analog Output (AO)
int soundSensor = A0;  

// Define the pin connected to the LED (indicator output)
int LED = 4;  

// Threshold value for sound detection (range 0–1023 for Arduino)
int threshold = 100;  

void setup() {
  // Set the LED pin as OUTPUT so it can be turned ON/OFF
  pinMode(LED, OUTPUT);  
}

void loop() {
  // Read the analog value from the sound sensor (0–1023)
  int sensorValue = analogRead(soundSensor);  

  // Compare the sensor reading with the threshold value
  if (sensorValue > threshold) {
    // If sound is louder than the threshold → turn ON LED
    digitalWrite(LED, HIGH);  
  } 
  else {
    // Otherwise → keep LED OFF
    digitalWrite(LED, LOW);  
  }
}   
