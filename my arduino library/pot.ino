int sensorpin = A0; /* analog yazarken A yazmamız gerek */
int sensorvalue = 0;
void setup() {
  // put your setup code here, to run once:
  /* declare the ledpin as an output */
  pinMode(sensorpin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  /* read the value from the sensor */
  sensorvalue = analogRead (sensorpin);
  Serial.println(sensorvalue);
}
