#include <iostream>

using namespace std;

int main() {
  int num=0, fim=1;

  while(fim != 0) {
    cout << "Digite um número inteiro: ";
    cin >> num;
    cout << endl;

    if ((num%3==0) && (num%7==0)) {
      cout << "Número é multiplo de 3 e 7";
    }
    else if (num%3==0) {
      cout << "Número é multiplo de 3";
    }
    else if (num%7==0) {
      cout << "Número é multiplo de 7";
    }
    else {
      cout << "Número não é multiplo por 3 ou 7";
    }
    cout << endl;

    cout << "Digite 0 para sair: ";
    cin >> fim;
    cout << endl;
  }
}
