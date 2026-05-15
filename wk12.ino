/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/DigitalReadSerial/
*/

// digital pin 2 has a pushbutton attached to it. Give it a name:
// set pin numbers:
const int buttonPin = 2;
const int ledPin = 13;
// the number of the pushbutton pin
// the number of the LED pin
// variables will change:
int buttonState=0;
// variable for reading the pushbutton status
void setup() {

// initialize the LED pin as an output:
pinMode(ledPin, OUTPUT);
// initialize the pushbutton pin as an input:
pinMode(buttonPin, INPUT_PULLUP);
digitalWrite(buttonPin, HIGH);
}
void loop( ){
// read the state of the pushbutton value:
buttonState = digitalRead(buttonPin);
// check if the pushbutton is pressed.
// if it is, the buttonState is HIGH:
if (buttonState == HIGH) { // 注意這裡要用 == 比較
    digitalWrite(ledPin, HIGH);
  } 
  else {
    digitalWrite(ledPin, LOW);
  } // 這是 else 的結束

  Serial.println(buttonState); // 這行要在 loop 裡面
  delay(1); 
} // 整個 void loop 的結束符號應該在最後一行！

