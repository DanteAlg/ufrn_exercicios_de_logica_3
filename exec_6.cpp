#include <iostream>

using namespace std;

int main() {
  int num=0, par=0, impar=0, fim=1;
  float total, impar_float;

  while(fim != 0) {
    cout << "Digite um número: ";
    cin >> num;

    if (num > 15) {
      if (num % 2 == 0) {
        par++;
      }
      else {
        impar++;
      }

      total = par+impar;
      impar_float = impar;
    }
    else {
      cout << "Digite um número maior que 15" << endl;
    }

    cout << "Até o momento existem " << par << " Número(s) par(es) e " << impar << " Número(s) impar(es)" << endl;
    cout << "Temos então " << 100*impar_float/total << "\% são impares" << endl;

    cout << "Digite 0 para sair: " ;
    cin >> fim;
    cout << endl;
  }
}
