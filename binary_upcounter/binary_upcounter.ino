int bit1 = 3;
int bit2 = 5;
int bit3 = 6;
int bit4 = 10;
int bit1_value;
int bit2_value;
int bit3_value;
int bit4_value;
void setup() {
  // put your setup code here, to run once:
  pinMode(bit1, OUTPUT);
  pinMode(bit2, OUTPUT);
  pinMode(bit3, OUTPUT);
  pinMode(bit4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (bit4_value=0;bit4_value<=255;bit4_value=bit4_value+250){
    for(bit3_value=0;bit3_value<=255;bit3_value=bit3_value+250){
      for(bit2_value=0;bit2_value<=255;bit2_value=bit2_value+250){
        for(bit1_value=0;bit1_value<=255;bit1_value=bit1_value+250){
          analogWrite(bit1,bit1_value);
          analogWrite(bit2,bit2_value);
          analogWrite(bit3,bit3_value);
          analogWrite(bit4,bit4_value);
          delay(1000);
        }
      }
    }
  }
}
