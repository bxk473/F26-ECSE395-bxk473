#include <Arduino.h>

// (bxk473) assign pins A0 and A1 to match the motor pins as shown in the wiring diagram 
const int MOTOR_B_1A = A1; 
const int MOTOR_B_1B = A0; 


void setup() {

    // (bxk473) I modified the analogWrite, delay, and swapped it all then reset the code to default
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT);  

  analogWrite(MOTOR_B_1A, 255);
  analogWrite(MOTOR_B_1B, 0);

  delay(10000);

  analogWrite(MOTOR_B_1A, 0);  
  analogWrite(MOTOR_B_1B, 0);

}

void loop() {

}

// Note:
// - Please modify the `analogWrite()`, swap the `analogWrite()`, and modify the `delay()`.
// - You don't have to put anything in the loop.
//      - If you would like to run the code again, please press the `RESET BUTTON` on your ESP32.
