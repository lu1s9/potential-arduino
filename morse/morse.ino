void setup() {
    pinMode(8, OUTPUT);
}

void loop() {

    // Turning a led on and off every 150 ms, three times.
    // Waiting one second off at the end.
    digitalWrite(8,HIGH);
    delay(150);
    digitalWrite(8,LOW);
    delay(150);
    digitalWrite(8,HIGH);
    delay(150);
    digitalWrite(8,LOW);
    delay(150);
    digitalWrite(8,HIGH);
    delay(150);
    digitalWrite(8,LOW);
    delay(1000);

    // Turning a led on and off every 500ms, three times.
    // Waiting one second off at the end.
    digitalWrite(8,HIGH);
    delay(500);
    digitalWrite(8,LOW);
    delay(500);
    digitalWrite(8,HIGH);
    delay(500);
    digitalWrite(8,LOW);
    delay(500);
    digitalWrite(8,HIGH);
    delay(500);
    digitalWrite(8,LOW);
    delay(1000);

    // Turning a led on and off every 150 ms, three times.
    // Waiting one second off at the end.
    digitalWrite(8,HIGH);
    delay(150);
    digitalWrite(8,LOW);
    delay(150);
    digitalWrite(8,HIGH);
    delay(150);
    digitalWrite(8,LOW);
    delay(150);
    digitalWrite(8,HIGH);
    delay(150);
    digitalWrite(8,LOW);
    delay(1000);
}
