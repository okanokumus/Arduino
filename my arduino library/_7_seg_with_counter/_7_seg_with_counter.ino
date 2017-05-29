int g = 7;
int f = 6;
int a = 5;
int b = 4;
int e = 3;
int d = 2;
int c = 1;
int h = 0;
int butonpin = 12;
int sayac = 0;
int buton_durumu = 0;
void setup() {
  /*
    for (i=2; i<9; i++)
    {
    pinMode(i,OUTPUT);
    }
  */
  pinMode(g, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(h, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buton_durumu = digitalRead(butonpin);
  if (buton_durumu == HIGH) {
    sayac++;
    delay(20);
  }
  while (buton_durumu == HIGH) {
    buton_durumu = digitalRead(butonpin);
  }
  delay(20);

  switch (sayac) {
    case 0:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      Serial.println("0");
      break;

    case 1:
      digitalWrite(f, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(a, LOW);
      digitalWrite(b, LOW);
      digitalWrite(c, LOW);
      digitalWrite(d, LOW);

      Serial.println("1");
      break;

    case 2:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(f, LOW);
      Serial.println("2");
      break;

    case 3:
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, LOW);
      Serial.println("3");
      break;

    case 4:
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(a, LOW);
      digitalWrite(d, LOW);
      Serial.println("4");
      break;

    case 5:
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(a, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      Serial.println("5");

      break;
    default:
      Serial.println("default");
      sayac = 0;
      break;
  }

}

