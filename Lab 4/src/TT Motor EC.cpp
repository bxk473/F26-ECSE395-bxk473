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

// (bxk473) The loop keeps the motor alternating between continuously increasing and then decreasing its speed 
void loop() {
  // --- SECTION 1: Increase speed in the clockwise direction ---
  Serial.println("Increasing speed clockwise for 5s\n");

    // Make a for loop to smoothly increase the speed of the motor in the clockwise direction
  for (int speed = 0; speed <= 255; speed++) {
    analogWrite(MOTOR_B_1A, speed);
    analogWrite(MOTOR_B_1B, 0);
    delay(20); // (bxk473) Wait for 20 milliseconds before increasing the speed each cycle to make the transition smooth 
  }

    // --- SECTION 2: Decrease speed in the clockwise direction ---
    Serial.println("Decreasing speed clockwise for 5s\n");

    // Make a for loop to smoothly decrease the speed of the motor in the clockwise direction
  for (int speed = 255; speed >= 0; speed--) {
    analogWrite(MOTOR_B_1A, speed);
    analogWrite(MOTOR_B_1B, 0);
    delay(20); // (bxk473) Wait for 20 milliseconds before decreasing the speed each cycle to make the transition smooth 
  }

  // --- SECTION 3: Increase speed in the counterclockwise direction ---
  Serial.println("Increasing speed counterclockwise for 5s\n");

    // Make a for loop to smoothly increase the speed of the motor in the counterclockwise direction
    for (int speed = 0; speed <= 255; speed++) {
    analogWrite(MOTOR_B_1A, 0);
    analogWrite(MOTOR_B_1B, speed);
    delay(20); // (bxk473) Wait for 20 milliseconds before increasing the speed each cycle to make the transition smooth
    }

    // --- SECTION 4: Decrease speed in the counterclockwise direction ---
    Serial.println("Decreasing speed counterclockwise for 5s\n");
    // Make a for loop to smoothly decrease the speed of the motor in the counterclockwise direction
    for (int speed = 255; speed >= 0; speed--) {
      analogWrite(MOTOR_B_1A, 0);
      analogWrite(MOTOR_B_1B, speed);
      delay(20); // (bxk473) Wait for 20 milliseconds before decreasing the speed each cycle to make the transition smooth
    }

    // --- SECTION 5: Stop the motor for 2s ---
    Serial.println("Pausing for 2s\n");
    delay(2000); // (bxk473) Keep the motor stopped for 2 seconds before repeating the loop again
  }


// Note:
// - Please uncomment the necessary lines and fill in the blank to complete the assignment.

