Components Required :
Arduino Uno board - 1
Resistor - 1
USB Cable - 1
LED - 1
Breadboard -1
LDR - 1
Jumper wires
Pin Connections :
● LED positive pin to digital pin 13
● LED negative pin to ground
● Positive leg of LDR to A0
● Negative leg of LDR to 5V
● Resistor negative leg to ground
● Resistor positive leg to 5V
Code :
int value = 0;
void setup()
{
pinMode(11, OUTPUT);
pinMode(A0, INPUT);
Serial.begin(9600);
}
void loop()
{
value = analogRead(A0);
if(value < 50 );
{
digitalWrite(11,HIGH)
Serial.println(“Light in ON”);
Serial.print(value);
}
else
{
digitalWrite(11,LOW)
Serial.println(“Light in OFF”);
Serial.print(value);
}
}
