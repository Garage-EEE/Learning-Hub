# Learning Hub DHT11 Sensor

## Component Name
DHT11

## Type / Category
Sensor

## Objective / Purpose
- Detects temperature and humidity.
- Useful for environmental monitoring, weather stations, or indoor climate projects.

---

## Getting Started / Setup Instructions
1. Connect Arduino / ESP32 to computer via USB.
2. Wire DHT11 sensor as follows:

### Pinout / Connections

| DHT11 Pin | Connection           |
|-----------|-------------------|
| 1         | Digital Input (Arduino Pin 7) |
| 2         | 5V (Power output) |
| 3         | GND (Ground)      |

3. Install required libraries:
   - `DHT.h` library

4. Upload the sample code provided.
5. Open Serial Monitor to read temperature and humidity.

---

## Notes on Setup
- Connect all three pins carefully.
- Verify Arduino is connected to the correct port.
- Pin 1 → Digital input (data), Pin 2 → 5V, Pin 3 → GND.

---

## Expected Outcomes / Functions
- Serial Monitor displays temperature (°C) and humidity (%).
- Readings refresh every 1 second.
- May see minor fluctuations depending on environment.

---

## Problems Faced & Solutions
| S.N | Problem                | Solution                               |
| --- | --------------------- | ------------------------------------- |
| 1   | Reading fluctuation    | Turn off fans/AC in the environment  |
| 2   | Incorrect wiring       | Verify connections and pin assignments|
| 3   | Execution errors       | Debug code and check library usage    |

---

## Key Learnings / Notes
- Ensure correct wiring on breadboard.
- VCC, GND, and Data pin must be connected properly.
- Understand refresh rate and minor fluctuations of readings.

---

## References / Links
- [Official Arduino DHT11 Documentation](https://projecthub.arduino.cc/arcaegecengiz/using-dht11-12f621)  
- [DHT11 Datasheet](https://cdn-learn.adafruit.com/downloads/pdf/dht.pdf)  
- [Arduino DHT Sensor Library](https://docs.arduino.cc/libraries/dht-sensor-library/)  
- [Tutorial Video](https://youtu.be/OogldLc9uYc?si=dfSxqVXvfJsSIuzJ)  

---

## Photos / Screenshots
- Include setup images or Serial Monitor output here.

---

## Output
- Serial Monitor displays:
Temperature = XX
Humidity = YY

Where XX = temperature in °C, YY = humidity in %.

---

## Your Experience
- Meaningful hands-on experience.
- Learned about environmental sensing with DHT11.
- Appreciated the opportunity to explore a new sensor in Garage.

---

## MADE BY
- LEE CHAEHOON, U2123012K  
- NICOLE NG JIA XIN, U2421576F  
- FAIZAH, U2422650J
