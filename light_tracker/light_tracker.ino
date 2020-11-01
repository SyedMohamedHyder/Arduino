int ldr_pin = A0;
int ldr_value;
int led_pin1 = 2;
int led_pin2 = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(ldr_pin, INPUT);
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  // put your main code here, to run repeatedly:
  ldr_value = analogRead(ldr_pin);
  Serial.println(ldr_value);
  if (ldr_value >= 60){
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, HIGH);
  }
  if (ldr_value < 60 && ldr_value >= 30){
    digitalWrite(led_pin1, HIGH);
    digitalWrite(led_pin2, LOW);
  }
  if (ldr_value < 30 && ldr_value >= 10){
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, HIGH);
    }
  if (ldr_value < 10){
    digitalWrite(led_pin1, LOW);
    digitalWrite(led_pin2, LOW);
  }
  delay(100);
}
