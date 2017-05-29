int parlaklik=0;
int led=3;
int degisim_miktari=5;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(led,parlaklik); /* ara değer olarak parlaklik */
parlaklik=parlaklik+degisim_miktari;
if(parlaklik==0 || parlaklik==255)/* bu döngü ile yeni değişim miktarı -5 veya +5 oluyor ona göre azalıp artıyor. 255'ten geriye ya da 0'dan 255'e */
{
  degisim_miktari= -degisim_miktari;
  }
  delay(50);
}
