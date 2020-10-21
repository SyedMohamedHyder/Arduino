int LEDpin = 7;
int num_blinks;
int i;
int waitTime=500;
String msg="How many times do you want to blink the LED ?";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()==0){
    
  }
  num_blinks = Serial.parseInt();
  for(i=0;i<num_blinks;i=i+1){
    digitalWrite(LEDpin, HIGH);
    delay(waitTime);
    digitalWrite(LEDpin, LOW);
    delay(waitTime);
  }
}
