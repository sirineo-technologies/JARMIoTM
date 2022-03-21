/*
  JARM IoT M
  
  Buzzer JARM IoT M:   activating a micro buzzer on the.

  Check the hardware specs here: https://github.com/sirineo-technologies/JARMIoTM
  
  This example code is in the public domain.

  https://linktr.ee/sirineotechnologies
  https://www.linkedin.com/company/sirineo-technologies/
  https://www.youtube.com/channel/UCXL7DX-jfyiIgiR7kq9hfNw
  https://www.instagram.com/sirineotechnologies/
  https://www.instagram.com/babaculab.sirineo/reels/
  https://twitter.com/sirineotech
  https://www.linkedin.com/company/sirineo-technologies/

  modified Tatá em 21/03/2022
  
*/


const int buzzer = 7; //buzzer to arduino pin 9
const int redled = 5; //buzzer to arduino pin 9
int timer = 3000; //buzzer to arduino pin 9

void setup(){
 
  pinMode(buzzer, OUTPUT); // Set buzzer - pin 9 as an output
  pinMode(redled, OUTPUT); // Set buzzer - pin 9 as an output
  //Serial.begin(9600);
}

void loop(){

 // int sensorValue = analogRead(A4);
 // timer = sensorValue;
  tone(buzzer, 1000); // Send 1KHz sound signal...
  digitalWrite(redled , LOW);
  delay(timer);        // ...for 1 sec
  noTone(buzzer);     // Stop sound...
  digitalWrite(redled , HIGH); 
  delay(timer);        // ...for 1sec
 // SerialUSB.println(sensorValue);
  
}


