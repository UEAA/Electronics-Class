/*
  Electronics Lesson 4: Doorbell
  ------------------------------------------------
  
  Description
  -----------
  Lights up led and buzzer makes sound upon pressing the button 
*/

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  8;      // the number of the LED pin
const int buzzerPin = 9;

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 3000);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }
}
