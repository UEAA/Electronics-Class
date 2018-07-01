int GREEN = 8;
int YELLOW = 9;
int RED = 10;

void setup() {
   pinMode(GREEN, OUTPUT);
   pinMode(YELLOW, OUTPUT);
   pinMode(RED, OUTPUT);
}


void loop() {
  digitalWrite(GREEN, HIGH);
  digitalWrite(YELLOW, LOW);   
  digitalWrite(RED, LOW);   
  delay(5000);

  digitalWrite(GREEN, LOW);
  digitalWrite(RED, LOW); 

  for (int i=0; i <= 10; i++) {
    digitalWrite(YELLOW, HIGH);   
    delay(200);
  
    digitalWrite(YELLOW, LOW);   
    delay(200);
  }

  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, LOW);   
  digitalWrite(RED, HIGH); 
  delay(3000);                 
}

