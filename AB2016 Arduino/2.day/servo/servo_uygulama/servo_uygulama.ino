#include <Servo.h> /* Servo kutuphanesi projeye dahil edildi */
 
Servo servoMotor;  /* servo motor nesnesi yaratildi */
 
int Potansiyometre = A0; /* Potansiyometre pini belirlendi*/
int PotDeger; /* Potansiyometre degeri icin degisken olusturuldu */
 
void setup() 
{ 
  servoMotor.attach(9); /* Servo motor 9 numarali pine baglandi */
} 
 
void loop() 
{ 
  PotDeger = analogRead(Potansiyometre);  /* Potansiyometrenin cikis gerilimi olculuyor */
  PotDeger = map(PotDeger, 0, 1023, 0, 179);  
  /* 
  Potansiyometreden olculen 0 ve 1023 arasindaki deger map fonksiyonu ile 
  Servo motorun calisma araligina yani 0 ve 180 dereceye cevriliyor.
  Bu fonksiyon 0 ve 1023 arasindaki degerleri, lineer olarak 0 ve 180 arasina cevirir
  */
  servoMotor.write(PotDeger); /* Hesaplanan deger servo motora yollaniyor*/ 
  delay(15);  /* Motorun konumunu almasi icin bir sure bekleniyor */ 
}
