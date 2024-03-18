float valorSeno;
int frequencia;
int buzzer = 4;

void setup()
{
pinMode(buzzer, OUTPUT);
}
void loop()
{
  for (int x = 0; x<180; x++)
  {

valorSeno = (sin(x*(3.1416/180)));
for(int number = 1000; number<20000; number = number + 1000){  
frequencia = number +(int(valorSeno*1000));
tone(buzzer, frequencia);

delay(number);
}

  
  }
}
