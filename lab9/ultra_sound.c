Arduino Uno board - 1
USB Cable - 1
LED - 1
HC - SR04 - 1
Jumper wires
Pin Connections :
● Pin connected to digital Pin 7
● Pin connected to analog pin 6, VCC
● Pin connected to ground
Code :

const int pingPin = 7;
const int echoPin = 6;
void setup()
{
Serial.begin(9600);
pinMode(pingPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(13,OUTPUT);
}
void loop()
{
long duration, inches, cm;
digitalWrite(pingPin, LOW);
delayMicroseconds(2);
digitalWrite(pingPin, HIGH);
delayMicroseconds(10);
digitalWrite(pingPin, LOW);
duration = pulseIn(echoPin, HIGH);
inches = microsecondsToInches(duration);
cm = microsecondsToCentimeters(duration);
if(cm < 300)
{
digitalWrite(13,HIGH);
}
else
{
digitalWrite(13,LOW);
}
Serial.print(inches);
Serial.print("in, ");
Serial.print(cm);
Serial.print("cm");
Serial.println();
delay(100);
}
long microsecondsToInches(long microseconds)
{
return microseconds / 74 / 2;
}
long microsecondsToCentimeters(long microseconds)
{
return microseconds / 29 / 2;
}
