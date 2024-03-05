// C++ code
//
int ledVermelho = 11;
int ledVerde = 3;
int ledAmarelo = 6;
int botao = 8;
int ledBranco = 12;
void setup()
{
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledBranco,OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{
   if(digitalRead(botao) == HIGH){
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledBranco, HIGH);
    delay(100); // Wait for 1000 millisecond(s)
  }
  digitalWrite(ledVermelho, LOW);
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledAmarelo, LOW);
  digitalWrite(ledBranco, LOW);
  delay(100); // Wait for 1000 millisecond(s)
}

