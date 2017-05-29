int DonmeHizi = 175; 
/* bu değişken ile motorların dönme hızı kontrol edilebilir */

/* motor sürücüsüne bağlanacak INPUT ve ENABLE pinleri belirleniyor */
const int sagileri = 9;
const int saggeri = 8;
const int solileri = 12;
const int solgeri = 13;
const int solenable = 11;
const int sagenable = 10; 

void ileri(int hiz){
/* ilk değişkenimiz sag motorun ikincisi sol motorun hızını göstermektedir.
 * motorlarımızın hızı 0-255 arasında olmalıdır.
 * Fakat bazı motorların torkunun yetersizliğiniden 60-255 arasında çalışmaktadır.
 * Eğer motorunuzdan tiz bir ses çıkıyorsa hızını arttırmanız gerekmektedir.
*/
 analogWrite(sagenable, hiz); /* sağ motorun hız verisi */
 digitalWrite(sagileri,HIGH); /* ileri dönme sağlanıyor */
 digitalWrite(saggeri,LOW); /* ileri dönme sağlanıyor */
 
 analogWrite(solenable, hiz); /* sol motorun hız verisi */
 digitalWrite(solileri, HIGH); /* ileri dönme sağlanıyor */
 digitalWrite(solgeri,LOW); /* ileri dönme sağlanıyor */
}

void sagaDon(int hiz){
 analogWrite(sagenable, hiz); /* sağ motorun hız verisi */
 digitalWrite(sagileri,LOW); /* geri dönme sağlanıyor */
 digitalWrite(saggeri,HIGH); /* geri dönme sağlanıyor */
 
 analogWrite(solenable, hiz); /* sol motorun hız verisi */
 digitalWrite(solileri, HIGH); /* ileri dönme sağlanıyor */
 digitalWrite(solgeri,LOW); /* ileri dönme sağlanıyor */
}

void solaDon(int hiz){
 analogWrite(sagenable, hiz); /* sağ motorun hız verisi */
 digitalWrite(sagileri,HIGH); /* ileri dönme sağlanıyor */
 digitalWrite(saggeri,LOW); /* ileri dönme sağlanıyor */
 
 analogWrite(solenable, hiz); /* sol motorun hız verisi */
 digitalWrite(solileri, LOW); /* geri dönme sağlanıyor */
 digitalWrite(solgeri,HIGH); /* geri dönme sağlanıyor */
}

void geri(int hiz){ 
 analogWrite(sagenable, hiz); /* sağ motorun hız verisi */
 digitalWrite(sagileri,LOW); /* geri yönde dönme sağlanıyor */
 digitalWrite(saggeri, HIGH); /* geri yönde dönme sağlanıyor */
 
 analogWrite(solenable, hiz); /* sol motorun hız verisi */
 digitalWrite(solileri, LOW); /* geri yönde dönme sağlanıyor */
 digitalWrite(solgeri, HIGH); /* geri yönde dönme sağlanıyor */
}
 
void dur()
{
  /* Tüm motorlar kitlenerek durma sağlanıyor */
  digitalWrite(sagileri, HIGH);
  digitalWrite(saggeri, HIGH);
  digitalWrite(solileri, HIGH);
  digitalWrite(solgeri, HIGH);
}

void setup(){
/* motorları kontrol eden pinler çıkış olarak ayarlanıyor */
pinMode(sagileri,OUTPUT);
pinMode(saggeri,OUTPUT);
pinMode(solileri,OUTPUT);
pinMode(solgeri,OUTPUT);
pinMode(sagenable,OUTPUT);
pinMode(solenable,OUTPUT);
}

void loop(){
  ileri(DonmeHizi);
  delay(1000);
  dur();
  delay(1000);
  solaDon(DonmeHizi);
  delay(1000);
  dur();
  delay(1000);
  sagaDon(DonmeHizi);
  delay(1000);
  dur();
  delay(1000);
  geri(DonmeHizi);
  delay(1000);
  dur();
  delay(1000);
}


