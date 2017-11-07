
#include <iostream>

using namespace std;

int
main(){

  int a, b;
  cout << "Ingrese los dos valores enteros:" << endl;
  cin >> a
      >> b;

  cout << ((a && b)?"Los valores son diferentes a 0":"Hay por lo menos un valor igual a 0") << endl;

  return 0;
}
