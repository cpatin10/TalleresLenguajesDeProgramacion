
#include "marina.h"
#include <vector>

using namespace std;

Armada::Armada() {
  vector<Barco> barcos;
}

Armada::~Armada() {}

vector<Barco> Armada::obtenerBarcos() const {
  return barcos;
}

ArmadaMarina::ArmadaMarina() :
  Armada()
{}

ArmadaMarina::~ArmadaMarina() {}

void ArmadaMarina::registrarBarco(Barco* barcoRegistrar) {
  if (IMar* v = dynamic_cast<IMar*>(barcoRegistrar)) {
    obtenerBarcos().push_back(*barcoRegistrar);
  }
}

ArmadaFluvial::ArmadaFluvial() :
  Armada()
{}

ArmadaFluvial::~ArmadaFluvial() {}

void ArmadaFluvial::registrarBarco(Barco* barcoRegistrar) {
  if (IRio* v = dynamic_cast<IRio*>(barcoRegistrar)) {
    obtenerBarcos().push_back(*barcoRegistrar);
  }
}
