int  trigPin = 12;
int  echoPin  = 11;
/*int  led = 11;
int  led2 = 10;
*/
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  /*pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
*/
}

void loop() {
  long sure, uzaklik;
  digitalWrite(trigPin, LOW);  /* başlangıçta ortamda olan diğer sesleri de sıfırlamak için bu şekilde 0'lıyoruz*/
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  sure = pulseIn(echoPin, HIGH);/* aynı duruma geri dönüş için geçen zaman */

  uzaklik = (sure/2) / 29.1;

  if (uzaklik >= 200 || uzaklik <= 0){
    Serial.println("Olamaz, Olaamaaaz");
  }
  else {
    Serial.print(uzaklik);
    Serial.println(" cm");
  }
 }
