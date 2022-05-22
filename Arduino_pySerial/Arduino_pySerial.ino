char serialData;
int pin=8;

void setup() {
pinMode(pin,OUTPUT);
Serial.begin(9600);
}

void loop() {
if(Serial.available() > 0)
{
serialData = Serial.read();
Serial.print(serialData);}

if(serialData == 'H')
{digitalWrite(pin,HIGH);
delay(100);}
else
{digitalWrite(pin,LOW);}

}
