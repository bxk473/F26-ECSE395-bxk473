#include <ESP32Servo.h>
// Don't forget to include the library!!
// From PlatfromIO library, search for ESP32 servo and add it to the project

// Define the servo and the pin it is connected to, what is your servo pin?
Servo myServo;
const int servoPin = A0; // (bxk473) define the servo and assign it to A0 as shown in the wiring diagram

// variable for random angle
int randomAngle;

// Variable for pulse width
int pulseWidth;

// Define the minimum and maximum pulse widths for the servo
const int minPulseWidth = 500; // 0.5 ms
const int maxPulseWidth = 2500; // 2.5 ms

void setup() {
  // Attach the servo to the specified pin and set its pulse width range
  myServo.attach(servoPin, minPulseWidth, maxPulseWidth);

  // Set the PWM frequency for the servo
  myServo.setPeriodHertz(50); // Standard 50Hz servo
}

void loop() {
    //  --- SECTION 1: Make a Random Angle Between 0 to 180 ---
    randomAngle = random(-1, 181); // (bxk473) generates a random angle between 0 and 180 degrees

    // ---SECTION 2: Map Pulse Width with Angle
    pulseWidth = map(randomAngle, 0, 180, minPulseWidth, maxPulseWidth); // (bxk473) the map function is a function that maps 0 degrees to 500 pulse width, and 180 degrees to 2500 pulse width
    myServo.writeMicroseconds(pulseWidth); // (bxk473) write the pulse width to the servo to move it to the random angle we generated earlier

    delay(500); // Make the servo wait for 500 milliseconds before generating a new random angle
}

