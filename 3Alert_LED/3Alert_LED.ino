float voltage;
int potpin = A0;
int waitTime = 100;
int greenLED = 2;
int blueLED = 4;
int redLED = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(potpin, INPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  voltage = analogRead(potpin)*5./1023.;
  Serial.println(voltage);
  if(voltage <= 3.0){
    digitalWrite(greenLED, HIGH);
    digitalWrite(blueLED, LOW);
    digitalWrite(redLED, LOW);
  }
  else{
    if (voltage <= 4.0){
      digitalWrite(greenLED, LOW);
      digitalWrite(blueLED, HIGH);
      digitalWrite(redLED, LOW);
    }
    else{
      digitalWrite(greenLED, LOW);
      digitalWrite(blueLED, LOW);
      digitalWrite(redLED, HIGH);
    }
  }
  delay(waitTime);

}
