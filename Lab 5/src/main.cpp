
#include <Arduino.h>
#include <ESP32Servo.h>

// (bxk473) Define the analog pin for the potentiometer (i.e. where to read the value of the potentiometer from)
const int sensorPin = A1; 

 // (bxk473) Initialize a variable to store the pulse width value
int pulseWidth;


// Define the minimum and maximum pulse widths for the servo
const int minPulseWidth = 500; // 0.5 ms
const int maxPulseWidth = 2500; // 2.5 ms

// (bxk473) Define the Servo and assign its control pin to pin A0 on the ESP32 
Servo myServo;
const int servoPin = A0; //

// (bxk473) Setup serial output to the console for testing 
void setup() {
  // Serial output at standard Baud rate 
  Serial.begin(115200);

  // (bxk473) Print out a line to show that the code has been uploaded successfully 
  Serial.println("This is working!"); 

  // (bxk473) Attach the servo to the specified pin and set its pulse width range
  myServo.attach(servoPin, minPulseWidth, maxPulseWidth);

  // (bxk473) Set the PWM frequency for the servo to 50Hz as specified in the data sheet 
  myServo.setPeriodHertz(50);
}

// (bxk473) Main loop of code 
void loop() {
  // (bxk473) Print out the raw analog values from the Potentiometer for debugging purposes 
  Serial.println(analogRead(sensorPin));

  // (bxk473) Map the analog value to the pulse width range for the servo 
  pulseWidth = map((analogRead(sensorPin)), 0, 4095, minPulseWidth, maxPulseWidth); 
  // (bxk473) Write the pulse width to the servo to move it to the corresponding angle based on the potentiometer's position
  myServo.writeMicroseconds(pulseWidth); 

  delay (10); // (bxk473) Delay for a short period to allow the servo to move smoothly 
}

