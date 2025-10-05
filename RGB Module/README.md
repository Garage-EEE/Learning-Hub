# Learning Hub RGB Module

## Component Name
RGB Module

## Type / Category
Actuator / Display

## Objective / Purpose
- To have a working RGB LED displaying different colors in a loop.

---

## Pinout / Connections

| Component | Pin / Connection |
| --- | --- |
| Red (R) | Pin 5 |
| Green (G) | Pin 6 |
| Blue (B) | Pin 7 |
| GND | Ground |
| Resistors | 220 Ω (in series with each LED pin) |
| Arduino | Arduino Uno |
| Jumper Wires | Grey → R, Yellow → G, Purple → B |
| Breadboard | For wiring |

---

## Required Libraries
None

---

## Notes on Setup
- There is no difference between “Power Ground” and “Ground”.  
- Disconnect components before reconfiguring.  
- Always upload code before running.

---

## Expected Outcomes / Functions
- The RGB LED will light up in different colors sequentially: Red → Green → Blue → Yellow → Cyan → Magenta → White.  
- LED cycles continuously in the loop.

---

## Problems Faced & Solutions

| S.N | Problem | Solution |
| --- | --- | --- |
| 1 | Resistors placed incorrectly (parallel instead of series) | Connect resistors properly across breadboard in series with each LED pin to avoid short circuits. |

---

## Key Learnings / Notes
- Correct placement of resistors is critical to prevent LED burnout or short circuits.  
- Combining primary colors creates secondary colors (Red+Green=Yellow, Green+Blue=Cyan, Red+Blue=Magenta, All=White).  
- Experimentation and persistence help troubleshoot electronics issues.

---

## References / Links
- [YouTube Tutorial](https://www.youtube.com/watch?v=iFPfg-x1qX8)  
- [Arduino Project Hub: Interfacing RGB LED](https://projecthub.arduino.cc/semsemharaz/interfacing-rgb-led-with-arduino-b59902)  

---

## Photos / Screenshots
- Initial incorrect setup: Resistors in parallel.
- 
- Corrected setup: RGB LED lights sequentially.  

---

## Your Experience
We found it challenging initially and asked for help, but online resources guided us. Successfully lighting the LED gave a strong sense of accomplishment.

---

**MADE BY:**  
Chew Qi Hern, U2521621K  
Akashpal Singh Pannu, U2420789A  
Balamurugan Kirthanaika, U2522494L
