#include <iostream>

using namespace std;

int main() {
  int num1, num2, mdc, cont=2;

  cout << "Digite o primeiro número: ";
  cin >> num1;
  cout << endl;

  cout << "Digite o segundo número: ";
  cin >> num2;
  cout << endl;

  while((cont <= num1) && (cont <= num2)) {
    if ((num1%cont == 0) && (num2%cont == 0)) {
      mdc = cont;
    }

    cont++;
  }

  cout << "MDC dos números " << num1 << " e " << num2 << " é " << mdc << endl;
}
