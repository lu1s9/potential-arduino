float voltaje;
int valorAnalogico;
int pinAnalogico=A2;
int retraso=200;

int ledVerde=12;
int ledAmarillo=10;
int ledRojo=8;

void setup() {
  Serial.begin(115200);
  pinMode(pinAnalogico, INPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledRojo, OUTPUT);
}

void loop() {
  valorAnalogico=analogRead(pinAnalogico);
  
  // Convertir el valor analogico a un valor decimal de 0 - 5 
  voltaje=(5.*valorAnalogico)/1023.;  

  if(voltaje >= 0 && voltaje <= 3.0){
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarillo, LOW);
    digitalWrite(ledRojo, LOW);
  }

  if(voltaje > 3 && voltaje <= 4.0){
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, HIGH);
    digitalWrite(ledRojo, LOW);
  }

  if(voltaje > 4 && voltaje <= 5.0){
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, LOW);
    digitalWrite(ledRojo, HIGH);
  }

  Serial.println(voltaje);
  delay(retraso);
}

