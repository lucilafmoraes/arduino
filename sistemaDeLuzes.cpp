// C++ code
//
int ledVermelho = 11;
int ledVerde = 3;
int ledAmarelo = 6;
int botao = 8;
int ledBranco = 12;
int i;
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
  if(digitalRead(botao)){
    for(i=0; i<= 5; i++){
      digitalWrite(ledVerde, HIGH);
      delay(200);
      digitalWrite(ledVerde, LOW);
      delay(200);
      }
    for(i=0; i<= 3; i++){
      digitalWrite(ledAmarelo, HIGH);
      delay(100);
      digitalWrite(ledAmarelo, LOW);
      delay(100);
    }
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledBranco, HIGH);
  }
}

