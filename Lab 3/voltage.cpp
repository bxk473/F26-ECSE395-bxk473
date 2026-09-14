#include <Arduino.h>

// function prototype
int voltage(float analogvalue);

// Put your potentiometer pin assignment here
const int sensorPin = A0;

void setup() {
    Serial.begin(115200);
}

void loop() {
    // This is the line for printing in the serial
    int sensorValue = analogRead(sensorPin); // (bxk473) Made a variable to store the analogRead value for use in voltage calculation
    float sensorVoltage = (sensorValue * 3.3) / 4095; // (bxk473) Calculate the voltage based on the analogRead value, assuming a 3.3V reference and 12-bits
    Serial.println(sensorVoltage); // (bxk473) Print the calculated voltage to the serial monitor);
    delay(250); // (bxk473) Delay for 500 mil liseconds before the next reading
}

// function to calculate output voltage
int voltage(float analogvalue){
    int voltage;
    
    //analogRead(sensorPin); gives us 0-4095 values
    //use the formula (Analog value*Reference voltage) / (Sensor Resolution) to calculate the output voltage
    return voltage;
}

