void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}
void loop() {
  for(int a=0; a<=5 ;a++){
    if(a==0 || a==5){
      digitalWrite(2,HIGH);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      delay(100);
    }
    if(a==1 || a==4){
      digitalWrite(2,LOW);
      digitalWrite(3,HIGH);
      digitalWrite(4,LOW);
      delay(100);
    }
    if(a==2 || a==3){
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,HIGH);
      delay(100);
    }
  }
}
