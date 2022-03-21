/*
  JARM IoT M
  
  Led RGB JARM IoT M:   Turns on an LED RGB, repeatedly.

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

int redpin=5;      //Pin 5
int greenpin=11;    //Pin 11
int bluepin=2;      //Pin 2

int var=0;
int var1=0;


void setup()
{
}

void loop()
{
  for(var=250;var<255;var++)
  {
  analogWrite(redpin,var);  //RED
  analogWrite(greenpin,0);
  delay(500);
  analogWrite(redpin,0);    //GREEN
  analogWrite(greenpin,var);
  delay(500);
  analogWrite(greenpin,0);   //BLUE
  analogWrite(bluepin,var);
  delay(500);
  analogWrite(bluepin,0);
  delay(500);
  }
  
  for(var1=250;var1<255;var1++)
  {
  analogWrite(redpin,var1);   //YELLOW
  analogWrite(greenpin,var1);
  delay(500);
  analogWrite(redpin,0);
  delay(500);
  analogWrite(greenpin,var1);  //CYAN
  analogWrite(bluepin,var1);
  delay(500);
  analogWrite(greenpin,0);
  delay(500);
  analogWrite(bluepin,var1);    //MAGENTA
  analogWrite(redpin,var1);
  delay(500);
  analogWrite(bluepin,0);
  delay(500);
  analogWrite(bluepin,var1);
  analogWrite(redpin,var1);
  analogWrite(greenpin,var1);
  } 
  
}
