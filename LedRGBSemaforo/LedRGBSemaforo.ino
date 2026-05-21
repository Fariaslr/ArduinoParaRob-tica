int vermelho = 3;
int amarelo = 4;
int verde = 5;

void setup() {

  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {

  // Verde
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, LOW);
  digitalWrite(verde, HIGH);  
  delay(10000);

  // Amarelo
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);  
  delay(5000);   

  // Vermelho
  digitalWrite(vermelho, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(amarelo, LOW);
  delay(10000);
  

}