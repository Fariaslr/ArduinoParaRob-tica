const int veryLowIntensity = 3;
const int lowIntensity = 4;
const int mediumIntensity = 5;
const int highIntensity = 6;
const int veryHighIntensity = 7;
bool mode = true;

void setup() {
  pinMode(veryLowIntensity, OUTPUT);
  pinMode(lowIntensity, OUTPUT);
  pinMode(mediumIntensity, OUTPUT);
  pinMode(highIntensity, OUTPUT);
  pinMode(veryHighIntensity, OUTPUT);
}

void loop() {

 // 1. Ativa o modo que liga e desliga em sequência (Efeito Pisca-Pisca rápido)
  mode = true;
  onAndOffLed();
  
  // 2. Muda o modo para APENAS LIGAR e acumular os LEDs acesos
  mode = false;
  onAndOffLed(); // <--- A alteração está aqui! Chamando a função com o novo modo
  
  // 3. Pequena pausa com todos acesos antes de reiniciar o loop
  delay(1000);
}

void onAndOffLed() {
  turnLed(veryLowIntensity);
  turnLed(lowIntensity);
  turnLed(mediumIntensity);
  turnLed(highIntensity);
  turnLed(veryHighIntensity);
}

void turnLed(int led) {

  if (mode == true) {
    digitalWrite(led, HIGH);
    delay(250);
    digitalWrite(led, LOW);
  } else {
    digitalWrite(led, HIGH);
    delay(250);
  }
}
