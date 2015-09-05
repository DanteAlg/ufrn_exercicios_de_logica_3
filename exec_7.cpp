#include <iostream>

using namespace std;

int main() {
  int cont=0;

  cout << "Digite um número: ";
  cin >> cont;

  while ((cont > 0) && (cont < 10000)) {
    cout << cont << " ";
    cont = cont * 3;
  }

  cout << endl;
}
