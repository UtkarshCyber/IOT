#Components Required :
#Arduino Uno board - 1
#USB Cable - 1
#LED - 1
#Jumper wires
#Pin connection :
#● LED's positive leg is connected to digital pin 13
#● LED's negative leg is connected to ground
#Code :

void setup()
{
pinMode(13, OUTPUT);
}
void loop()
{
digitalWrite(13, HIGH);
delay(1000);
digitalWrite(13, LOW);
}
