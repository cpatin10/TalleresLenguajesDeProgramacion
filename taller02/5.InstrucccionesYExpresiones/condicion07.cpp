
#include <iostream>

using namespace std;

int
main() {

  string s;
  int comp, res = 0;

  cout << "Ingrese la cadena de caracteres y el numero" << endl;
  cin >> s
      >> comp;

  for (int i = 0; i < s.length(); ++i)
    res += (int)s[i];
  res %= 256;

  if (!(res - comp))
    cout << "0" << endl;
  else if (res - comp < 0)
    cout << "-1" << endl;
  else
    cout << "+1" << endl;  

  return 0;
}
