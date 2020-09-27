int LEDpin = 8;
int on_time = 100;
int off_time = 900;
void setup() {
  // put your setup code here, to run once:
  pinMode(LEDpin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDpin, HIGH);
  delay(on_time);
  digitalWrite(LEDpin, LOW);
  delay(off_time);

}
