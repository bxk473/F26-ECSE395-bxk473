# Lab 3: This is my third assignment working with the ESP32, where I will work on connecting actuators to the ESP32 controller. 
## Setup/Steps: 
- Laptop: Lenovo ThinkPad P16s Gen 2 (AMD) 
- OS: Windows 10 LTSC IoT
- IDE: I used visual studio code to modify all the C++ code necessary to drive the ESP32 and its accessories.
- I used platformIO to upload the code to the ESP32 microcontroller over a usb-c cable 
- I followed the instructions included in the github template, the videos for the lab, and the skeleton code to drive the actuators 





## TT Motor initial observations 
- Default behavior: The motor spins in one direction at a constant speed before stopping

1. Modify the analogWrite() value: 
- Modified the analogWrite(MOTOR_B1A) to 125 -> Motor did not spin anymore and instead made a high-pitched whining noise before stopping (Ran for the same amount of time as the default behavior)
- Modified the analogWrite(MOTOR_B1A) to 1000 -> Motor spun at same speed as default (Maybe max speed is 255 or motor needs more power to spin faster?)

2. Swap the analogWrite() value:
- Modified the analogWrite(MOTOR_B1A) TO 0 & analogWrite(MOTOR_B1B) to 255 -> Motor spun at the same speed as default but in the opposite direction

3. Modify the delay() value:
- Modified the delay() value from 5000 to 10000 -> Motor spun for twice as long as default 
