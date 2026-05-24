const int buttonPin = 8;
const int ledRed = 3;
const int ledGreen = 5; 
const int ledBlue = 6;  

bool ledEstado = false;
int ultimoBotao = HIGH;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop() {
  // Verifica se o botão foi pressionado
  checarBotao();

  // Se o estado for ligado, roda o efeito das cores
  if (ledEstado == true) {
    
    // 1. De Vermelho para Verde
    for (int i = 0; i <= 255 && ledEstado; i++) {
      analogWrite(ledRed, 255 - i);
      analogWrite(ledGreen, i);
      analogWrite(ledBlue, 0);
      delayComChecagem(10); // Substitui o delay comum para não travar o botão
    }

    // 2. De Verde para Azul
    for (int i = 0; i <= 255 && ledEstado; i++) {
      analogWrite(ledRed, 0);
      analogWrite(ledGreen, 255 - i);
      analogWrite(ledBlue, i);
      delayComChecagem(10);
    }

    // 3. De Azul para Vermelho
    for (int i = 0; i <= 255 && ledEstado; i++) {
      analogWrite(ledRed, i);
      analogWrite(ledGreen, 0);
      analogWrite(ledBlue, 255 - i);
      delayComChecagem(10);
    }

  } else {
    // Se ledEstado for false, desliga todas as cores
    analogWrite(ledRed, 0);
    analogWrite(ledGreen, 0);
    analogWrite(ledBlue, 0);
  }
}

// Função isolada para checar o clique do botão a qualquer momento
void checarBotao() {
  int leitura = digitalRead(buttonPin);
  
  if (leitura == LOW && ultimoBotao == HIGH) {
    ledEstado = !ledEstado;
    delay(50); // Um pequeno "debounce" para evitar falsos cliques do botão físico
  }
  
  ultimoBotao = leitura;
}

// Um delay inteligente: ele espera o tempo passar, mas continua checando o botão!
void delayComChecagem(int milissegundos) {
  for (int i = 0; i < milissegundos; i++) {
    checarBotao();
    delay(1); 
  }
}