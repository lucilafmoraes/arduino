// C++ code
//
int ledVermelho = 6;
int botao = 10;
void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{
  if(digitalRead(botao) == HIGH)
  {
    digitalWrite(ledVermelho, HIGH);
    delay(1000); 
  }
  digitalWrite(ledVermelho, LOW);
}
