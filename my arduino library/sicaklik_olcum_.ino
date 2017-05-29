float sicaklik;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sicaklik=analogRead(A0);
sicaklik=sicaklik*0.48828125;
Serial.print("sıcaklık=");
Serial.print(sicaklik);
Serial.println("C");
delay(500);
}
