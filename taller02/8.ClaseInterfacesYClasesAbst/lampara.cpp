
#include "lampara.h"

Lampara::Lampara(bool prendida, float nivel) :
  nivel(nivel),
  prendida(prendida)
{}

Lampara::~Lampara() {}

float Lampara::obtNivelEnergia() const {
  return nivel;
}

bool Lampara::estaPrendida() const {
  return prendida;
}

void Lampara::consumir(float nivel) {
  if (this->nivel <= nivel){
    this->nivel = 0;
  }
  else {
    this->nivel -= nivel;
  }
}

void Lampara::cargar(float nivel) {
  this->nivel += nivel;
}

void Lampara::prender() {
  prendida = true;
}

void Lampara::apagar() {
  prendida = false;
}

int main() {
  return 0;
}
