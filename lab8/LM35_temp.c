Components Required :
Arduino Uno board - 1
USB Cable - 1
LED - 1
Temperature Sensor - 1
Jumper wires
Pin Connections :
● Center leg of Temperature sensor to A0.
● Right leg of Temperature sensor to 5V.
● Left leg of Temperature sensor to ground.
● Led positive leg to ground
Code :

int OutPin = 0;
void setup()
{
Serial.begin(9600);
}
void loop()
{
int rowvoltage = analogRead(OutPin);
float millivolts = (rowvoltage/1024.0)*5000;
float celsius = millivolts/10;
Serial.print(celcius);
Serial.println(" degree celsius");
Serial.println((celcius*9)/5+32);
Serial.println(" degree Fahrenheit");
delay(1000);
