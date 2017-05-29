int buton=8;
int sayac=0;
int butonDurumu=0;
unsigned long
unsigned long

void setup() {
  // put your setup code here, to run once:
pinMode (buton, INPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
butonDurumu= digitalRead(buton);
if (butonDurumu== LOW);{
  delay(200); /* dalgalanmalar için 200 ms bekliyoruz */
  sayac++;
  Serial.print(sayac);/* println ile yazdığımızda ise alt alta yazar*/ 
  while(butonDurumu==LOW){
    butonDurumu=digitalRead(buton);
    }
  delay(200); /* dalgalanmalar için 20 ms bekliyoruz */
  }
  
}
