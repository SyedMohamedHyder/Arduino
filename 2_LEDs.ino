int LED1 = 8;
int LED2 = 2;
int blink1 = 5;
int blink2 = 10;
int LED1_blink_time =500;
int LED2_blink_time = 200;
int i;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for (i=0;i<blink1;i++){
    digitalWrite(LED1,HIGH);
    delay(LED1_blink_time);
    digitalWrite(LED1,LOW);
    delay(LED1_blink_time);
    }
  delay(100);
  for (i=0;i<blink2;i++){
    digitalWrite(LED2,HIGH);
    delay(LED2_blink_time);
    digitalWrite(LED2,LOW);
    delay(LED2_blink_time);
    }
  delay(100);
}
