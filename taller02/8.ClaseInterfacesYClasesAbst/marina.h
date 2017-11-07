
#pragma once

#include "barcos.h"
#include <vector>

using namespace std;

class Armada {
 public:
  Armada();
  virtual ~Armada();
  vector<Barco> obtenerBarcos() const;
  virtual void registrarBarco(Barco* barcoRegistrar) = 0;
 private:
  vector<Barco> barcos;
};

class ArmadaMarina : public Armada {
 public:
  ArmadaMarina();
  ~ArmadaMarina();
  void registrarBarco(Barco* barcoRegistrar);
};

class ArmadaFluvial : public Armada {
 public:
  ArmadaFluvial();
  ~ArmadaFluvial();
  void registrarBarco(Barco* barcoRegistrar);
};
