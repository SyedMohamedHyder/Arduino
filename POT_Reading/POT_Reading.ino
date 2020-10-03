int voltage;
int potpin = A0;
int waitTime = 1000;
void setup() {
  // put your setup code here, to run once:
  pinMode(potpin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  voltage = analogRead(potpin);
  Serial.println(voltage);
  delay(waitTime);

}
