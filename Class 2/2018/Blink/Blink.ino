/*
  Electronics Lesson 2: Blink
  ---------------------------
  
  Description
  -----------
  Blinks LED
*/


// the setup function runs once when you press reset or power the board
void setup() {
  // intialize led to pin 8
  int led = 8;

  // initialize digital pin 8 as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
