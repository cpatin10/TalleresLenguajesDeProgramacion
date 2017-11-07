
#include <string>
#include <iostream>

using namespace std;

int
main() {

  char c;
  int res = 0, comp;

  cout << "Ingrese los caracteres y despues el numero:" << endl;
  while (cin >> c){
    res += (int)c;
  }

  cin >> comp;

  res %= 256;

  if (!(res - comp))
    cout << "0" << endl;
  else if (res - comp < 0)
    cout << "-1" << endl;
  else
    cout << "1" << endl;  
    
  return 0;
}
