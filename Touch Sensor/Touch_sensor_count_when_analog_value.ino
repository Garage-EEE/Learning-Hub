// Code to show count when analog voltage values <300

int digitalPin = 7;   // KY-036 digital interface
int analogPin = A0;    // KY-036 analog interface
int ledPin = 13;       // Arduino LED pin
int digitalVal;        // digital readings
int analogVal;         // analog readings
int count = 0;         // Counter for analog value below 300

void setup()
{
  pinMode(digitalPin, INPUT); 
  pinMode(analogPin, INPUT);
  pinMode(ledPin, OUTPUT);      
  Serial.begin(9600);
}

void loop()
{
  // Read the digital interface
  digitalVal = digitalRead(digitalPin); 
  
  if (digitalVal == HIGH) 
  {
    digitalWrite(ledPin, HIGH); // Turn ON Arduino's LED
  }
  else
  {
    digitalWrite(ledPin, LOW);  // Turn OFF Arduino's LED
  }

  // Read analog interface
  analogVal = analogRead(analogPin);
  Serial.println(analogVal);  // Print analog value to serial
  
  // Check if the analog value is below 300
  if (analogVal < 300) 
  {
    count++;  // Increment counter if the value is below 300
  }

  // Print the count to the serial monitor
  Serial.print("Count of analog values below 300: ");
  Serial.println(count);

  delay(100);  // Delay for 100ms
}
