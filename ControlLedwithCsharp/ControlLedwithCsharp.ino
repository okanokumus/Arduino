    String inputString = "";         // a string to hold incoming data
    bool stringComplete = false;
    int delayTime = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600); // serail communication speed is 9600 baud  
  while(Serial.available()){
      // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag
    // so the main loop can do something about it:
    if (inChar == '\n') {
      delayTime = inputString.toInt();
      stringComplete = true;
    }
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
    
    // turn on the led
    if(inputString == "1" ){
      // turn on the led
      digitalWrite(13,HIGH);
      while(delayTime>0){
        digitalWrite(13,LOW);
        delay(delayTime);
        digitalWrite(13,LOW);
        delay(delayTime);
      }
    }
    // turn off the led
    else if (inputString == "0" ){
      // turn off the led
      digitalWrite(13,LOW);
    }   
  }
}
    void getPart(){

    }
    

