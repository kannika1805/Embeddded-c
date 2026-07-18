int led=13;
int Switch=2;
void setup(){
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(2, INPUT);
}
void loop(){
  if(digitalRead(Switch)==0){
    Serial.println("motion detected");
    digitalWrite(Switch, LOW);
    delay(1000);
    digitalWrite(led, HIGH);
    delay(1000);
  }
}