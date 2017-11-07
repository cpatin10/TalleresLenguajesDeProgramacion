#include <iostream>
#include "difusores.h"

using namespace std;

Difusor::Difusor(float anguloDifusion) :
  anguloDifusion(anguloDifusion)
{}

Difusor::~Difusor() {}

float Difusor::obtAnguloDifusion() const {
  return anguloDifusion;
}

void Difusor::estAnguloDifusion(float anguloDifusion) {
  this->anguloDifusion = anguloDifusion;
}

DifusorCentral::DifusorCentral(float anguloDifusion, float difusorCentral) :
  Difusor(anguloDifusion),
  difusorCentral(difusorCentral)
{}

DifusorCentral::~DifusorCentral() {}

void DifusorCentral::establecerDifusorCentral(float difusorCentral) {
  this->difusorCentral = difusorCentral;
}

bool DifusorCentral::potenciaDifusion(float potencia) {
  return !(difusorCentral + obtAnguloDifusion() - potencia);
}

DifusorBivalente::DifusorBivalente(float anguloDifusion, float anguloPos) :
  Difusor(anguloDifusion),
  anguloPos(anguloPos)
{}

DifusorBivalente::~DifusorBivalente() {}

void DifusorBivalente::estAnguloPost(float anguloPost) {
  anguloPos = anguloPost;
}

float DifusorBivalente::obtAnguloPost() const {
  return anguloPos;
}

DifusorBivalenteCentral::DifusorBivalenteCentral(float anguloDifusion, float anguloPos, float difusorBiC) :
  DifusorBivalente(anguloDifusion, anguloPos),
  difusorBiC(difusorBiC)
{}

DifusorBivalenteCentral::~DifusorBivalenteCentral() {}

void DifusorBivalenteCentral::establecerDifusorBiC(float difusorBiC) {
  this->difusorBiC = difusorBiC;
}

bool DifusorBivalenteCentral::potenciaDifusion(float potencia) {
  return !(obtAnguloPost() + obtAnguloDifusion() - 2 * (difusorBiC - potencia));
}
