int cny= A0;
int sensorvalue=0;
void setup() {
  // put your setup code here, to run once:
pinMode(cny,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sensorvalue=analogRead(cny);
Serial.print(sensorvalue);
delay(20 );
Serial.println();
}
