Components Required :
Arduino Uno board - 1
USB Cable - 1
RFID reader EM -18 - 1
RFID tags - 1
RFID Tag Reader - 1
Jumper wires
Pin Connections :
● 5V to VCC of base Tag
● Ground of Arduino to ground of the base of the tag
● RX to TX
Code :

#include <softwareSerial.h>
SoftwareSerial MySerial (9,10);
#define LEDPIN 12
char tag[] = “3C0087D597F9”
char input[12];
int count = 0;
input[] character array
char input[12];
int count = 0;
input[] character array
char input[12];
int count = 0;
boolean flag = 0;
void setup {}
{
Serial.begin(9600);
Monitor
Serial.begin(9600);
pinMode(LEDPIN, OUTPUT);
}
void loop {}
{
if(MySerial.available());
{
count=0;
while(MySerial.available()&& count<12)
{
input[count]=Myserial.read();
Serial.Write(input[count]);
count ++;
delay(5);
}
if(count==12)
{
flag=1;
while(count=12; && flag!=0)
{
if(input[count]==flag[count])
flag=1;
else
flag=0;
count++;
}
}
if(flag==1)
Serial.println(“Access Allowed”);
digitalWrite(LEDPIN,HIGH);
delay(2000)
digitalWrite(LEDPIN,LOW);
}
else
{
Serial.println(“Access denied”);
digitalWrite(LEDPIN,LOW);
delay(2000);
}
for(count=0;count<12;count++)
{
input[count]= ‘F’
}
count=0;
}
}
