int led[] = {13, 12, 11, 10, 9, 8, 7, 6, 5, 4};

int button1 = 3;
int button2 = 2;

void setup() {
  for (int i = 0; i < 10; i++) {
    pinMode(led[i], OUTPUT);
  }

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
}

void loop() {

  // Both buttons pressed
  if (digitalRead(button1) == LOW && digitalRead(button2) == LOW) {

    int temp = 9;

    for (int i = 0; i < 5; i++) {
      digitalWrite(led[i], HIGH);
      digitalWrite(led[temp], HIGH);
      delay(500);

      digitalWrite(led[i], LOW);
      digitalWrite(led[temp], LOW);
      temp--;
    }
  }

  // Button 1 pressed
  else if (digitalRead(button1) == LOW) {

    for (int i = 0; i < 10; i++) {

      if (i > 0)
        digitalWrite(led[i - 1], LOW);

      digitalWrite(led[i], HIGH);
      delay(500);
    }

    digitalWrite(led[9], LOW);
  }

  // Button 2 pressed
  else if (digitalRead(button2) == LOW) {

    for (int i = 9; i >= 0; i--) {

      if (i < 9)
        digitalWrite(led[i + 1], LOW);

      digitalWrite(led[i], HIGH);
      delay(500);
    }

    digitalWrite(led[0], LOW);
  }

  // No button pressed
  else {

    for (int i = 0; i < 10; i++) {
      digitalWrite(led[i], HIGH);
      delay(500);
      digitalWrite(led[i], LOW);
      delay(500);
    }
  }
}