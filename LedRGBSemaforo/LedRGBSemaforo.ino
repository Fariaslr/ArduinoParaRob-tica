int vermelho = 3;
int verde = 4;
int azul = 5;

void setup() {

  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() {

  // Verde
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(azul, LOW);
  delay(3000);

  // Amarelo
  analogWrite(vermelho, 255);
  analogWrite(verde, 255);
  analogWrite(azul, 0);
  delay(1500);

  // Vermelho
  digitalWrite(vermelho, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
  delay(3000);

}