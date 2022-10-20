// Anschlüsse für die Motoren

const int motor11 = 9; // Motor 1, Pin 1
const int motor12 = 10; // Motor 1, Pin 2
const int motor21 = 11; // Motor 2, Pin 1
const int motor22 = 12; // Motor 2, Pin 2
const int motor31 = 8; // Motor 3, Pin 1
const int motor32 = 7; // Motor 3, Pin 2
const int motor41 = 6; // Motor 4, Pin 1
const int motor42 = 5; // Motor 4, Pin 2

void setup() {
  // put your setup code here, to run once:
  pinMode(motor11, OUTPUT);
  pinMode(motor12, OUTPUT);
  pinMode(motor21, OUTPUT);
  pinMode(motor22, OUTPUT);
  pinMode(motor31, OUTPUT);
  pinMode(motor32, OUTPUT);
  pinMode(motor41, OUTPUT);
  pinMode(motor42, OUTPUT);
  Serial.begin(9600);
}

void loop() {
    
  // Motor 1
  digitalWrite(motor11, HIGH);
  digitalWrite(motor12, LOW);
  // Motor 2
  digitalWrite(motor21, HIGH);
  digitalWrite(motor22, LOW);
  // Motor 3
  digitalWrite(motor31, HIGH);
  digitalWrite(motor32, LOW);
  // Motor 4
  digitalWrite(motor41, HIGH);
  digitalWrite(motor42, LOW);
  delay(1000);
  // Motor 1
  digitalWrite(motor11, LOW);
  digitalWrite(motor12, HIGH);
  // Motor 2
  digitalWrite(motor21, LOW);
  digitalWrite(motor22, HIGH);
  // Motor 3
  digitalWrite(motor31, LOW);
  digitalWrite(motor32, HIGH);
  // Motor 4
  digitalWrite(motor41, LOW);
  digitalWrite(motor42, HIGH);
  delay(1000);
}