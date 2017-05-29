int hizi=175;
int solileri=12;
int solgeri=13;
int solenable=11;
void ileri(int hizi){
analogWrite(solenable,hizi);
digitalWrite(solileri,HIGH);
digitalWrite(solileri,LOW);  
}
void dur(int hizi){
  digitalWrite(solileri,HIGH);
  digitalWrite(solileri,LOW);
  }

void setup() {
  // put your setup code here, to run once:
pinMode(solileri,OUTPUT);
pinMode(solileri,OUTPUT);
pinMode(solenable,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
ileri(hizi);
delay(1000);
dur(hizi);
delay(1000);
}
