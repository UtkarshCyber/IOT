Pin Connections :
● Output 1 to Pin 4 ( Arduino Board )
● Output 2 to Pin 5
● Output 3 to Pin 6
● Output 4 to Pin 7
● Bluetooth Module Tx to Pin 0
● Bluetooth Module Rx to Pin 1
● VCC of Bluetooth & relay should be connected to Arduino 5V(through breadboard)
● GND of Bluetooth & relay should be connected to Arduino GND
Code :
char val;
int ledpin = 2;
void setup()
pinMode(ledpin = 2, OUTPUT);
pinMode(ledpin = 3, OUTPUT);
pinMode(ledpin = 4, OUTPUT);
pinMode(ledpin = 5, OUTPUT);
Serial.begin(9600);
void loop()
if( Serial.available()
;
val = Serial.read();
if( val == 'a' )
digitalWrite(ledpin = 2, HIGH);
if( val == 'A' )
digitalWrite(ledpin = 2, LOW);
}
if( val == 'b' )
{
digitalWrite(ledpin = 3, HIGH);
}
if( val == 'B' )
{
digitalWrite(ledpin = 3, LOW);
}
if( val == 'C' )
{
digitalWrite(ledpin=4, LOW);
}
if( val == 'D' )
{
digitalWrite(ledpin=5, LOW);
}
if( val == 'c' )
{
digitalWrite(ledpin = 4, HIGH);
}
if( val == 'd' )
{
digitalWrite(ledpin = 5, HIGH);
}
}
