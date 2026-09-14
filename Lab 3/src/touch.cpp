#include <Arduino.h>

// (bxk473) Set the input pin to A0 on the ESP32
const int sensorPin = A0;

// (bxk473) Initialize the LED on pin 13 of the ESP32 as "LED_PIN"
#define LED_PIN 13



void setup() {
  Serial.begin(115200); // (bxk473)Set the baud rate for serial communication
  pinMode(LED_PIN, OUTPUT); // (bxk473) Set the LED pin as an output so we an turn it on and off
}

void loop() {

    // Check if the touch sensor is detecting anything; if it is, print "Touch Detected!" to the serial monitor. 
    if(analogRead(sensorPin) > 0) {
      Serial.println("Touch Detected!");
        digitalWrite(LED_PIN, HIGH); // (bxk473) Turn on the LED when touch is detected
    } else {
      Serial.println("No Touch Detected."); // If no signal is detected, print "No Touch Detected." to the serial monitor.
      digitalWrite(LED_PIN, LOW); // (bxk473) Turn off the LED when no touch is detected
    }

    // (bxk473) Add a delay of 250 milliseconds before the next reading to avoid flooding the serial monitor with data.
    delay(250); 
}


