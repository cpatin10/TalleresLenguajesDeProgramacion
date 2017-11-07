
#pragma once

class IEnergia {
 public:
  virtual ~IEnergia() {}
  virtual void consumir(float nivel) = 0;
  virtual void cargar(float nivel) = 0;
};

class IPrender {
 public:
  virtual ~IPrender() {}
  virtual void prender() = 0;
};

class IApagar {
 public:
  virtual ~IApagar() {}
  virtual void apagar() = 0;
};
