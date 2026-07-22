int ml_a=5;
int ml_b=4;
int mr_a=2;
int mr_b=3;
void setup(){
   Serial.begin(9600);
   pinMode(ml_a, OUTPUT);
   pinMode(ml_b, OUTPUT);
   pinMode(mr_a, OUTPUT);
   pinMode(mr_b, OUTPUT);
   digitalWrite(ml_a, LOW);
   digitalWrite(ml_b, LOW); 
   digitalWrite(mr_a, LOW);
   digitalWrite(mr_b, LOW);
}
void loop(){
  if(Serial.available()){
    byte value=Serial.read();
    switch(value){
     case'F':
      Forward();
      break;
      case'B':
      Backward();
      break;
      case'L': 
      Left();
      delay(3000);
      //delay is given for just to turn the robotcar and stop it
       break;
      case'R':
      Right();
      delay(3000);
      //delay is given for just to turn the robotcar and stop it
      break;
      case's':
      stopp();
      break;
}
  }
}
void Forward(){
   digitalWrite(ml_a, HIGH);
   digitalWrite(ml_b, LOW); 
   digitalWrite(mr_a, HIGH);
   digitalWrite(mr_b, LOW);
}
void Backward(){
   digitalWrite(ml_a, LOW);
   digitalWrite(ml_b, HIGH); 
   digitalWrite(mr_a, LOW);
   digitalWrite(mr_b, HIGH);
}
void Left(){
   digitalWrite(ml_a, LOW);
   digitalWrite(ml_b, HIGH); 
   digitalWrite(mr_a, HIGH);
   digitalWrite(mr_b, LOW);
}
void Right(){
   digitalWrite(ml_a, HIGH);
   digitalWrite(ml_b, LOW); 
   digitalWrite(mr_a, LOW);
   digitalWrite(mr_b, HIGH);
}
void stopp(){
   digitalWrite(ml_a, LOW);
   digitalWrite(ml_b, LOW); 
   digitalWrite(mr_a, LOW);
   digitalWrite(mr_b, LOW);
}