#define SW1 11
#define SW2 13
#define D1 12
#define D2 10 
void turnRight(void);
void turnLeft(void);
void stop(void);
int sw1;
int sw2;
void setup() {
  pinMode(SW1,INPUT);
  pinMode(SW2,INPUT);
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);  

}

void loop() {
  sw1 = digitalRead(SW1);
  sw2 = digitalRead(SW2);
  if(sw1 == LOW){
    turnLeft();
  }
  else if(sw2== LOW){
    turnRight();
    
    }
  else{
    stop();
    }
     
}

void turnLeft(void){
    digitalWrite(D1,HIGH);
    digitalWrite(D2,LOW);
  
 }

 void turnRight(void){
   digitalWrite(D1,LOW);
   digitalWrite(D2,HIGH);
 
 }
 
 void stop(void){
  digitalWrite(D1,HIGH);
   digitalWrite(D2,HIGH);
 
  
  }
