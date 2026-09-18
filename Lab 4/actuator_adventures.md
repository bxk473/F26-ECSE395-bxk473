# Lab 3 (Bennett Knesl): This is my third assignment working with the ESP32, where I will work on connecting actuators to the ESP32 controller. 
## Contents: 
- You can find code for the TT Motor in:
- TT Motor.cpp, TT Motor Rotate.cpp, and TT Motor EC.cpp

- You can find code for the Servo Motor in:
- Servo Motor.cpp and Servo Motor Random.cpp

## Instructions: 
- To run the code, use platformIO to build the code, then upload it to the ESP32 via usb-c. 


## Setup/Steps: 
- Laptop: Lenovo ThinkPad P16s Gen 2 (AMD) 
- OS: Windows 10 LTSC IoT
- IDE: I used visual studio code to modify all the C++ code necessary to drive the ESP32 and its accessories.
- I used platformIO to upload the code to the ESP32 microcontroller over a usb-c cable 
- I followed the instructions included in the github template, the videos for the lab, and the skeleton code to drive the actuators 





## TT Motor Observations 
- Default Behavior: The motor spins in one direction at a constant speed before stopping

1. Modify the analogWrite() value: 
- Modified the analogWrite(MOTOR_B1A) to 125 -> Motor did not spin anymore and instead made a high-pitched whining noise before stopping (Ran for the same amount of time as the default behavior)
- Modified the analogWrite(MOTOR_B1A) to 1000 -> Motor spun at same speed as default (Maybe max speed is 255 or motor needs more power to spin faster?)

2. Swap the analogWrite() value:
- Modified the analogWrite(MOTOR_B1A) TO 0 & analogWrite(MOTOR_B1B) to 255 -> Motor spun at the same speed as default but in the opposite direction

3. Modify the delay() value:
- Modified the delay() value from 5000 to 10000 -> Motor spun for twice as long as default 


## Servo Motor Observations 
- Default Behavior: The servo motor rotates from 0 to 180 degrees and then from 180 to 0 degrees as expected

1. Modify the minPulseWidth
- Modified the minPulseWidth from 500 to 0 -> The servo rotates from 0 to 180 to 0 degrees, but there is a noticeable pause when it gets back to 0 degrees instead of being continuous as it was for the default values
- Modified the minPulseWidth from 500 to 2500 -> The servo resets to a fixed angle then stays there without rotating anymore

2. Modify the maxPulseWidth
- Modified the maxPulseWidth from 2500 to 5000 -> The servo rotates to 180 degrees as normal, but it paused while at 180 degrees for a bit before going back down to 0 degrees. It does not pause at 0 degrees.
- Modified the maxPulseWidth from 2500 to 500 -> The servo rotates to 0 degrees then stop rotating.

3. Modify setPeriodHertz
- Modified setPeriodHertz from 50 to 0 -> Failed to upload code
- Modified setPeriodHertz from 50 to 5 -> The servo repeatedly stops and starts while rotating
- Modified setPeriodHerz from 50 to 500 -> The rotates normally at first, but will occasionally jump from 180 to 0 and back to 180 much faster than default

4. Modify Rotation Range
- Modified rotations range from 180 degrees to 360 degrees -> The servo does not actually rotate more than 180 degrees. Instead, it just pauses at 180 degrees
- Modified rotations range from 180 degrees to 90 degrees -> The servo rotates as it did by default, but it only goes to 90 degrees at its maximum

5. Modify Delay
- Modified delay from 15 to 30 -> The servo rotates much more slowly than default 
- Modified delay from 15 to 0 -> The servo jitters a lot but does not complete the full 180 degrees


## Time Reporting and Reflection 
1. How long did it take you to complete this assignment?
- It took me around 1 hour and 30 minutes including lab time + time outside of the lab 
3. What level of difficulty would you associate with this assignment?
- Low 
4. If you associated medium/high difficulty with this assignment, what aspect did you
find the most difficult?
- N/A
5. How comfortable do you currently feel with the course content?
- I feel pretty good with course content at the moment. I've gotten the hang of ESP32 programming and operation 
6. Do you have any additional information or feedback you would like to share with
the instructors?
- No








