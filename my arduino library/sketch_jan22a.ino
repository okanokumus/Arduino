int LedPin = 13 ;/* Led connected to digital pin 13*/ /* bu tanımlamayı define ile de atayabilridik ve tamamen kalıcı olarak program sonuna kadar kullanılabilir
  #define LEDPIN 13 bu ise kesinlikle büyük yazılır */
/* const int ledPin=13; bu da değiştirilemez*/
/* the setup() method runs once, when the sketch stars*/
void setup() {
  /* put your setup code here, to run once:*/
  /* initialize the digital pin as an output*/
  pinMode(LedPin, OUTPUT);
}
/* the loop() method runs over and over again,*/
/* as long as the Arduino has power*/
void loop() {
  /* put your main code here, to run repeatedly:*/
  digitalWrite(LedPin, 1); /* set the LED on    */
  delay(1000);               /* wait for a second */
  digitalWrite(LedPin, 0); /* set the LED off   */
  delay(1000);               /* wait for a second */
}

