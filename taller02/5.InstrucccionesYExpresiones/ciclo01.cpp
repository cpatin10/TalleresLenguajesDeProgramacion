//En la expresión del ciclo se tiene un ++i, que en este caso sería diferente a un i++, por este motivo podría existir algo de confusión, pues con este último se evalua primero la expresión y después se hace al aumento, de modo que cuando i es 9, se toma la expresión como verdadera y se aumenta i a 10, imprimiendo hasta "veces: 10". Con ++i soloo se llega a "veces: 9"

#include <iostream>

using namespace std;

const int N = 10;

int main() {
  int i;

  i = 0;
  while ((++i < N)) {
    cout << "veces: " << i << endl;
  }

  cout << i << endl;
  return 0;
}
