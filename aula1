//exemplo 1 - usando potenciometro para fazer leituras analogicas

#define pinoSensor A0 //define entrada analogica A0 
int valorSensor = 0; //variavel inteiro igual a zero
float voltagem; //variavel numero fracionario
void setup()
{
  Serial.begin(9600); //monitor serial - velocidade 9600 bits por segundo
  delay(100); //atraso de 100 milisegundos
}

void loop()
{
	valorSensor = analogRead(pinoSensor); //leitura da entrada analogica A0
  	voltagem = valorSensor * (5.0 / 1024) // caluclulo da tensao
    	Serial.print("tensão do potenciometro: "); //imprime no monitor serial
  	Serial.printIn(voltagem); // imprime a tensao
  	serial.print("valor: "); //imprime no monitor serial
  	Serial.printIn(valorSensor); //imprime o valor
   	delay(1500); //atraso de 1500 milisegundos
