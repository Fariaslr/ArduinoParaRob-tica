int vermelho = 3;
int verde = 4;
int azul = 5;

void setup() {

  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);

}

void loop() {

  // Vermelho
  digitalWrite(vermelho, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(azul, LOW);
  delay(1000);

  // Verde
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  digitalWrite(azul, LOW);
  delay(1000);

  // Azul
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, LOW);
  digitalWrite(azul, HIGH);
  delay(1000);

  // Roxo
  digitalWrite(vermelho, HIGH);
  digitalWrite(verde, LOW);
  digitalWrite(azul, HIGH);
  delay(1000);

  // Branco
  digitalWrite(vermelho, HIGH);
  digitalWrite(verde, HIGH);
  digitalWrite(azul, HIGH);
  delay(1000);

}