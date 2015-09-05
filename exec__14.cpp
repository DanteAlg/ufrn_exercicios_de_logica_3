#include <iostream>

using namespace std;

int main() {
  int max, tab_linha=0;

  cout << "Digite o valor maximo da tabela em Cº: ";
  cin >> max;
  cout << endl;

  while (tab_linha <= max) {
    cout << tab_linha << "ºC     -|-     " << (9*tab_linha + 5*32)/5 << "ºF |" << endl;
    tab_linha++;
  }
}
