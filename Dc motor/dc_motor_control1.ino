void setup()
{
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  //ANTI-CLOCKWISE
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(3, LOW);
  delay(2000);
  //STOP
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  delay(2000);
  //CLOCKWISE
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(2000);
  //STOP
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  delay(2000);
  //OPPOSITE_DIRECTION
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, HIGH);
  delay(2000);
  //STOP
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  delay(2000);

}