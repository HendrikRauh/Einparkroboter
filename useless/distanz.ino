// kleiner Pin = Triger
// groß = Echo

const int trigPin = 2;
const int echoPin = 3;
long duration;
int distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // set the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // read the echoPin, pulseIn() returns the duration (length of the pulse) in microseconds
  duration = pulseIn(echoPin, HIGH);

  // calculate the distance
  distance = duration*0.034/2;

  // print the distance on the Serial Monitor
  Serial.print("Distanz: ");
  Serial.println(distance);
  delay(100);
}
