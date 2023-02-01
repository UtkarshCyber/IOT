Components Required :
Arduino Uno board - 1
USB Cable - 1
LED - 1
Potentiometer - 1
Jumper wires
Pin Connections :
● LED positive pin to digital pin 11
● LED negative pin to analog pin 10
● Potentiometer and LED negative pin to ground
Code :

const int LedPin = 11;
void setup()
{
pinMode(LedPin, OUTPUT);
Serial.begin(9600);
}
void loop()
{
int fade value = analogRead(A0);
int brightness = map(fade value 0,1023,0,255)
analogWrite(LedPin, brightness);
Serial.print(“analog”);
Serial.println(fade value);
Serial.print(“brightness”);
Serial.println(brightness);
delay(2);
}
}
