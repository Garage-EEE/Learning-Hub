# Learning Hub Ultrasonic Sensor

## Component Name
Ultrasonic Sensor

## Type / Category
Distance Sensor / Mini-Sonar

## Objective / Purpose
The Ultrasonic Sensor sends out ultrasonic waves and measures the time it takes for the waves to reflect back. Using the speed of sound, it calculates the distance of obstacles in front of it. This sensor can be used in robots or devices for obstacle detection and collision avoidance.

---

## Getting Started / Setup Instructions

### Pinout / Connections (Set-up 1: Serial Monitor Output)

| Component | Arduino Pin |
| --- | --- |
| GND | GND |
| VCC | 5V |
| Trig | 9 |
| Echo | 10 |

**Required Hardware**

* Arduino Board  
* Ultrasonic Sensor (HC-SR04)  
* Jumper Wires  
* Breadboard (optional)  

---

### Pinout / Connections (Set-up 2: LCD Display Output)

| Component | Arduino Pin / Connection |
| --- | --- |
| Ultrasonic Sensor GND | GND |
| Ultrasonic Sensor VCC | 5V |
| Ultrasonic Sensor Trig | 7 |
| Ultrasonic Sensor Echo | 6 |
| LCD I2C GND | GND |
| LCD I2C VCC | 5V |
| LCD I2C SDA | A4 |
| LCD I2C SCL | A5 |

**Required Libraries**

* `<LiquidCrystal_I2C.h>` (for LCD setup)  
* `<Wire.h>` (included in Arduino IDE)  

---

### Notes on Setup

* Ensure all connections are secure; loose connections can cause incorrect readings.  
* Verify and upload the correct code when switching between setups.  
* Check the pin mapping carefully between sensor, Arduino, and any connected devices (e.g., LCD).  

---

## Expected Outcomes / Functions

**Set-up 1**

* Serial Monitor outputs distance in centimeters.  
* Distance changes based on the position of obstacles in front of the sensor.  

**Set-up 2**

* LCD should display the distance in centimeters.  
* In this case, the LCD output was not successfully achieved due to library or component compatibility issues.  

---

## Problems Faced & Solutions

| S.N | Problem | Solution / Notes |
| --- | --- | --- |
| 1 | Set-up 2: Library errors | Ensure the correct version of `<LiquidCrystal_I2C.h>` is installed; multiple libraries with similar names may conflict. |
| 2 | LCD display did not work | Component mismatch; using a different LCD model caused failure. We could not resolve this with available components. |
| 3 | Set-up 2: Could not find exact component | Used an LCD with I2C converter and attempted connections from online tutorials (e.g., YouTube). |

---

## Key Learnings / Notes

* Libraries in Arduino IDE are unique; ensure correct library version is used for your hardware.  
* Ultrasonic Sensors are useful in robotics for obstacle detection and avoidance.  
* Speed of sound can vary with environmental conditions; additional calibration may be needed for precision applications.  
* Debugging and testing with simpler setups (e.g., serial monitor output) is often easier before integrating with displays.  

---

## References / Links

* [How To Mechatronics: Ultrasonic Sensor HC-SR04](https://howtomechatronics.com/tutorials/arduino/ultrasonic-sensor-hc-sr04/)  
* [YouTube Tutorial on Ultrasonic + LCD](https://www.youtube.com/watch?v=gq89v4E3FEk)  
* [Tech-Trends GitHub Example](https://github.com/Tech-Trends-Shameer/Arduino-Projects/tree/main/Distance-Measurement-Using-Ultrasonic-Sensor-With-LCD-I2C)  

---

## Your Experience

* Set-up 1 was straightforward and worked reliably.  
* Set-up 2 was challenging; even with external sources, we were unable to get the LCD display output.  

---

**MADE BY:** Takshak, U2522673G
