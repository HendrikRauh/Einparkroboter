const int trigPin1 = 2;
const int echoPin1 = 3;
const int trigPin2 = 4;
const int echoPin2 = 5;
const int trigPin3 = A0;
const int echoPin3 = A1;

long duration1;
int distance1;
long duration2;
int distance2;
long duration3;
int distance3;

void setup(){
    Serial.begin(9600);
        pinMode(trigPin1, OUTPUT);
        pinMode(echoPin1, INPUT);
        pinMode(trigPin2, OUTPUT);
        pinMode(echoPin2, INPUT);
        pinMode(trigPin3, OUTPUT);
        pinMode(echoPin3, INPUT);    
}

void loop() {
    digitalWrite(trigPin1, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin1, LOW);
    duration1 = pulseIn(echoPin1, HIGH);
    // ----------------------------------------
    digitalWrite(trigPin2, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin2, LOW);
    duration2= pulseIn(echoPin2, HIGH);
    // ----------------------------------------
    digitalWrite(trigPin3, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin3, LOW);
    duration3 = pulseIn(echoPin3, HIGH);
    // -----------------------------------------
    distance1 = duration1*0.034/2;
    distance2 = duration2*0.034/2;
    distance3 = duration3*0.034/2;
    Serial.print("Distanz1: ");
    Serial.println(distance1);
    Serial.print("Distanz2: ");
    Serial.println(distance2);
    Serial.print("Distanz3: ");
    Serial.println(distance3);
    delay(100);
    Serial.println("-----------------------");
}