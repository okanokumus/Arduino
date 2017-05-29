int g = 7;
int f = 6;
int a = 5;
int b = 4;
int e = 3;
int d = 2;
int c = 1;
int h = 0;
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
  /* 0 */
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  delay(2000);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  delay(1000);
  /*1*/
  digitalWrite(f, HIGH);
  digitalWrite(e, HIGH);
  delay(1000);
  digitalWrite(f, LOW);
  digitalWrite(e, LOW);
  delay(1000);
  /* 2 */
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  delay(1000);
  /* 3 */
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  delay(1000);
  /* 4 */
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  delay(1000);
  digitalWrite(f, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  delay(1000);
  /* 5 */
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(a, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  delay(1000);
  /* 6 */
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  delay(1000);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(a, LOW);
  delay(1000);
  /* 7 */
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  delay(1000);
  /* 8 */
  digitalWrite(a, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  delay(1000);
  /* 9 */
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(f, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(g, LOW);
  digitalWrite(f, LOW);
  delay(1000);
  /* A */
  digitalWrite(a, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(g, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  delay(1000);
  /* b */
  digitalWrite(g, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  delay(1000);
  digitalWrite(g, LOW);
  digitalWrite(c, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  delay(1000);
  /* C */
  digitalWrite(a, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  delay(1000);
  /* d */
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(g, HIGH);
  delay(1000);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(g, LOW);
  delay(1000);
  /* E */
  digitalWrite(a, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(f, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(d, LOW);
  digitalWrite(f, LOW);
  delay(1000);
  /* F */
  digitalWrite(a, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  delay(1000);
  digitalWrite(a, LOW);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  delay(1000);
  
}

