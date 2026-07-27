int ldr=A0;
int buzzer=7;
void setup() {
Serial.begin(9600);
pinMode(ldr, INPUT);  
pinMode(buzzer,OUTPUT);// put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
 int ldrvalue = analogRead(ldr);
 Serial.println("ldrvalue is :");
 Serial.print(ldrvalue);
 if(ldrvalue >100)
{
  tone(buzzer,1000);
  Serial.println("rat detacted");
}
 else{
  noTone(buzzer);
 }
}
