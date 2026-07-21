int tempPin=A0;
int buzzer=2;
void setup() {
  Serial.begin(9600);
  pinMode(tempPin, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  int var=digitalRead(tempPin);
  float mv=(var/1024.0)*5000;
  float cel=mv/10;
  float frh=((cel*9)/5)+32;
  Serial.print("tempertaure in celcius:");
  Serial.print(cel);
  Serial.println("tempeature in faherient:");
  Serial.print(frh);
  if(cel>50.0){
    tone(buzzer,1000);
    delay(1000);
    noTone(buzzer);
    delay(1000);
  }
  // put your main code here, to run repeatedly:

}
