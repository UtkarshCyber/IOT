Components Required :
Arduino Uno board - 1
USB Cable - 1
Resistor(110K) - 1
LED - 1
LDR- 1
Jumper wires
Pin Connections:
● One leg of LDR to 5V and another leg to Arduino Analog pin A0
● One leg of 110K register with that leg of LDR connected to A0
● Another leg of register to the ground
● Positive leg of LED to pin 11 and negative to GND
● Positive leg of PIR to 5V and negative leg to GND
● Output pin of PIR to digital pin 3
Code:

int LDR = 0;
LDRValue = 0;
int calibrationTime = 30
long unsigned int pause = 5000;
boolean lockLow = true;
boolean takeLowTime;
int pirPin = 3;
int ledPin = 11;
void setup()
{
Serial.begin(9600);
buad pinMode(11, OUTPUT);
pinMode(pirPin, INPUT);
pinMode(ledPin, OUTPUT);
digitalWrite(pirPin, LOW);
Serial.print("calibrating sensor ");
for(int i = 0; i< light_sensitivity)
{
digitalWrite(ledPin, HIGH);
if(lockLow)
{
lockLow = false;
Serial.println("---");
Serial.print("motion detected at ");
Serial.print(millis()/1000);
Serial.println(" sec");
delay(50);
}
takeLowTime = true;
}
if(digitalRead(pirPin) == LOW || LDRValue >= light_sensitivity)
{
digitalWrite(ledPin, LOW);
if(takeLowTime)
{
lowIn = millis();
takeLowTime = false;
}
if(!lockLow&&millis() - lowIn> pause)
{
lockLow = true;
Serial.print("motion ended at ");
Serial.print((millis() - pause)/1000);
Serial.println(" sec");
delay(50);
}
delay(100);
}
}
