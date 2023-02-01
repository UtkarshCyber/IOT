Components Required :
Arduino Uno board - 1
USB Cable - 1
GSM module - 1
Android Phone - 1
Airtel SIM card - 1
Breadboard - 1
Flame Sensor(For flame sensor program) - 1
Jumper wires
Pin Connections:
• GSM Tx –>Arduino Rx (Here pin 2)
• GSM Rx –>ArduinoTx. (Here pin 3)
• Make the ground common between Arduino and GSM modem
1. GSM Module: Call to a particular number
Aim : Call using Arduino and GSM Module – to a specific mobile number inside the
program.
Code :
#include SoftwareSerial cell(2,3);
void setup()
{
cell.begin(9600);
delay(500);
Serial.begin(9600);
Serial.println("CALLING......... ");
cell.println("ATD+9538433364;");
}
void loop()
}
