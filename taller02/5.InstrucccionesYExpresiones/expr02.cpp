
#include <iostream>
#include <algorithm>

using namespace std;

int
main() {

  int a, b, c;
  cout << "Ingrese los tres valores enteros separados por un espacio: "
       << endl;
  cin >> a
      >> b
      >> c;

  int mayor = max(a, max(b, c));
  int menor = min(a, min(b, c));
  int medio = a + b + c - mayor - menor;

  cout << "De menor a mayor:" << "\n"
       << menor << " "
       << medio << " "
       << mayor << endl;
  
  return 0;
}
