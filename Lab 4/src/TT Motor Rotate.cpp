#include <Arduino.h>

// (bxk473) assign pins A0 and A1 to match the motor pins as shown in the wiring diagram
const int MOTOR_B_1A = A1;
const int MOTOR_B_1B = A0; 

void setup() {
  // (bxk473) Initialized the serial monitor to 115200 baud rate for debugging
  Serial.begin(115200);

  // (bxk473) Set motor pins as output 
  pinMode(MOTOR_B_1A, OUTPUT);
  pinMode(MOTOR_B_1B, OUTPUT);

  Serial.println("MOTOR TESTING BEGINNING:\n"); // Send a message to the serial monitor to indicate that the setup is complete
}

// (bxk473) The loop keep the motor alternating between clockwise and counterclockwise rotation with pauses in between.
void loop() {
  // --- SECTION 1: Clockwise (5s) ---
  Serial.println("Clockwise for 5s\n");
  
  // (bxk473) Make the motor spin in the clockwise direction (I wasn't sure what orientation is considered "clockwise" on the motor, but you can just swap the HIGH and LOW values to reverse the direction) 
  digitalWrite(MOTOR_B_1A, HIGH);
  digitalWrite(MOTOR_B_1B, LOW);
  
  delay(5000); // (bxk473) Keep the motor spinning for 5 seconds 

  // --- SECTION 2: Stop (2s) ---
  Serial.println("Pause for 2s\n");
  
  // (bxk473) Turn off the motor
  digitalWrite(MOTOR_B_1A, LOW);
  digitalWrite(MOTOR_B_1B, LOW);

  delay(2000); // (bxk473) Keep the motor stopped for 2 seconds

  // --- SECTION 3: Counterclockwise (5s) ---
  Serial.println("Counterclockwise for 5s\n");

  // (bxk473) Make the motor spin in the opposite direction (counterclockwise) for 5 seconds
  digitalWrite(MOTOR_B_1A, LOW);
  digitalWrite(MOTOR_B_1B, HIGH);

  delay(5000); // (bxk473) Keep the motor spinning for 5 seconds

  // --- SECTION 4: Stop (2s) ---
  Serial.println("Pause for 2s\n");
  
  // (bxk473) Turn off the motor
  digitalWrite(MOTOR_B_1A, LOW);
  digitalWrite(MOTOR_B_1B, LOW);

  delay(2000); // (bxk473) Keep the motor stopped for 2 seconds
}


// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment.




// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment.
