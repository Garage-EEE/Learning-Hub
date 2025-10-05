# Learning Hub Button Matrix (4x4 Keypad)

## Component Name
Button Matrix (4x4 Keypad)

## Type / Category
Electromechanical Digital Input Device [Switch]

## Objective / Purpose
- The keypad is used as an input device to read the key pressed by the user.
- Can be used for entering passwords, controlling games, or other input-based projects.

---

## Basics
- **Columns:** Labeled C4 to C1 (left to right)  
- **Rows:** Labeled R1 to R4 (top to bottom)  
- Each button press corresponds to the intersection of a row and a column.

---

## Getting Started / Setup Instructions
1. Connect Arduino UNO to your computer using USB.
2. Connect the 4x4 keypad to Arduino UNO as per pinout below.
3. Install `Keypad` library by Mark Stanley and Alexander Brevig in Arduino IDE:  
   - Sketch > Include Library > Manage Libraries > Search “Keypad” > Install
4. Upload the sample code provided.
5. Open Serial Monitor to see the pressed keys.

---

## Pinout / Connections

| Arduino Pin | Keypad Pin |
| ----------- | ---------- |
| 9           | C4         |
| 8           | C3         |
| 7           | C2         |
| 6           | C1         |
| 5           | R4         |
| 4           | R3         |
| 3           | R2         |
| 2           | R1         |

---

## Required Libraries
- `<Keypad.h>` — handles keypad pin scanning and key detection.

---

## Notes on Setup
- Ensure library is correctly installed in Arduino IDE.
- Use correct pin mapping in your code.
- Make sure no pins are loose.

---

## Expected Outcomes / Functions
- When a key is pressed, Serial Monitor displays the corresponding character.
- If no key is pressed, nothing is displayed.

---

## Problems Faced & Solutions
| S.N | Problem                                           | Solution                                              |
| --- | ------------------------------------------------- | ---------------------------------------------------- |
| 1   | Code errors (e.g., `Keypad.h` not recognized)    | Ensure correct capitalization and library installed  |
| 2   | Upload errors (exit status 1)                     | Check board and port selection, restart IDE/Arduino  |

---

## Key Learnings / Notes
- Understand row/column layout and pin connections.
- Use `Keypad` library to create a virtual copy of the keypad in code.
- Key steps in code:
  1. Declare keypad dimensions
  2. Map keys in 2D array
  3. Declare row and column pins
  4. Initialize keypad object
  5. Setup Serial communication
  6. Use `.getKey()` to read pressed keys

---

## References / Links
- [Keypad Library Documentation](https://playground.arduino.cc/Code/Keypad/)
- [4x4 Keypad Arduino Tutorial](https://www.instructables.com/4x4-Matrix-Keypad-With-Arduino/)

---

## Photos / Screenshots
- Include wiring and setup images here.

---

## Your Experience
- Reinforced Arduino IDE skills (board selection, Serial Monitor use).
- Learned human-input device integration.
- Fun and practical hands-on experience with digital inputs.

---

## MADE BY
- Leong Zi Jun - U2420030C  
- Pham Ngoc Quang - U2520794G  
- Anand Narmadha - U2423783J
