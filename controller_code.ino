#include "Keyboard.h"

void setup() {
  
Keyboard.begin();

//Joystick and button connections
pinMode(2, INPUT_PULLUP); //Joystick Left Switch
pinMode(3, INPUT_PULLUP); //Joystick Right Switch
pinMode(4, INPUT_PULLUP); //Joystick Up Switch
pinMode(5, INPUT_PULLUP); //Joystick Down Switch
pinMode(6, INPUT_PULLUP); //Y Button
pinMode(7, INPUT_PULLUP); //B Button
pinMode(8, INPUT_PULLUP); //X Button
pinMode(9, INPUT_PULLUP); //A Button
pinMode(10, INPUT_PULLUP); //Shoulder Left Button
pinMode(11, INPUT_PULLUP); //Shoulder Right Button
pinMode(12, INPUT_PULLUP); //Start Button
pinMode(13, INPUT_PULLUP); //Select Button
}

void loop() {
  
// Check the switches:
int buttonState2 = digitalRead(2);
int buttonState3 = digitalRead(3);
int buttonState4 = digitalRead(4);
int buttonState5 = digitalRead(5);
int buttonState6 = digitalRead(6);
int buttonState7 = digitalRead(7);
int buttonState8 = digitalRead(8);
int buttonState9 = digitalRead(9);
int buttonState10 = digitalRead(10);
int buttonState11 = digitalRead(11);
int buttonState12 = digitalRead(12);
int buttonState13 = digitalRead(13);

// Joystick Left = Arrow Left Key
if (buttonState2 == LOW) {
Keyboard.press(216);
}
else {
Keyboard.release(216);
}

// Joystick Right = Arrow Right Key
if (buttonState3 == LOW) {
Keyboard.press(215);
}
else{
Keyboard.release(215);
}

// Joystick Up Switch = Arrow Up Key
if(buttonState4 == LOW) {
Keyboard.press(218);
}
else{
Keyboard.release(218);
}
// Joystick Down Switch = Arrow Down Key
if(buttonState5 == LOW) {
Keyboard.press(217);
}
else{
Keyboard.release(217);
}

// Y Button = y Key
if(buttonState6 == LOW) {
Keyboard.press(121);
}
else{
Keyboard.release(121);
}

// B Button = b Key
if(buttonState7 == LOW) {
Keyboard.press(98);
}
else{
Keyboard.release(98);
}

// X Button = x Key
if(buttonState8 == LOW) {
Keyboard.press(120);
}
else{
Keyboard.release(120);
}

// A Button = a Key
if(buttonState9 == LOW) {
Keyboard.press(97);
}
else{
Keyboard.release(97);
}

// Shoulder Left Button = [ key
if(buttonState10 == LOW) {
Keyboard.press(91);
}
else{
Keyboard.release(91);
}

// Shoulder Right Button = ] key
if(buttonState11 == LOW) {
Keyboard.press(93);
}
else{
Keyboard.release(93);
}

// Start Button = ( key
if(buttonState12 == LOW) {
Keyboard.press(123);
}
else{
Keyboard.release(123);
}

// Select Button = ) key
if(buttonState13 == LOW) {
Keyboard.press(125);
}
else{
Keyboard.release(125);
}
}
