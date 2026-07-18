#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); // RX, TX

int led = 13;

void setup() {
  Serial.begin(9600);   // Serial Monitor
  BT.begin(9600);       // HC-05
  pinMode(led, OUTPUT);

  Serial.println("Bluetooth Ready");
}

void loop() {
  if (BT.available()) {
    char c = BT.read();

    Serial.print("Received: ");
    Serial.println(c);

    if (c == 'O') {
      digitalWrite(led, HIGH);
    }

    if (c == 'F') {
      digitalWrite(led, LOW);
    }
  }
}