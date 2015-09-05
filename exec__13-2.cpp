#include <iostream>

using namespace std;

int main() {
  int num1, num2, maior, menor, mdc;

  cout << "Digite o primeiro número: ";
  cin >> num1;
  cout << endl;

  cout << "Digite o segundo número: ";
  cin >> num2;
  cout << endl;

  if (num1 > num2) {
    maior = num1;
    menor = num2;
  }
  else {
    maior = num2;
    menor = num1;
  }

  while(maior%menor != 0) {
    mdc = maior%menor;
    maior = menor;
    menor = mdc;
  }

  cout << "MDC dos números " << num1 << " e " << num2 << " é " << mdc << endl;
}
