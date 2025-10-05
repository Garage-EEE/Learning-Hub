# Learning Hub Touch Sensor (KY-036)

## Component Name
Touch Sensor

## Type / Category
Sensor

## Objective / Purpose
- Detects mechanical touch and converts it into an electrical signal.
- Applications include touch-sensitive screens, robotics obstacle detection, home appliance control panels, security systems, and user interfaces.

---

## Getting Started / Setup Instructions
1. Connect Arduino / ESP32 to your computer.
2. Wire the KY-036 Touch Sensor to Arduino as follows:

### Pinout / Connections

| Touch Sensor Pin | Arduino Pin |
|-----------------|-------------|
| A0               | A0          |
| GND              | GND         |
| 5V               | 5V          |
| D0               | Pin 7       |

3. Open Arduino IDE and upload the sample code.
4. Open Serial Monitor to view readings.

---

## Required Libraries
- **No additional libraries required**. Uses default Arduino functions:
  - `pinMode()`, `digitalRead()`, `digitalWrite()`, `analogRead()`
  - `Serial.begin()`, `Serial.println()`

---

## Notes on Setup
- Power down the sensor before wiring.
- Ensure clean and properly indented code.
- Analog readings range from 0–1023. Touch decreases the value from 1023.

---

## Expected Outcomes / Functions

**Sample Code 1:**
- LED turns on when sensor is touched.
- Analog output decreases from 1023 when touch is detected.
- Serial Plotter displays voltage strength over time.

**Sample Code 2:**
- Counter increases whenever analog reading < 300.
- Continuous touch keeps incrementing the counter.

---

## Problems Faced & Solutions
| S.N | Problem                             | Solution                                                                 |
|-----|------------------------------------|-------------------------------------------------------------------------|
| 1   | Unable to write code initially      | Found KY-036 example online and used ChatGPT for guidance               |
| 2   | Unsure of Arduino pin connections  | Consulted sensor instruction manual and online tutorials               |

---

## Key Learnings / Notes
- Touch sensor works only with conductive material.
- Use Serial Plotter “Interpolate” feature for smoother graphs.
- Ensure sensor is properly powered and wired.

---

## References / Links
- [KY-036 Metal Touch Sensor Module](https://arduinomodules.info/ky-036-metal-touch-sensor-module/)
- [Touch Sensors Overview](https://www.raypcb.com/touch-sensor/)
- [Touch Sensors Research Article](https://www.arrow.com/en/research-and-events/articles/how-touch-sensors-work)

---

## Photos / Screenshots
- Include setup images and Serial Monitor/Plotter screenshots here.

---

## Your Experience
- Fun and interactive experience.
- Observed real-time response of analog readings to touch.
- Learned how to interpret sensor outputs.

---

## MADE BY
- BHARATH, U2522788A  
- KAIHANG, U2422970G
