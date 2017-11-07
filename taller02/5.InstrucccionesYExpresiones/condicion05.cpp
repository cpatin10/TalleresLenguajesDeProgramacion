
#include <iostream>

using namespace std;

int
main() {

  int a, b, c;
  cout << "Ingrese las longitudes de los lados separadas por espacios:"
       << endl;
  cin >> a
      >> b
      >> c;

  int d1 = a - b, d2 = b - c, d3 = a - c;

  if (d1 && d2 && d3)
    cout << "Triángulo escaleno" << endl;
  else if (!d1 && !d2 && !d3)
    cout << "Triángulo equilatero" << endl;
  else
    cout << "Triángulo isóceles" << endl;

  return 0;
}
	  
