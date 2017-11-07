
#pragma once
#include "inaves.h"
#include <string>

using namespace std;

class Barco {
 public:
  Barco(string id);
  virtual ~Barco();
  string obtId() const;
 private:
  string id;
};

class Portaviones : public Barco, public IMar{
 public:
  Portaviones(string id);
  ~Portaviones();
};

class Fragata : public Barco, public IMar{
 public:
  Fragata(string id);
  ~Fragata();
};

class Lancha : public Barco, public IMar, public IRio{
 public:
  Lancha(string id);
  ~Lancha();
};
