#include "SevSeg.h"
SevSeg setSeg;

unsigned long tempoAnterior = 0;
const long intervalo = 2000;
int contador = 0;

void setup()
{
  byte numDigitos = 1;
  byte digitPinos[] = {};
  byte pinosDisplay[] = {3, 2, 8, 7, 6, 4, 5, 9};
  bool resistoresSegmentos = true;

  setSeg.begin(COMMON_CATHODE, numDigitos, digitPinos, pinosDisplay, resistoresSegmentos);

  setSeg.setBrightness(100);
}

void loop()
{ 
  unsigned long tempoAtual = millis();


  if (tempoAtual - tempoAnterior >= intervalo) {
    tempoAnterior = tempoAtual; 
    
    contador++;
    if (contador > 9) {
      contador = 0;
    }
    
    setSeg.setNumber(contador); 
  }

  setSeg.refreshDisplay(); 
}