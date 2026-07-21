int potentiometer=A0;
int motorPin=10;
void setup(){
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}
void loop(){
  int value=analogRead(potentiometer)/4;
  Serial.print(value);
  analogWrite(motorPin,value);
}
