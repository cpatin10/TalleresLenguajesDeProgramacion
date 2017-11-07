
#include "funciones.h"
#include <iostream>

using namespace std;

int mcd(int a, int b){
  if (b == 0)
    return a;
  return mcd(b, a % b);
}

void simpFrac(int &num, int &dem){
  int div = mcd(num, dem);
  cout << num/div << "/" << dem/div << endl;
}

int
main(){
  
  int a, b;
  cout << "igrese los dos numeros a los que les quiere sacar el maximo coumun divisor" << endl;
  cin >> a
      >> b;
  cout << mcd(a, b) << endl;

  cout << "ingrese la fraccion a simplificar (numerador y denominador separados por espacio" << endl;
  cin >> a
      >> b;
  simpFrac(a, b);
  
  return 0;
}
