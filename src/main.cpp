#include <Arduino.h>
#include "USB.h"
#include "USBHIDKeyboard.h"
USBHIDKeyboard Keyboard;

const int buttonPin = 0;        // input pin for pushbutton
int previousButtonState = HIGH; // for checking the state of a pushButton
int counter = 0;                // button push counter

void setup()
{
  Serial.begin(115200);

  pinMode(buttonPin, INPUT_PULLUP);

  Keyboard.begin();
  USB.begin();
  delay(2000);
  Serial.println("Ready");
}

void loop()
{
  int buttonState = digitalRead(buttonPin);
  if ((buttonState != previousButtonState) && (buttonState == LOW))
  {
    counter++;
    Keyboard.print("You pressed the button ");
    Keyboard.print(counter);
    Keyboard.println(" times.");
    Serial.println("Button pressed!");
  }
  // save the current button state for comparison next time:
  previousButtonState = buttonState;
}
// #include "USB.h"
// #include "USBHIDKeyboard.h"
// USBHIDKeyboard Keyboard;

// void setup()
// {
//   // open the serial port:
//   Serial.begin(115200);
//   // initialize control over the keyboard:
//   Keyboard.begin();
//   USB.begin();
// }

// void loop()
// {
//   // check for incoming serial data:
//   if (Serial.available() > 0)
//   {
//     // read incoming serial data:
//     char inChar = Serial.read();
//     // Type the next ASCII value from what you received:
//     Keyboard.write(inChar + 1);
//   }
// }