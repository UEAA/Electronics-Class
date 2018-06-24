/*
  Electronics Lesson 1: Light
  ---------------------------
  
  Description
  -----------
  Turns on an LED
*/

// initialize the variable led to the number 8
// put a jumper wire in digital pin 8 on the microcontroller
int led = 8;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin to output electricity
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on by outputting electricity (HIGH is the voltage level)
}
