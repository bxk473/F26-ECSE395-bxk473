#include <Arduino.h>
// This is required in PlatformIO but hidden in the standard Arduino IDE.

#define LED_PIN 13

void setup() {
  pinMode(LED_PIN, OUTPUT);
  // Define baud rates as 115200, this is recommended in the instructions (bxk473)
  Serial.begin(115200); // Start the Serial connection
}

void loop() {
  // TODO: Define your text output
  Serial.println("Hello!"); // Print "Hello!" to the Serial Monitor (bxk473)


  // Flash "Hello" in morse code (.... . .-.. .-.. ---) on repeat (bxk473)

  // H
  digitalWrite(LED_PIN, HIGH); // Turn the LED on (bxk473)
  delay(500); // Set the delay to half a second to represent a "dot" in morse code (bxk473)
  digitalWrite(LED_PIN, LOW); // Turn the LED off (bxk473)
  delay(500);
  digitalWrite(LED_PIN, HIGH);
  delay(500); 
  digitalWrite(LED_PIN, LOW); 
  delay(500); 
  digitalWrite(LED_PIN, HIGH); 
  delay(500); 
  digitalWrite(LED_PIN, LOW); 
  delay(500); 
  digitalWrite(LED_PIN, HIGH);
  delay(500); 
  digitalWrite(LED_PIN, LOW); 
  delay(1000); // Make it 1 full second to differentiate between letters (bkx473)

  // E
  digitalWrite(LED_PIN, HIGH);
  delay(500); 
  digitalWrite(LED_PIN, LOW); 
  delay(1000); // Make it 1 full second to differentiate between letters (bkx473)

  // L
  digitalWrite(LED_PIN, HIGH);
  delay(500); 
  digitalWrite(LED_PIN, LOW); 
  delay(500); 
  digitalWrite(LED_PIN, HIGH);
  delay(1000); 
  digitalWrite(LED_PIN, LOW); 
  delay(500); 
  digitalWrite(LED_PIN, HIGH);
  delay(500); 
  digitalWrite(LED_PIN, LOW); 
  delay(500); 
  digitalWrite(LED_PIN, HIGH);
  delay(500); 
  digitalWrite(LED_PIN, LOW); 
  delay(500); // Make it 1 full second to differentiate between letters (bkx473)

  // L
  digitalWrite(LED_PIN, HIGH);
  delay(500); 
  digitalWrite(LED_PIN, LOW); 
  delay(500); 
  digitalWrite(LED_PIN, HIGH);
  delay(1000); 
  digitalWrite(LED_PIN, LOW); 
  delay(500); 
  digitalWrite(LED_PIN, HIGH);
  delay(500); 
  digitalWrite(LED_PIN, LOW); 
  delay(500); 
  digitalWrite(LED_PIN, HIGH);
  delay(500); 
  digitalWrite(LED_PIN, LOW); 
  delay(1000); // Make it 1 full second to differentiate between letters (bkx473)

  // O
  digitalWrite(LED_PIN, HIGH);
  delay(1000); 
  digitalWrite(LED_PIN, LOW); 
  delay(500); 
  digitalWrite(LED_PIN, HIGH);
  delay(1000); 
  digitalWrite(LED_PIN, LOW); 
  delay(500); 
  digitalWrite(LED_PIN, HIGH);
  delay(1000); 
  digitalWrite(LED_PIN, LOW); 
  delay(1000); // Make it 1 full second to differentiate between letters (bkx473)

}
