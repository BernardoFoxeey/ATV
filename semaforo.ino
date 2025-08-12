void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
}

void loop() {
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);
delay(1000);
digitalWrite(7, HIGH);
delay(500);
digitalWrite(7, LOW);
delay(500);
digitalWrite(8, HIGH);
delay(5000);
digitalWrite(8, LOW);
delay(500);
}
