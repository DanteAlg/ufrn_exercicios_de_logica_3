#include <iostream>

using namespace std;

int main() {
  int dia=-1;

  while((dia <= 0) || (dia > 30)) {
    cout << "Digite um dia de setembro: ";
    cin >> dia;
  }
}
