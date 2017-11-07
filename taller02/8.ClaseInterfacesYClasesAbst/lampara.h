
#pragma once

#include "interfaces.h"

class Lampara : public IEnergia, public IPrender, public IApagar {
 public:
  Lampara(bool prendida, float nivel);
  ~Lampara();
  float obtNivelEnergia() const;
  bool estaPrendida() const;
  void consumir(float nivel);
  void cargar(float nivel);
  void prender();
  void apagar();
  float nivel;
 private:
  bool prendida;
};
