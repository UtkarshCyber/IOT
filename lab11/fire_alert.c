Components Required :
Arduino Uno board - 1
USB Cable - 1
Flame Sensor - 1
LED - 1
Buzzer - 1
Jumper wires
Pin Connections:
● Flame sensor interfacing to Arduino
● Flame sensor to Arduino 5V -> 5V
● ground -> ground
● A0 -> A0
● Led interfacing to Arduino
● LED +ve is connected to 9th pin of Arduino
● LED -ve is connected to ground pin of arduino
● Buzzer interfacing to Arduino
● Buzzer +ve is connected to 12th pin of Arduino
● Buzzer -ve is connected to GND pin of Arduino
Code:

int sensorPin = A0;
int sensorValue = 0;
int led = 9;
void setup()
{
pinMode(led, OUTPUT);
pinMode(buzzer,OUTPUT);
Serial.begin(9600);
}
void loop()
{
Serial.println("Welcome to TechPonder Flame Sensor Tutorial");
sensorValue = analogRead(sensorPin);
Serial.println(sensorValue);
if (sensorValue < 100)
{
Serial.println("Fire Detected");
Serial.println("LED on");
digitalWrite(led,HIGH);
digitalWrite(buzzer,HIGH);
delay(1000);
}
digitalWrite(led,LOW);
digitalWrite(buzzer,LOW);
delay(sensorValue);
}
