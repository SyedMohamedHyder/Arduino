int led=9;
int pot=A0;
int led_val;
int pot_val;

void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  pot_val = analogRead(pot);
  led_val = (pot_val/1023.)*255;
  Serial.println(led_val);
  analogWrite(led,led_val);
  delay(100);

}
