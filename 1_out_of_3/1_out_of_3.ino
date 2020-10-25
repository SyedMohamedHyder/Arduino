int led1 = 7;
int led2 = 8;
int led3 = 9;
String question = "Which LED do you want to light up ?";
String reply = "Lighting up LED number ";
String led_number;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(question);
  while (Serial.available()==0){
    
  }
  led_number = Serial.readString();
  Serial.print(reply);
  Serial.println(led_number);
  if (led_number == "LED1"){
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
  if (led_number == "LED2"){
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
  }
  if (led_number == "LED3"){
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
  }

}
