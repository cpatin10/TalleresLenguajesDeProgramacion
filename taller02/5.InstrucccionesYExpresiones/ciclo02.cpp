//Como se explico en ciclo02.cpp si se implementa i++ se llega hasta "veces: 10" mientras que con ++i se llega hasta "veces: 9". Esto se debe a que con i++ se evalua primero la expresión y luego se hace el incremento, contrario a lo q ocurre con ++i (primero el incremento y luego se evalua la expresión).

#include <iostream>

using namespace std;

const int N = 10;

int main() {
  int i;

  i = 0;
  while ((i++ < N)) {
    cout << "veces: " << i << endl;
  }

  cout << i << endl;
  return 0;
}
