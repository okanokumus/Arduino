int led = 9; // the pin that the LED is attached to
int brightness = 0; // how bright the LED is
int fadeamount = 5; // how many points to fade the LED by
// the setup routine runs once when you press reset
void setup() {
  // put your setup code here, to run once:
  // declare pin 9 to be an output:
  pinMode(led, OUTPUT);
}

//the loop routine runs over and over again forever:

void loop() {
  // put your main code here, to run repeatedly:
  // set the brightness of pin 9:
  analogWrite(led, brightness); 
  // change the brightness for next time through the loop:
  brightness = brightness + fadeamount;
  // reverse the direction of the fading at the ends of the fade:
  if (brightness==0 || brightness ==255){
    fadeamount = -fadeamount;
  }
  delay (30);
}
