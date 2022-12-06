// Variables
// Bridge 1
const int motor1_1 = 6;
const int motor1_2 = 7;

const int motor2_1 = 8;
const int motor2_2 = 9;
// Brigde 2
const int motor3_1 = 10;
const int motor3_2 = 11;

const int motor4_1 = 12;
const int motor4_2 = 13;

void setup() {
    setPinModes();
}

void setPinModes() {
  pinMode(motor1_1, OUTPUT);
  pinMode(motor1_2, OUTPUT);
  pinMode(motor2_1, OUTPUT);
  pinMode(motor2_2, OUTPUT);
  pinMode(motor3_1, OUTPUT);
  pinMode(motor3_2, OUTPUT);
  pinMode(motor4_1, OUTPUT);
  pinMode(motor4_2, OUTPUT);
}

void MotorsForward() {
  digitalWrite(motor1_1, HIGH);
  digitalWrite(motor1_2, LOW);
  digitalWrite(motor2_1, HIGH);
  digitalWrite(motor2_2, LOW);
  digitalWrite(motor3_1, HIGH);
  digitalWrite(motor3_2, LOW);
  digitalWrite(motor4_1, HIGH);
  digitalWrite(motor4_2, LOW);
}

void MotorsBackward() {
  digitalWrite(motor1_1, LOW);
  digitalWrite(motor1_2, HIGH);
  digitalWrite(motor2_1, LOW);
  digitalWrite(motor2_2, HIGH);
  digitalWrite(motor3_1, LOW);
  digitalWrite(motor3_2, HIGH);
  digitalWrite(motor4_1, LOW);
  digitalWrite(motor4_2, HIGH);
}

void MotorsStop() {
  digitalWrite(motor1_1, LOW);
  digitalWrite(motor1_2, LOW);
  digitalWrite(motor2_1, LOW);
  digitalWrite(motor2_2, LOW);
  digitalWrite(motor3_1, LOW);
  digitalWrite(motor3_2, LOW);
  digitalWrite(motor4_1, LOW);
  digitalWrite(motor4_2, LOW);
}

void loop() {
    MotorsForward();
    delay(2000);
    MotorsStop();
    delay(2000);    
    MotorsBackward();
    delay(2000);
    MotorsStop();
    delay(2000);
}