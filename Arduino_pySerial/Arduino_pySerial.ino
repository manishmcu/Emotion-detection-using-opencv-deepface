#include <Servo.h>

Servo myservo;
int pos = 0;
int val = 0;

char serialData;
int pin=8;

void setup() {
myservo.attach(9);
//pinMode(pin,OUTPUT);
Serial.begin(9600);
myservo.write(0); 
}

void loop() {
if(Serial.available() > 0)
{
serialData = Serial.read();
Serial.print(serialData);}

if(serialData == 'N' && val > 1)
{
val = 1;
  for (pos = pos; pos >= 0; pos -= 1)
  {  myservo.write(pos); delay(15); }
  delay(1000);
}

if(serialData == 'H' && val < 2)
{
val = 2;
  for (pos = pos; pos <= 45; pos += 1) 
  { myservo.write(pos); delay(5);  }
  delay(1000);
}

if(serialData == 'H' && val > 2)
{
val = 2;
  for (pos = pos; pos >= 45; pos -= 1)
  {  myservo.write(pos); delay(5); }
  delay(1000);
}

if(serialData == 'D' && val < 3)
{
val = 3;
  for (pos = pos; pos <= 90; pos += 1) 
  { myservo.write(pos); delay(5);  }
  delay(1000);
}

if(serialData == 'D' && val > 3)
{
val = 3;
  for (pos = pos; pos >= 90; pos -= 1)
  {  myservo.write(pos); delay(5); }
  delay(1000);
}

if(serialData == 'A' && val < 4)
{
val = 4;
  for (pos = pos; pos <= 135; pos += 1) 
  { myservo.write(pos); delay(5);  }
  delay(1000);
}

else
{
//    for (pos = pos; pos >= 0; pos -= 1)
//  {  myservo.write(pos); delay(2); }
}

}
