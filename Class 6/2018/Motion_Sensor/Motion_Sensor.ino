/*
  Electronics Lesson 6: Motion Sensor
  ------------------------------------------------
  
  Description
  -----------
  Lights up LED within a certain distance
*/

int trigger_pin = 2;

int echo_pin = 3;

int red_led = 9; 

int time;

int distance; 


void setup ( ) {
  // Initialize serial communication:
  Serial.begin (9600); 

  // This pin will send an ultrasonic wave
  pinMode (trigger_pin, OUTPUT); 

  // This pin will listen for the ultrasonic wave
  pinMode (echo_pin, INPUT);

  // Set this pin to output electricity
  pinMode (red_led, OUTPUT);
}

void loop ( ) {
  // Send ultrasonic wave for 10 microseconds
  digitalWrite (trigger_pin, HIGH);

  delayMicroseconds (10);

  digitalWrite (trigger_pin, LOW);

  // Returns the length of time that it took for the echo pin to go from LOW to HIGH
  time = pulseIn (echo_pin, HIGH);

  // Convert the time to distancce
  distance = (time * 0.034) / 2;

  if (distance <= 10)  {  
    //Intruder!!!
    digitalWrite (red_led, HIGH);

    delay (500);
  } else {
    digitalWrite (red_led, LOW);

    delay (500);        
  } 
}
