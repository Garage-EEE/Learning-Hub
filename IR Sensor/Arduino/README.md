# Learning Hub KY-033 IR Obstacle Sensor (Arduino)

## Component Name
KY-033 IR Obstacle Sensor

## Type / Category
Sensor

## Objective / Purpose
- Detects obstacles or objects in front of it.
- Converts the presence of an object into a digital signal.
- Commonly used in robotics for obstacle avoidance, automation, and interactive projects.

---

## Getting Started / Setup Instructions
1. Connect the Arduino UNO to your computer using a USB cable.
2. Wire the KY-033 sensor as follows:

### Pinout / Connections

| KY-033 Pin | Arduino Pin | Description                        |
|------------|-------------|------------------------------------|
| VCC        | 5V          | Power supply                        |
| GND        | GND         | Ground                              |
| OUT        | 7           | Digital output pin                  |
| LED        | 13 (optional)| Optional onboard LED indicator     |

3. Open Arduino IDE, upload the code, and open Serial Monitor at 9600 baud to view outputs.

---

## Required Libraries
- **No external libraries required**. Uses built-in Arduino functions:
  - `pinMode()`, `digitalRead()`, `digitalWrite()`
  - `Serial.begin()`, `Serial.println()`

---

## Notes on Setup
- Ensure the KY-033 sensor is wired correctly; incorrect wiring may prevent detection.
- The sensor outputs LOW when an object is detected, HIGH when no object is present.
- A small delay of 100 ms helps stabilize the readings.

---

## Expected Outcomes / Functions
- When an object is placed in front of the sensor:
  - Serial Monitor prints **"Object Detected!"**
  - LED turns ON.
- When the object is removed:
  - Serial Monitor prints **"No Object"**
  - LED turns OFF.
- Detection is triggered only once per event to avoid repeated messages.

---

## Problems Faced & Solutions
| S.N | Problem                        | Solution                                  |
|-----|--------------------------------|------------------------------------------|
| 1   | Sensor not detecting objects    | Checked wiring and ensured correct pins  |
| 2   | Serial messages repeated quickly| Used boolean `objectDetected` logic      |
| 3   | LED not lighting up             | Verified LED pin and `pinMode()` setup   |

---

## Key Learnings / Notes
- KY-033 sensor outputs a simple digital signal when detecting obstacles.
- Implementing event-trigger logic prevents repeated serial prints.
- Can be integrated with motors, buzzers, or other actuators for robotics/automation projects.

---

## References / Links
- [KY-033 Obstacle Sensor Overview](https://components101.com/sensors/ir-obstacle-avoidance-sensor)
- [Arduino KY-033 Tutorial](https://lastminuteengineers.com/ir-obstacle-avoidance-arduino-tutorial/)


---

## Your Experience
- Observing object detection was intuitive and fun.
- Learned the importance of stabilizing sensor readings.
- Useful for robotics, automation, and interactive projects.

---

## MADE BY
- [Your Name], [Matric Number]
