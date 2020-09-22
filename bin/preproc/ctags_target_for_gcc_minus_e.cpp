# 1 "f:\\arduinoForVsCode\\Blink\\arduino\\Blink.ino"




void turnRight(void);
void turnLeft(void);
void stop(void);
int sw1;
int sw2;
void setup() {
  pinMode(11,0x0);
  pinMode(13,0x0);
  pinMode(12,0x1);
  pinMode(10,0x1);

}

void loop() {
  sw1 = digitalRead(11);
  sw2 = digitalRead(13);
  if(sw1 == 0x0){
    turnLeft();
  }
  else if(sw2== 0x0){
    turnRight();

    }
  else{
    stop();
    }

}

void turnLeft(void){
    digitalWrite(12,0x1);
    digitalWrite(10,0x0);

 }

 void turnRight(void){
   digitalWrite(12,0x0);
   digitalWrite(10,0x1);

 }

 void stop(void){
  digitalWrite(12,0x1);
   digitalWrite(10,0x1);


  }
