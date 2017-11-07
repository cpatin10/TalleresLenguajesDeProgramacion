
#include <iostream>

using namespace std;

int
main() {

  char col;
  int fil;
  cout << "Ingrese la casilla deseada:" << endl;
  cin >> col
      >> fil;

  if (!((col + fil) % 2))
    cout << "Casilla blanca" << endl;
  else
    cout << "Casilla negra" << endl;
    
  return 0;
}
