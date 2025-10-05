# Learning Hub Joystick + Servo

## Component Name
Joystick + Servo

## Type / Category
Sensor & Actuator

## Objective / Purpose
- **Joystick:** Provides input for controlling movement or actions of digital objects.
- **Servo:** Precisely controls the angular or linear position of a machine or object.

---

## Getting Started / Setup Instructions

### Pinout / Connections

**Joystick Module**
| Pin | Arduino Pin |
| --- | ----------- |
| VCC | 5V          |
| GND | GND         |
| VRX | A0          |
| VRY | A1          |
| SW  | D7 (optional)|

**Servo Motor**
| Pin      | Arduino / Power |
| -------- | --------------- |
| VCC (Red)   | External 5V Power Supply |
| GND (Black) | Common GND with Arduino  |
| Signal      | D9 (Arduino)             |

---

### Required Libraries
- `<Servo.h>`

---

### Notes on Setup
- Check if your servo is a **180°** or **360°** type.
- 360° servos rotate continuously; 180° servos allow angle positioning.
- Use a **deadzone** in code to prevent jitter around the joystick center.
- Ensure the servo and Arduino share a common ground.

---

## Sample Code
- Joystick reading only: reads X, Y axes and button state.
- Servo movement only: rotates between 0°, 90°, 180°.
- Joystick + Servo: moves servo based on joystick X-axis.
- Joystick + Servo with deadzone: servo stops at last position when joystick is near center.

*(Refer to the Code section for full examples.)*

---

## Expected Outcomes / Functions
- Joystick can control the direction and degree of servo movement.
- Servo responds smoothly to joystick movement.

---

## Problems Faced & Solutions
| S.N | Problem                                       | Solution |
| --- | --------------------------------------------- | -------- |
| 1   | Servo rotates continuously instead of angles  | Use 180° servo or adjust code to account for angle |

---

## Key Learnings / Notes
- Difference between 180° and 360° servo motors due to internal potentiometer.
- Deadzone coding is useful for precise control.
- Shared GND between Arduino and servo is essential.

---

## References / Links
- [Control Servo using Joystick (Arduino Project Hub)](https://projecthub.arduino.cc/webotricks/how-to-control-servo-motor-using-analog-joystick-and-arduino-edf9f6)
- [Using Joystick to Control Micro Servo](https://projecthub.arduino.cc/robot-maker/using-joystick-to-control-a-micro-servo-a3ef0d)

---

## Photos / Screenshots
- Include images of your joystick and servo connections here.

---

## Your Experience
Experimenting with these components was very interesting and helped understand the practical use of servos and input devices like joysticks.

---

## MADE BY
- Shan Lifei [U2420339A]  
- Nadimuthu Balu Shri Rithi [U2421673H]  
- Wang Ziyan [U2522055L]
