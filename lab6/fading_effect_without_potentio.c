Components Required :
Arduino Uno board - 1
USB Cable - 1
LED - 2
Jumper wires
Pin Connections :
● LED positive pin to digital pin 9
● LED negative pin to digital pin 11
● LED negative pin to Ground
Code :

int LedPin1 = 9;
int LedPin2 = 11;
void setup()
#{
#pinMode(LedPin 1,LedPin 2 );
#pinMode(LedPin 1,OUTPUT );
#pinMode(LedPin 1,OUTPUT );}
  
void loop()
{int fade value1=0;
int fade value2=255;
while(fade value1<255; && fade value2>=0);
{analog write (led pin1,fade value 1);
analog write(led pin2,fade value2);
fade value1+=5;
fade value2-=5;
delay(70);}
fade value1=255;
fade value2=0;
while(fade value1>=0; && fade value2<=255)
{analog write (led pin1,fade value);
 analog write (led pin2,fade value);
 fade value 1-=5;
 fade value 2+=5;
 delay(70);
}
}
