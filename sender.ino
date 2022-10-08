// Передатчик MEGA


String output;

void setup()
{
  Serial.begin(9600);
  Serial3.begin(9600);
  Serial.setTimeout(50);
  Serial3.setTimeout(50);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}

void loop()
{
  if(Serial.available())
  {
    output = Serial.readString();
    Serial3.print(output);
  }
}
