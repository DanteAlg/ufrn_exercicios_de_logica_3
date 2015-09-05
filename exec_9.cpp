#include <iostream>

using namespace std;

int main() {
  float nota_a=-1, nota_b=-2;

  while ((nota_a < 0) || (nota_a > 10)) {
    cout << "Escreva a primeira média: " << endl;
    cin >> nota_a;
    if ((nota_a < 0) || (nota_a > 10)) { cout << "Nota Inválida." << endl; }
  }

  while ((nota_b < 0) || (nota_b > 10)) {
    cout << "Escreva a segunda média: " << endl;
    cin >> nota_b;
    if ((nota_b < 0) || (nota_b > 10)) { cout << "Nota Inválida." << endl; }
  }

  cout << "A média das notas é: " << (nota_a+nota_b)/2 << endl;
}
