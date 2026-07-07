int l1=2;
  int l2=3;
  int l3=4;
  int l4=5;
  int l5=6;
void setup() //chaser light , running led effect
{
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
  pinMode(l5, OUTPUT);
  
  
}

void loop ()
{
  digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  delay(1000);
   digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  delay(1000);
   digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  delay(1000);
   digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, HIGH);
  digitalWrite(l4, LOW);
  digitalWrite(l5, LOW);
  delay(1000);
   digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, HIGH);
  digitalWrite(l5, LOW);
  delay(1000);
   digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
  digitalWrite(l3, LOW);
  digitalWrite(l4, LOW);
  digitalWrite(l5, HIGH);
  delay(1000);
}
