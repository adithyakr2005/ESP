#include <Arduino.h>

const int led = 4;
const int button = 5;

void setup() {
  // Initialize serial communication at 9600 baud
  Serial.begin(9600);
  
  // Set pin modes
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP); // Use INPUT_PULLUP for internal pull-up resistor
}

void loop() {
  int buttonState = digitalRead(button);
  
  if (buttonState == LOW) { // Button pressed (using INPUT_PULLUP)
    digitalWrite(led, HIGH);
    Serial.println("Button pressed!");
  } else {
    digitalWrite(led, LOW);
  }
  
  // Small delay to prevent flooding the Serial Monitor with messages
  delay(100);
}
