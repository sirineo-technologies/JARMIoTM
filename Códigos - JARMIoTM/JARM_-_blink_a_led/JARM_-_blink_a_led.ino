/*
  JARM IoT M
  
  Blink JARM IoT M:   Turns on an LED on for one second, then off for one second, repeatedly.

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

int pinjarm = 13;
int timer = 1000;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin  as an output.
  pinMode(pinjarm , OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(pinjarm , HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(timer);                       // wait for a second
  digitalWrite(pinjarm , LOW);    // turn the LED off by making the voltage LOW
  delay(timer);                       // wait for a second
}


