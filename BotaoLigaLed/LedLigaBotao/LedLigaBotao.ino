const int buttonPin = 8;
const int ledPin = 3;

bool ledEstado = false;

int ultimoBotao = HIGH;

void setup() {

  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);

}

void loop() {

  int leitura = digitalRead(buttonPin);

  // Detecta clique
  if (leitura == LOW && ultimoBotao == HIGH) {

    ledEstado = !ledEstado;

    digitalWrite(ledPin, ledEstado);

    delay(200); // debounce simples
  }

  ultimoBotao = leitura;

}