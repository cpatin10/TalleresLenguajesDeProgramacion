
#include <iostream>

using namespace std;

int
main() {
  //se declaran 4 valores enteros.
  int a;
  int b;
  int suma;
  int diff;

  //los enteros a y b son leídos de la terminal
  cin >> a;
  cin >> b;

  //Se definen suma como la suma de a y b y se evalua dicha expresión.
  //Si el resultado es diferente a cero, la expresión es verdadera por lo que, teniendo en cuenta que se usa un "or", se entra directamente al if sin evaluar la siguiente expresión y no se define diff. Diff es una variable local y puede terminar imprimiendo un valor al azar.
  //Por el contrario, si el resultado es cero la expresión es falsa de manera que prosigue a evaluar la siguiente. En este caso diff se alcanza a definir, de modo que si es cero pasa al else y si es otro número entra al if.
  if ((suma = a + b) || (diff = a - b)) {
    cout << "suma: " << suma << " resta: " << diff << endl;
  }
  else {
    cout << "suma: " << suma << " resta: " << diff << endl;
  }

  return 0;
}
