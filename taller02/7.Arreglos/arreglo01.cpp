
#include <iostream>

using namespace std;

int
main(void) {
  const int N = 5;
  int a1[N * 2];
  int a2[N];

  cout << "Lea 5 elementos del arreglo a1" << endl;
  for (int i = 0; i < N; i++){
    cout << "Leyendo valor a1[" << i << "]" << endl;
    cin >> a1[i];
  }

  cout << "Lea 5 elementos del arreglo a2" << endl;

  for (int i = 0; i < N; i++){
    cout << "Leyendo valor a2[" << i << "]" << endl;
    cin >> a2[i];
  }

  cout << "Concatenacionn de a1 y a2 en a1" << endl;

  for (int i = 0; i < N; i++)
    a1[i+N] = a2[i];

  for (int i = 0; i < N * 2; i++)
    cout << a1[i] << " ";

  cout << "\n" << endl;

  return 0;
}
