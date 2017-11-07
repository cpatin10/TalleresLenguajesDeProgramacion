
#include <iostream>
#include <vector>

using namespace std;

int
main() {

  int a, b, suma;
  vector<int> resp;
  cout << "Ingrese la lista de pares:" << endl;

  while (cin >> a >> b){
    suma = b * (b + 1) / 2 - a * (a - 1) / 2;
    resp.push_back(suma);
  }

  cout << "\nRespuesta:" << endl;
  for (int i = 0; i < resp.size(); i ++)
    cout << resp[i] << endl;

  return 0;
}
