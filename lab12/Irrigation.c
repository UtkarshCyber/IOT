Components Required :
Arduino Uno board - 1
USB Cable - 1
Min Servo Motor - 1
Moisture Sensor - 1
LED - 1
Buzzer - 1
Jumper wires
Pin Connections:
● Moisture sensor VCC to Arduino 5V
● Moisture sensor GND to Arduino GND
● Moisture sensor A0 to Arduino A0
● Servo motor VCC to Arduino 5V
● Servo motor GND to Arduino GND
● Servo Motor Signal to Arduino digital pin 9
Code:
 
#include Servo myservo;
int pos = 0;
int sensorPin = A0;
int sensorValue = 0;
void setup()
myservo.attach(9);
Serial.begin(9600);
void loop()
sensorValue = analogRead(sensorPin);
Serial.println (sensorValue);
if(sensorValue>500)
{
for (pos = 0; pos <= 180; pos += 1)
{
{
myservo.write(pos);
delay(15);
}
for (pos = 180; pos >= 0; pos -= 1)
{
myservo.write(pos);
delay(15);
}
}
delay (1000);
}
