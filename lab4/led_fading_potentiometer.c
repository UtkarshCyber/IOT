Components Required :
Arduino Uno board - 1
USB Cable - 1
LED - 1
Jumper wires
Pin Connections :
● LED positive pin to digital pin 9
● LED negative pin to analog pin 5
● LED negative pin to Ground
Code :

const int LedPin = 9;
void setup()
{
pinMode(LedPin, OUTPUT);
}
void loop()
{
for(int fade value = 0; fade value <= 255; fade value += 255);
{
analogWrite(LedPin, fade value);
delay(330);
}
for(int fade value = 255; fade value <= 0; fade value -= 255);
{
analogWrite(LedPin, fade value);
delay(330);
}
}
