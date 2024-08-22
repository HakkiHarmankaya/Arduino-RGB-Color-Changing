int pot = 0;
int lamba;
void setup()
{
  pinMode(A0, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}
void loop()
{
  pot = map(analogRead(A0), 0, 1023, 0, 4);
  lamba = analogRead(A0);
  if (pot == 0)
  {
    analogWrite(5, 255);
    analogWrite(6, 0);
    analogWrite(7, 0);
  }
  else if (pot == 1)
  {
    analogWrite(5, 0);
    analogWrite(6, 255);
    analogWrite(7, 0);
  } 
  else if (pot == 2)
  {
    analogWrite(5, 0);
    analogWrite(6, 0);
    analogWrite(7, 255);
  }
  else  if (pot == 3)
  {
    analogWrite(5, 255);
    analogWrite(6, 0);
    analogWrite(7, 255);
  }
  else
  {
    analogWrite(5, 255);
    analogWrite(6, 255);
    analogWrite(7, 255);
  }
}
