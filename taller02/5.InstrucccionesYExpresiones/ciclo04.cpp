// Como ya se explicó en el ciclo03.cpp, en el ciclo for, a diferencia del ciclo while, el incremento se da al final de cada ejecución del ciclo, antes de evaluar la expresión de paro. Por este motivo, en este caso se inicia en "veces: 0" hasta llegar a "veces: 9". Y por este motivo no hay diferencia en la ejecución del código.

#include <iostream>

using namespace std;

const int N = 10;

int main() {
  int i;

  i = 0;
  for (i = 0; i < N; ++i){
    cout << "veces: " << i << endl;
  }

  cout << i << endl;
  return 0;
}
