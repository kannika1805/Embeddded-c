const int trigerPin=3;
const int echoPin=4;
void setup(){
  Serial.begin(9600);
  pinMode(trigerPin, OUTPUT);
  pinMode(echoPin, INPUT);
}
void loop(){
  // to emit ultrasonic 
  digitalWrite(trigerPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigerPin,LOW);
  // To detect ultrasonic
   int duration = pulseIn(echoPin,HIGH);
  int cm=duration/29/2;
  Serial.print(cm);
  Serial.println();
  delay(100);
  /*if(cm > 6 ){
       Right();
       delay(2000);
       stopp();
  }
  else{
    Forward();
  }*/
}
