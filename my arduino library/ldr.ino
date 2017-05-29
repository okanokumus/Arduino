int ldr= A0;
int led= 9;
int parlaklik;
void setup() {
  // put your setup code here, to run once:
pinMode(ldr, INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensordegeri=analogRead(ldr);
analogWrite(led,parlaklik); 
parlaklik=map(sensordegeri,0,1023,0,255); /* https://www.arduino.cc/en/Reference/Map */
Serial.print("sensor=");
Serial.print(sensordegeri);
Serial.println();/* satır atla*/
delay(20);
}
