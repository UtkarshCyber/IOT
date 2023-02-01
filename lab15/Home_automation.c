#COMMAND PROMPT
Components Required :
Arduino Uno board - 1
USB Cable - 1
Bluetooth model - 1
Breadboard - 1
Jumper wires
Pin Connections :
● LED positive pin to digital 13
● LED negative pin to ground
● Bluetooth TX to arduino RX
● Bluetooth RX to arduino TX
● Bluetooth pin one pin to ground
● Bluetooth pin one pin to VCC(5V)
Code :
#include SoftwareSerial BTSerial(10, 11);
void setup()
{
Serial.begin(9600);
Serial.println("Enter AT commands:");
BTSerial.begin(38400);
}
void loop()
{
Serial.write(BTSerial.read());
BTSerial.write(Serial.read());
}
