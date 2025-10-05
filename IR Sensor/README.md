# Learning Hub KY-033 IR Obstacle Sensor

## Component Name
KY-033 IR Obstacle Sensor

## Type / Category
Sensor

## Objective / Purpose
- Detects obstacles or objects in front of it.
- Converts the presence of an object into a digital signal.
- Commonly used in robots for obstacle avoidance, automation systems, and security sensors.

---

## Getting Started / Setup Instructions
1. Connect the ESP32 to your computer with Arduino IDE installed.
2. Wire the KY-033 sensor as follows:

### Pinout / Connections

| KY-033 Pin | ESP32 Pin  | Description                        |
|------------|------------|------------------------------------|
| VCC        | 5V         | Power supply                        |
| GND        | GND        | Ground                              |
| OUT        | 32         | Digital output pin                  |
| LED        | 2 (optional)| Optional onboard LED indicator      |

3. Open Arduino IDE, upload the code, and open Serial Monitor at 115200 baud to view outputs.

---

## Required Libraries
- **No external libraries required**. Uses standard Arduino functions:
  - `pinMode()`, `digitalRead()`, `digitalWrite()`
  - `Serial.begin()`, `Serial.println()`

---

## Notes on Setup
- Ensure correct wiring; incorrect wiring can prevent detection.
- Delay of 100 ms added to stabilize readings.
- The sensor outputs LOW when an object is detected, HIGH when no object is present.

---

## Expected Outcomes / Functions
- When an object is placed in front of the sensor, Serial Monitor prints **"Object Detected!"** and the LED turns ON.
- When the object is removed, Serial Monitor prints **"No Object"** and the LED turns OFF.
- Object detection is triggered only once per event to avoid repeated messages.

---

## Problems Faced & Solutions
| S.N | Problem                        | Solution                                  |
|-----|--------------------------------|------------------------------------------|
| 1   | Sensor not detecting objects   | Checked wiring and ensured correct pins |
| 2   | Serial messages repeated too quickly | Added `objectDetected` boolean logic and small delay |
| 3   | LED not working                 | Ensured correct pin and mode configuration |

---

## Key Learnings / Notes
- Learned how KY-033 IR sensor outputs digital signals when detecting obstacles.
- Implemented event-trigger logic to avoid repeated serial prints.
- Can be integrated with motors, alarms, or other actuators for automation projects.

---

## References / Links
- [KY-033 Obstacle Avoidance Sensor Overview](https://components101.com/sensors/ir-obstacle-avoidance-sensor)
- [Arduino KY-033 Tutorial](https://lastminuteengineers.com/ir-obstacle-avoidance-arduino-tutorial/)

---

## Your Experience
- Observing real-time object detection was fun.
- Learned the importance of stabilizing sensor readings.
- Useful for future robotics and automation projects.

---

## MADE BY
- Rajesh Nandhitha, U2423673C
