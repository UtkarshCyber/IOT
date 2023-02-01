#define ledPin 13
int state = 0;
void setup()
{
pinMode(ledPin, OUTPUT);
digitalWrite(ledPin, LOW);
Serial.begin(38400);
}
void loop()
{
if(Serial.available() > 0)
if (state == '0')
{
digitalWrite(ledPin, LOW);
Serial.println("LED: OFF");
state = 0;
}
else if (state == '1')
{
digitalWrite(ledPin, HIGH);
Serial.println("LED: ON");;
state = 0;
}
}
