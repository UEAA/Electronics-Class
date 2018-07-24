/*
  Electronics Lesson 5: Train Crossing
  ------------------------------------------------
  
  Description
  -----------
  Controls servo using the potentiometer. Lights up green LED when more than 90 degrees and lights red LED hwne less than 90 degrees.
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int potpin = 0;  // analog pin used to connect the potentiometer
int val;    // variable to read the value from the analog pin

const int green =  7;      // the number of the LED pin for green LED
const int red =  6;        // the number of the LED pin for red LED

void setup() {
  // initialize the LED pin as an output:
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);

  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  val = analogRead(potpin);            // reads the value of the potentiometer (value between 0 and 1023)
  val = map(val, 0, 1023, 0, 180);     // scale it to use it with the servo (value between 0 and 180)
  myservo.write(val);                  // sets the servo position according to the scaled value

  if (val > 90) {                      // 
    digitalWrite(green, HIGH);
    digitalWrite(red, LOW);
  } else {
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
  }
  
  delay(15);                           // waits for the servo to get there
}

