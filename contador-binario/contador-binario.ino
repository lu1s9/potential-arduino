int led1 = 8;
int led2 = 7;
int led3 = 4;
int led4 = 2;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
}

void loop() {
    int retardo = 1000;

    // Number 1
    digitalWrite(led1, HIGH);
    delay(retardo);
    digitalWrite(led1, LOW);
    delay(retardo);

    // Number 2
    digitalWrite(led2, HIGH);
    delay(retardo);
    digitalWrite(led2, LOW);
    delay(retardo);

    // Number 3
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    delay(retardo);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    delay(retardo);

    // Number 4
    digitalWrite(led3, HIGH);
    delay(retardo);
    digitalWrite(led3, LOW);
    delay(retardo);

    // Number 5
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
    delay(retardo);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    delay(retardo);

    // Number 6
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    delay(retardo);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(retardo);

    // Number 7
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    delay(retardo);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(retardo);

    // Number 8
    digitalWrite(led4, HIGH);
    delay(retardo);
    digitalWrite(led4, LOW);
    delay(retardo);

    // Number 9
    digitalWrite(led1, HIGH);
    digitalWrite(led4, HIGH);
    delay(retardo);
    digitalWrite(led1, LOW);
    digitalWrite(led4, LOW);
    delay(retardo);

    // Number 10
    digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);
    delay(retardo);
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    delay(retardo);

    // Number 11
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led4, HIGH);
    delay(retardo);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led4, LOW);
    delay(retardo);

    // Number 12
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(retardo);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(retardo);

    // Number 13
    digitalWrite(led1, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(retardo);
    digitalWrite(led1, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(retardo);

    // Number 14
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(retardo);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(retardo);

    // Number 15
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    delay(retardo);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    delay(retardo);
}
