// Приемник UNO


#include <SoftwareSerial.h>
SoftwareSerial mySerial(10,11); // RX, TX

String input;

void setup()
{
  mySerial.begin(9600);
  mySerial.setTimeout(50);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  
  pinMode(A0, OUTPUT);
}

void loop()
{
  if(mySerial.available())
  {
    input = mySerial.readString();
  }
  

  if(input == "on")
  {
    tone(A0, 500);
  }
  if(input == "off")
  {
    noTone(A0);
  }
}
