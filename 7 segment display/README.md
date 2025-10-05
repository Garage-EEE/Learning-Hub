# Learning Hub 7-Segment Display

## Component Name
7-Segment Display

## Type / Category
Display

## Objective / Purpose
- 4-digit display, can be used to display parameters within a 4-digit range for debugging purposes.

## Getting Started / Setup Instructions

### Pinout / Connections
| Component | Arduino / ESP32 Pin |
| --------- | ----------------- |
| Digit 1   | 2                 |
| Digit 2   | 3                 |
| Digit 3   | 4                 |
| Digit 4   | 5                 |
| Segment a | 6                 |
| Segment b | 7                 |
| Segment c | 8                 |
| Segment d | 9                 |
| Segment e | 10                |
| Segment f | 11                |
| Segment g | 12                |
| Segment dp| 13                |

**Other Components**
- 8 × 330Ω resistors
- Male to male jumper wires
- Breadboard
- Arduino Uno

---

### Required Libraries
- SevSeg Library: [https://github.com/DeanIsMe/SevSeg](https://github.com/DeanIsMe/SevSeg)

---

### Notes on Setup
- Use `sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments)` to initialize.
- Adjust `resistorsOnSegments` based on whether resistors are on digits or segments.
- Ensure wiring is correct to avoid short circuits or display errors.

---

## Expected Outcomes / Functions
- Converts electrical signals into human-readable numeric output (only four digits).
- `sevseg.setNumber(<4-digit number>, <position of decimal place>)`
  - First parameter: number to display
  - Second parameter: decimal position
    - 0: no decimal place
    - 1: 1 decimal place
    - 2: 2 decimal places, etc.

---

## Problems Faced & Solutions
| S.N | Problem                                   | Solution |
| --- | ----------------------------------------- | -------- |
| 1   | Display showed `8888`                     | Flip component on breadboard; or change `COMMON_CATHODE` to `COMMON_ANODE` in code |
| 2   | Wrong wire connections / short circuits  | Recheck connections and resistors placement |

---

## Key Learnings / Notes
- Datasheet used: [Sample 4-Digit 7-Segment Display Datasheet](https://handsontec.com/dataspecs/display/0.56in%204-Digit+DP%207%20Seg%20Display%20Module.pdf)
- Datasheets provide essential information: pinouts, internal circuit diagrams, usage instructions.
- Learning how to troubleshoot wiring, verify component datasheets, and use Arduino libraries effectively.

---

## References / Links
- [Using a 4 Digit & 7 Segment Display, With Arduino](https://www.instructables.com/Using-a-4-digit-7-segment-display-with-arduino/)
- [SH5461AS Datasheet PDF](https://www.datasheetcafe.com/sh5461as-datasheet-pdf/)
- [Tinkercad 7-Segment 4-Digit LED Display](https://www.tinkercad.com/things/7D2TtjMqOEK-7-segment-4-digit-led-display)

---

## Photos / Screenshots
- Include pictures of your wiring setup and working display here.

---

## Your Experience
I think it was a great experience practicing with Arduino and learning new components. I also learned how to troubleshoot issues and gather knowledge from helpful websites.  

---

## MADE BY
- Alan, Matric Number
