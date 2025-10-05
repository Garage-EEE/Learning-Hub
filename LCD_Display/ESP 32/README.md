# Learning Hub LCD Module

## Component Name
LCD Module

## Type / Category
Display

## Objective / Purpose
Display static text on a 16x2 I²C LCD using ESP32-S3.

---

## Getting Started / Setup Instructions

### Pinout / Connections

| ESP32-S3 DevKitC-1 | LCD Module (I²C) |
|---------------------|------------------|
| GND                 | GND              |
| VIN (5V)            | VCC              |
| GPIO47              | SDA              |
| GPIO48              | SCL              |

**Hardware Required**

* ESP32-S3 DevKitC-1 Board  
* 16x2 I²C LCD Module  
* Jumper wires  

---

## Required Libraries
* [LiquidCrystal_I2C](https://github.com/marcoschwartz/LiquidCrystal_I2C/archive/master.zip)  
  - After downloading:
    1. Unzip folder → rename `LiquidCrystal_I2C-master` to `LiquidCrystal_I2C`
    2. Move folder into Arduino IDE `libraries` directory
    3. Restart Arduino IDE  
* Alternatively: [LiquidCrystal_PCF8574](https://github.com/mathertel/LiquidCrystal_PCF8574)  

---

## Notes on Setup
* Always scan for your LCD’s I²C address first (common addresses: `0x27` or `0x3F`).  
* Use `Wire.begin(47, 48)` to define custom SDA and SCL pins on ESP32-S3.  
* Initialize the LCD as `lcd.begin(16, 2, Wire)` to match a 16x2 screen.  

---

## Expected Outcomes / Functions
* LCD displays static text:
  Hello, ESP32-S3!
  I2C LCD Working!
* Displays can be updated to show sensor readings or system messages.
---

## Problems Faced & Solutions

| S/N | Problem                                                                 | Solution                                                                 |
|-----|-------------------------------------------------------------------------|---------------------------------------------------------------------------|
| 1   | Different ESP32 models have different pinouts → confusion               | Refer to ESP32 pinout guide and update `Wire.begin(SDA, SCL)` accordingly |
| 2   | No text appears after uploading code                                     | Press **RESET** button once after upload                                  |

---

## Key Learnings / Notes
* You can define custom I²C pins with `Wire.begin(SDA, SCL)`.  
* LCD modules vary in design; check your module and adjust connections.  
* Always run an I²C scanner to confirm the address before initializing the LCD.

---

## References / Links
* [Random Nerd Tutorials: I2C LCD with ESP32](https://randomnerdtutorials.com/esp32-esp8266-i2c-lcd-arduino-ide/)  
* [ESP32-S3 DevKitC-1 Documentation](https://docs.espressif.com/projects/esp-dev-kits/en/latest/esp32s3/esp32-s3-devkitc-1/user_guide_v1.0.html)  

---

## Photos / Screenshots
*(Insert here if available)*

---

## Author
Made by **Lim Yong Sheng (U2423056J)**

