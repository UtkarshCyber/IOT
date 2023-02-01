Components Required :
Arduino Uno board - 1
USB Cable - 1
LED - 3
Jumper wires
Pin Connections :
● LED(RED) positive pin to digital pin 13
● LED(Yellow) positive pin to digital pin 14
● LED(Green) positive pin to digital pin 15
● LED(ALL) negative pin to Ground
Code :

void setup()
{
pinMode(13, OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
}
void loop()
{
digitalWrite(13, HIGH);
digitalWrite(12, LOW);
digitalWrite(11, LOW);
delay(1000);
digitalWrite(13, LOW);
digitalWrite(12, HIGH);
digitalWrite(11, LOW);
delay(1000);
digitalWrite(13, LOW);
digitalWrite(12, LOW);
digitalWrite(11, HIGH);
delay(1000);
}
