Components Required :
Arduino Uno board - 1
USB Cable - 1
Breadboard - 1
Push Button - 1
LED - 1
Jumper wires
Pin Connections :
● LED positive pin to digital pin 2
● LED positive pin to digital pin 13
● LED negative pin to Ground
Code :

int pushButtonPin = 2;
int ledPin = 13;
void setup()
{
pinMode(pushButtonPin,INPUT);
pinMode(ledPin,OUTPUT);
}
void loop() {
int pushButtonState = digitalRead(pushButtonPin);
if (pushButtonState == 1)
{
digitalWrite(ledPin, HIGH);
}
else
{
digitalWrite(ledPin, LOW);
}
}
