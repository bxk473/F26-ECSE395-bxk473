# Lab 5: Actuators and Sensors 
## Assignment: 
- This is my last assignment working with the ESP32 microcontroller. I will assemble a custom design that integrates at least 1 sensor and at least 1 actuator.

## Setup: 
- Code will be uploaded over a USB-C cable using Visual Studio Code and PlatformIO.
- OS: Windows 10 IoT LTSC
- P16s Gen 2 AMD

## Contents: 
- All code for this lab will be contained within the "main.cpp" file


<img width="1013" height="536" alt="image" src="https://github.com/user-attachments/assets/412216a3-9f24-48b3-b29c-9c8f9387890e" />

For this circuit, the ESP-32 was connected to my laptop via USB-C. The potentiometer received power from the ESP-32's "3V" pin, and output its value to the A1 Pin on the ESP-32. The actuator received its power from a benchtop power supply (5V 0.75A) and its control signal from pin A0 on the ESP32. The ground pins for the power supply, actuator, and potentiometer were all connected to the ground pin on the ESP-32 controller. 
