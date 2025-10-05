# Learning Hub LCD Module

## Component Name
LCD Module

## Type / Category
Display

## Objective / Purpose
An LCD module is used to display characters or graphics, allowing users to view system outputs and information. 

---

## Getting Started / Setup Instructions

### Pinout / Connections

**Arduino**

| Component | Pin         |
| --------- | ----------- |
| VCC       | 5V          |
| GND       | GND         |
| SDA       | A4 (UNO)    |
| SCL       | A5 (UNO)    |

**Hardware Required**

* Arduino Board  
* LCD with I2C Backpack (recommended)  
* Jumper wires (male-to-female preferred)  

---

## Required Libraries
* **LiquidCrystal_I2C.h**  
* **Wire.h**  

---

## Notes on Setup
1. There are two types of LCDs. The one with an **I2C backpack** is recommended, as it requires only 4 wires and no breadboard.  
2. Use wires with male-female connectors so the LCD can connect directly to Arduino.  
3. Install **LiquidCrystal I2C (by Frank de Brabander)** in Arduino IDE.  
4. Always run an **I2C Scanner** first to confirm your module’s address.  

---

## Expected Outcomes / Functions
* LCD module can be successfully initialized with Arduino.  
* Text and numbers (e.g., “Hello NTU” or sensor readings) can be displayed.  
* Display content updates in real time to reflect system status or user input.  

---

## Problems Faced & Solutions

| S.N | Problem                                                   | Solution                                                                 |
| --- | --------------------------------------------------------- | ------------------------------------------------------------------------ |
| 1   | LCD doesn’t light at all                                  | Double-check your wiring connections.                                    |
| 2   | Backlight is on but no characters are displayed           | The I2C address is incorrect. Use the I2C scanner program to find it.    |
| 3   | LCD shows solid blocks but no characters                  | Adjust the potentiometer (contrast) and check initialization code.       |
| 4   | Arduino IDE shows COM port error (e.g., COM4 cannot open) | Go to **Tools → Port** in IDE and select another COM port (e.g., COM5).  |

---

## Key Learnings / Notes
* Learned the basics of **I2C communication** and interfacing LCDs with microcontrollers.  
* Understood the initialization process and how data is transferred to the display.  
* Practiced writing code to display text and sensor values.  
* Always run an I2C Scanner first to confirm the module’s address.  
* Keep wiring neat and labeled to avoid mistakes.  
* Create helper functions (e.g., `displayMessage()`) for cleaner and maintainable code.  

---

## References / Links
* ChatGPT-5 (for troubleshooting)  
* [Instructables Guide: Using PCF8574 Backpacks with LCDs](https://www.instructables.com/Using-PCF8574-Backpacks-With-LCDs-and-Arduino/?utm_source=chatgpt.com)  

---

## Team Experience
* *I enjoyed the process of integrating hardware and software to display what I want on the LCD.*  

---

**Made by: Zhu Chenming (U2522865G)**
