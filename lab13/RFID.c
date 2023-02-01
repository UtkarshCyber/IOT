Components Required :
Arduino Uno board - 1
USB Cable - 1
RFID reader module - 1
RFID tags - 1
Jumper wires
Pin Connections:
● Arduino ground to RFID ground
● TX(RFID) to 9(RX) arduino
● VCC USB Port to 12 RFID reader
Code:

void setup()
{
Serial.begin(9600);
}
void loop()
{
if(Serial.available()>0)
{
Serial.write(Serial.read());
}
}
#define LEDPIN 12
char tag[] ="3C0087D597F9";
char input[12];
int count = 0;
flag = 0;
void setup()
{
Serial.begin(9600);
mySerial.begin(9600);
pinMode(LEDPIN,OUTPUT);
}
void loop() { if(mySerial.available
{
count = 0;
while(mySerial.available() && count < 12)
{
input[count] = mySerial.read();
Serial.write(input[count]);
count++;
delay(5);
}
if(count == 12)
{
count= 0;
flag=1;
while(count);
}
