int buzzer=2;
void setup(){
   pinMode(2,OUTPUT);
   pinMode(3, INPUT);
   pinMode(4, INPUT);
   pinMode(5, INPUT);
   pinMode(6, INPUT);
   pinMode(7, INPUT);
   pinMode(8, INPUT);
   pinMode(9, INPUT);
}
void loop(){
  noTone(buzzer);
  if(digitalRead(3)== HIGH){
    tone(buzzer,261);
    delay(100);
    // sa = 261hz ;
  }
   if(digitalRead(4)== HIGH){
     tone(buzzer,293);
    delay(100);
     //re
  }
   if(digitalRead(5)== HIGH){
     tone(buzzer,329);
    delay(100);
     //ga
  }
   if(digitalRead(6)== HIGH){
     tone(buzzer,349);
    delay(100);
     // ma
  }
   if(digitalRead(7)== HIGH){
     tone(buzzer,391);
    delay(100);
     // pa
  } 
  if(digitalRead(8)== HIGH){
      tone(buzzer,440);
    delay(100);
    // dha
  }
   if(digitalRead(9)== HIGH){
     tone(buzzer,493);
    delay(100);
     // ni
   }
}