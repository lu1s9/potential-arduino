int m1a = 10; // Motor 1 sentido horario, pin 10 arduino - pin 15 l293D
int m1b = 9; // Motor 1 sentido antihorario, pin 9 arduino - pin 10 l293D
int m2a = 12; // Motor 2 sentido horario, pin 12 arduino - pin 2 l293D
int m2b = 11; // Motor 2 sentido antihorario, pin 11 arduino - pin 7 l293D
char val;

void setup() {
    pinMode(m1a, OUTPUT);
    pinMode(m1b, OUTPUT);
    pinMode(m2a, OUTPUT);
    pinMode(m2b, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    while(Serial.available() > 0){
        val = Serial.read();
        Serial.println(val);
    }

    if(val == 'F'){ // Adelante
        digitalWrite(m1a, HIGH);
        digitalWrite(m1b, LOW);
        digitalWrite(m2a, HIGH);
        digitalWrite(m2b, LOW);
    } else if(val == 'B'){ // Atras
        digitalWrite(m1a, LOW);
        digitalWrite(m1b, HIGH);
        digitalWrite(m2a, LOW);
        digitalWrite(m2b, HIGH);
    } else if(val == 'L'){ // Izquierda
        digitalWrite(m1a, HIGH);
        digitalWrite(m1b, LOW);
        digitalWrite(m2a, LOW);
        digitalWrite(m2b, LOW);
    } else if(val == 'R'){ // Derecha
        digitalWrite(m1a, LOW);
        digitalWrite(m1b, LOW);
        digitalWrite(m2a, HIGH);
        digitalWrite(m2b, LOW);
    } else if(val == 'S'){ // Detener
        digitalWrite(m1a, LOW);
        digitalWrite(m1b, LOW);
        digitalWrite(m2a, LOW);
        digitalWrite(m2b, LOW);
    }
}
