# Learning Hub Servo

## Component Name
Servo Motor

## Type / Category
Actuator / Motor

## Objective / Purpose
- Precisely control angular or linear position.
- Can rotate to specific angles for robotics, automation, and control projects.

---

## Getting Started / Setup Instructions

### Pinout / Connections
| Servo Pin      | Arduino / Power          |
| -------------- | ----------------------- |
| VCC (Red)      | External 5V Power Supply |
| GND (Black)    | Common GND with Arduino |
| Signal (Yellow)| Digital Pin 9 (Arduino) |

---

### Required Libraries
- `<Servo.h>`

---

### Notes on Setup
- Check if your servo is **180°** (angle control) or **360°** (continuous rotation).
- Ensure servo shares a common ground with Arduino.
- Use `servo.write(angle)` to move to specific angles.
- Avoid overloading servo; use an external power supply if needed.


---

## Expected Outcomes / Functions
- Servo rotates to commanded positions based on input angles.
- Movements can be smooth and precise when using delays or PWM signals.

---

## Problems Faced & Solutions
| S.N | Problem                           | Solution                                   |
| --- | --------------------------------- | ------------------------------------------|
| 1   | Servo rotates continuously        | Use 180° servo or adjust code for angle   |
| 2   | Servo jittering or unstable      | Add delay, use deadzone for input signals |

---

## Key Learnings / Notes
- 180° servos use internal potentiometer for angle feedback.
- 360° servos are continuous rotation and do not support absolute angle positioning.
- Deadzone coding is useful for precise joystick control.

---

## References / Links
- [Arduino Servo Tutorial](https://www.arduino.cc/en/Tutorial/LibraryExamples/Servo)
- [Servo Motor Basics](https://www.robotshop.com/community/forum/t/servo-motor-basics/24333)


---

## Your Experience
- Learned to control servo position precisely.
- Observed the difference between 180° and 360° servos.
- Useful for robotics and mechatronics applications.
