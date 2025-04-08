// C++ code
//
void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  delay(2000); // Ligado por 2000 millisecond (2seg)(s)
  digitalWrite(9, LOW);
  delay(1000); // Apagado por 1000 millisecond (1seg)(s)
  
  digitalWrite(10, HIGH);
  delay(3000); // Ligado por 3000 millisecond (3seg)(s)
  digitalWrite(10, LOW);
  delay(1000); // Apagado por 1000 millisecond (1seg)(s)
  
  digitalWrite(11, HIGH);
  delay(4000); // Ligado por 4000 millisecond (4seg)(s)
  digitalWrite(11, LOW);
  delay(1000); // Apagado por 1000 millisecond (1seg)(s)
  
  digitalWrite(12, HIGH);
  delay(5000); // Ligado por 5000 millisecond (5seg)(s)
  digitalWrite(12, LOW);
  delay(1000); // Apagado por 1000 millisecond (1seg)(s)
}
