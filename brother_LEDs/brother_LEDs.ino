int LED1 = 9;
int LED2 = 10;
int brightness1;
int brightness2;
int waitTime= 250;
int brightness_increase = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(brightness1=0; brightness1<=250; brightness1 = brightness1 + brightness_increase){
    brightness2 = 250 - brightness1;
    analogWrite(LED1,brightness1);
    analogWrite(LED2,brightness2);
    delay(waitTime);
  }
    for(brightness2=0; brightness2<=250; brightness2 = brightness2 + brightness_increase){
    brightness1 = 250 - brightness2;
    analogWrite(LED1,brightness1);
    analogWrite(LED2,brightness2);
    delay(waitTime);
  }

}
