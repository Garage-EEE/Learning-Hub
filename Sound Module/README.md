# Learning Hub Sound

## Component Name
Sound Sensor

## Type / Category
Sensor

## Objective / Purpose
Detects sound intensity or loudness in the surrounding environment and outputs a corresponding analog or digital signal to a microcontroller. Often used in noise detection, clap switches, or sound-activated devices.

---

## Getting Started / Setup Instructions

### Pinout / Connections

**Arduino / ESP32**

| Component | Pin                        |
| --------- | -------------------------- |
| VCC       | 5V / 3.3V                  |
| GND       | GND                        |
| Digital Out (DO) | D2 / GPIO 23 (any digital pin) |
| Analog Out (AO)  | A0 / GPIO 34 (Analog-capable pin) |

**Hardware Required**

* Arduino / ESP32 Board  
* Sound Sensor Module  
* Output device (e.g., LED)

---

## Required Libraries
No additional libraries required.

---

## Notes on Setup
* Adjust the potentiometer on the module to set the sensitivity threshold.  
* Keep the sensor away from constant noise sources to avoid false readings.  

---

## Expected Outcomes / Functions
* LED (or other output) turns ON when the detected sound level exceeds the set threshold.  
* LED remains OFF when sound is below the threshold.  
* Demonstrates a simple clap-activated light system.  

---

## Problems Faced & Solutions

| S.N | Problem                                        | Solution                                                                 |
| --- | ---------------------------------------------- | ----------------------------------------------------------------------- |
| 1   | Red LED stayed HIGH all the time               | Used analog output for more accurate sound detection and LED control.    |

---

## Key Learnings / Notes
* Learned how to read analog values from a sound sensor.  
* Understood the importance of calibrating the threshold for reliable detection.  
* Realized that analog output gives finer control compared to digital output.  
* Learned to troubleshoot by approaching the problem from different perspectives.  
* Use analog pin for measuring sound intensity levels.  
* Place sensor away from constant background noise.  
* Use Serial Monitor to fine-tune the threshold value.  

---

## References / Links
* [Arduino Sound Sensor Project (Arduino Project Hub)](https://projecthub.arduino.cc/lakshyajhalani56/sound-sensor-arduino-project-sound-sensor-module-arduino-31a654)  
* [Interfacing Sound Sensor with Arduino (Circuit Digest)](https://circuitdigest.com/microcontroller-projects/interfacing-sound-sensor-with-arduino)  

---

## Team Experience
* *It was fun to work as a pair, as we could share our strengths and combine our knowledge to complete the project. The hands-on experience made the learning process enjoyable, and we discovered many new things along the way.*

---

**Made by: Krithika (U2523577K) and Jai**
