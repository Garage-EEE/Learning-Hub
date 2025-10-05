# Learning Hub Fan (L298N + Arduino)

## Component Name
Fan

## Type / Category
Actuator

## Objective / Purpose
- Converts electrical energy into mechanical motion.
- Produces airflow for cooling, ventilation, or simulation purposes.

---

## Getting Started / Setup Instructions
1. Connect Arduino / ESP32 to computer via USB.
2. Wire L298N motor driver and fan as follows:

### Pinout / Connections

| Component / Pin | Connection                  |
|-----------------|----------------------------|
| enA             | Arduino Pin 9 (PWM)        |
| in1             | Arduino Pin 8              |
| in2             | Arduino Pin 7              |
| Fan motor       | L298N OUT1 & OUT2          |
| L298N VCC       | External 12V power supply  |
| GND             | Common GND for Arduino, L298N, Power Supply |

3. Use an external power supply for the fan.
4. Upload the sample code provided.

---

## Notes on Setup
- Arduino cannot power the fan directly; always use an external supply.
- PWM (analogWrite) on enA allows fan speed control.
- Ensure common GND between Arduino, L298N, and power supply.

---

## Expected Outcomes / Functions
- Fan rotates in clockwise and counterclockwise directions.
- Smooth acceleration and deceleration of fan speed using PWM.
- Provides airflow suitable for cooling or simulation.

---

## Problems Faced & Solutions
| S.N | Problem                                 | Solution                                    |
| --- | -------------------------------------- | ------------------------------------------ |
| 1   | Code not working / incorrect pin setup | Connected external power supply             |
| 2   | Fan direction control not working       | Swapped in1 and in2 pins                    |
| 3   | Fan rotates weakly / low speed          | Used higher current external power supply  |

---

## Key Learnings / Notes
- Using L298N driver to control actuators like fans.
- PWM provides fine control over speed.
- Common ground is critical for reliable operation.

---

## References / Links
- [L298N DC Motor Driver Tutorial](https://lastminuteengineers.com/l298n-dc-stepper-driver-arduino-tutorial/)

---

## Photos / Screenshots
- Include images of setup and fan operation here.

---

## Your Experience
- Interesting hands-on experience with motor control.
- Learned practical insights into actuator control and power management.

---

## MADE BY
- Shin Donghun, U2523377E  
- Hu Shengjie, U2523597F
