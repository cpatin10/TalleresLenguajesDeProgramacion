//En la ejecución del ciclo se observa que se define x desde 0 con un incremento de 5 por ciclo. Además entra al ciclo mientras que sea menor a la suma de "x + y", esto es 30. Dentro del ciclo se llama un metodo nada, que, valga la redundancia, hace nada. De este modo se tiene que "z" y "y" no van a cambiar y al final se imprimen como 10 y 20, respectivamente. Por su parte x llega hasta 30, pues cuando alcanza este valor es igual a la suma indicada y por ende se da la salida del ciclo.

#include <iostream>

using namespace std;

void nada() {};

int main() {
  int x, y = 10, z = 20;

  for (x = 0; x < z + y; x += 5) {
    nada();
  }

  cout << "x: " << x
       << " y: " << y
       << " z: " << z << endl;

  return 0;
}
