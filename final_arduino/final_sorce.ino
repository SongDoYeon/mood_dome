int touch = 13;
int RP = 8;
int GP = 9;
int BP = 10;
int i=0;
const int fade = 10;

void setup() {
  Serial.begin(9600);
  pinMode(touch, INPUT);
  pinMode(RP, OUTPUT);
  pinMode(GP, OUTPUT);
  pinMode(BP, OUTPUT);
}


void loop() {
  int touchvalue = digitalRead(touch);
  delay(200);

  if(touchvalue == HIGH)
  {
    Serial.println("start");
    i++;
  }
  if(i==1)
  {
    Serial.println("On!");
    digitalWrite(RP,148);
    digitalWrite(GP,0);
    digitalWrite(BP,211);
  }
  if(i==2)
  {
    Serial.println("i=0");
    i=0;
  }
  if(i==0)
  {
    Serial.println("Off!");
    digitalWrite(RP,0);
    digitalWrite(GP,0);
    digitalWrite(BP,0);
  }
}
