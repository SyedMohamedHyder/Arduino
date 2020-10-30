int buzzpin =7;
int potpin = A0;
int potread;
int buzztime;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzpin, OUTPUT);
  pinMode(potpin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  potread = analogRead(potpin);
  buzztime = (potread/1023.)*10000;
  digitalWrite(buzzpin, HIGH);
  delayMicroseconds(buzztime);
  digitalWrite(buzzpin, LOW);
  delayMicroseconds(buzztime);
}
