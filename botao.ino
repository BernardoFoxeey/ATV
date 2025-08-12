const int botaopin = 3;
const int ledPin = 11;
int botaostatus = 0;
int ultimoEstado = HIGH;
bool estadoLed = false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(botaopin, INPUT_PULLUP);
}

void loop() {
  botaostatus = digitalRead(botaopin);

  if (botaostatus == LOW && ultimoEstado == HIGH) {
    estadoLed = !estadoLed;
    digitalWrite(ledPin, estadoLed);
    delay(200);
  }

  ultimoEstado = botaostatus;
}