2. Call to a particular number on an alert
Aim : Call a specified mobile number mentioned in the program using Arduino and
GSM Module when a flame sensor detects “fire”.
Connections for flame sensor:
Arduino to Flame Sensor
5V to VCC
GND to GND
Code :
#include SoftwareSerialcell(2,3);
void setup()
{
cell.begin(9600);
delay(500);
Serial.begin(9600);
}
void loop()
{
int val=analogRead(A0);
Serial.println(val);
delay(1000);
if (val<50)
{
Serial.println(“Calling…......... ”);
cell.println(“ATD+;”);
delay(10000);
cell.println(“ATH”);
}
}
