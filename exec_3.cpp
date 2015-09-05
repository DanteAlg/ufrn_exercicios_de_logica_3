#include <iostream>

using namespace std;

int main() {
  int fim=0, num;

  while(fim != -4) {
    cout << "Digite um número real positivo: ";
    cin >> num;

    if (num > 0) {
      if (num > 15) {
        cout << "Quadrado é: " << num*num << endl;
      }
      else {
        cout << "Número menor que 15" << endl;
      }

      cout << "Digite -4 para sair: ";
      cin >> fim;
      cout << endl;
    }
    else {
      cout << "O número passado é negativo! Tente novamente" << endl;
    }
  }
}
