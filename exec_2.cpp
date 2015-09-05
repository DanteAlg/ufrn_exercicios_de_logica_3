#include <iostream>

using namespace std;

int main() {
  int fim=1, num;

  while(fim != 0) {
    cout << "Digite um número qualquer: ";
    cin >> num;
    cout << endl;

    cout << "O quadrado do seu número é: " << num*num << endl;
    cout << "Digite 0 para sair: ";
    cin >> fim;

    cout << endl;
  }
}
