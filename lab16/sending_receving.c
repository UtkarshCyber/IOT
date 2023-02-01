3. Sending and Receiving Message
Aim:
1) Send SMS using Arduino and GSM Module – to a specific mobile number inside the
program
2) 2) Receive SMS using Arduino and GSM Module – to the SIM card loaded in the
GSM Module. Program: Note: According to the code, messages will be sent and
received when ‘s’ and ‘r’ are pressed through the serial monitor respectively.
Code :
#include SoftwareSerial mySerial(2, 3);
void setup()
{
mySerial.begin(9600);
Serial.begin(9600);
delay(100);
}
void loop()
{
if (Serial.available()>0)
switch(Serial.read())
{
case 's': SendMessage();
break;
case 'r': ReceiveMessage();
break;
}
if (mySerial.available()>0)
Serial.write(mySerial.read());
}
voidSendMessage()
{
mySerial.println("AT+CMGF=1");
delay(1000);
mySerial.println("AT+CMGS=\"+919742980606\"\r");
delay(1000);
mySerial.println("I am SMS from GSM Module");
delay(100);
mySerial.println((char)26);
delay(1000);
}
void ReceiveMessage()
{
mySerial.println("AT+CNMI=2,2,0,0,0");
delay(1000);
}
