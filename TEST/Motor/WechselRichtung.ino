void setup() {
    // defining motor pins
    // motor 1 pins: 8,9
    // motor 2 pins: 10,11

    const int motor1Pin1 = 8;
    const int motor1Pin2 = 9;
    const int motor2Pin1 = 10;
    const int motor2Pin2 = 11;

    pinMode(motor1Pin1, OUTPUT);
    pinMode(motor1Pin2, OUTPUT);
    pinMode(motor2Pin1, OUTPUT);
    pinMode(motor2Pin2, OUTPUT);  
}

void loop() {
    // motor 1 forward
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);

    // motor 2 forward
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);

    delay(1000);

    // motor 1 backward
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);

    // motor 2 backward
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);

    delay(1000);
}