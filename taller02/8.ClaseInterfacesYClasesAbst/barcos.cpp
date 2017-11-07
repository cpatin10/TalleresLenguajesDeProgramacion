
#include "barcos.h"

using namespace std;

Barco::Barco(string id) :
  id(id)
{}

Barco::~Barco() {}

string Barco::obtId() const {
  return id;
}

Portaviones::Portaviones(string id) :
  Barco(id)
{}

Portaviones::~Portaviones() {}

Fragata::Fragata(string id) :
  Barco(id)
{}

Fragata::~Fragata() {}

Lancha::Lancha(string id) :
  Barco(id)
{}

Lancha::~Lancha() {}


