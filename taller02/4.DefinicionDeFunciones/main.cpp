#include "funciones.h"
#include <iostream>

using namespace std;

int main() {
  
  int a, b, c;
  cout << "Ingrese los tres números a, b y c separados por espacio: ";
  cin >> a
      >> b
      >> c;

  int resp = sumaEnt(multEnt(a, b), c);
  resp = multEnt(resp, restaEnt(a, b));
  resp = multEnt(c, resp);
  resp = sumaEnt(sumaEnt(a, b), resp);

  cout << "El resultado es: " << resp << endl;

  return 0;
}
