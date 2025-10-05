# Learning Hub RFID

## Component Name

RFID

## Type / Category

Sensor

## Objective / Purpose

RFID module enables contactless identification and authentication by reading data stored on RFID tags or cards.

---

## Getting Started / Setup Instructions

### Pinout / Connections

**Arduino / ESP32**

| Component | Pin    |
| --------- | ------ |
| VCC       | 3.3V   |
| GND       | GND    |
| RST       | Pin 9  |
| MISO      | Pin 12 |
| MOSI      | Pin 11 |
| SCK       | Pin 13 |
| SDA       | Pin 10 |

**Hardware Required**

* Arduino Board
* RFID-RC522 Module
* Smart Tag

---

## Required Libraries

* **MFRC522 Library**
* **SPI Library**

---

## Notes on Setup

* Ensure that all pins are connected correctly.
* If unable to read, check wiring connections or try a different laptop.

---

## Expected Outcomes / Functions

* RFID tag UID can be read when placed on the reader.
* The code can identify tags and use them for authentication (e.g., access systems, smart locks).

---

## Problems Faced & Solutions

| S.N | Problem                            | Solution                                                     |
| --- | ---------------------------------- | ------------------------------------------------------------ |
| 1   | Laptop port not working            | Switched to another laptop and successfully read RFID tags.  |
| 2   | Wrong RC522 wiring to Arduino pins | Verified with wiring diagram and reconnected pins correctly. |

---

## Key Learnings / Notes

* Arduino IDE may sometimes fail to detect ports; switching devices can help.
* RFID uses **electromagnetic waves** to transmit data over short distances.
* RFID tag coils capture EM waves, generating enough power to send data back.
* RFID tags contain **1 KB memory**, editable in sectors and blocks.
* Each tag has a unique **UID** (used in code for identification).
* Only **48 bytes per sector** are editable. The 3rd block in each sector stores **access bits** and must not be overwritten.
* **Block#0 of Sector#0** (manufacturer block) must never be overwritten as it stores permanent tag info.
* Default security key = `0xFF`. For used cards, the correct key is needed to access memory.

---

## References / Links

* [MFRC522 Datasheet](https://www.nxp.com/docs/en/data-sheet/MFRC522.pdf)
* [Last Minute Engineers Tutorial](https://lastminuteengineers.com/how-rfid-works-rc522-arduino-tutorial/)

---

## Steps to Use

1. **Get the UID** of each card and fob:

   * Use the example code (`DumpInfo`) from the MFRC522 library to display UID.
   * Example UIDs captured:

     * Blue Fob UID: `7C B4 03 49`
     * Card UID: `D3 44 6C 16`

2. **Integrate the UID into your project code**:

   * Use UIDs for identification.
   * Grant or deny access in applications such as smart locks.

---

## Team Experience

* **Juan**: Learning new terms and functions for RFID tags was challenging at first.
* **Khin**: Enjoyed understanding how RFID technology works and learning a new Arduino module.
* **EnHui**: Initially confused by the code but managed to break it down line by line to understand functions.

---

**Made by: Khin, Juan, and EnHui**

