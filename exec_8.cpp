#include <iostream>

using namespace std;

int main() {
  int a=7000, b=20000, anos=0;

  while(a < b) {
    a += a*(0.035);
    b += b*(0.01);
    anos++;
  }

  cout << "A cidade 'A' vai ter uma população maior que 'B' em " << anos << " Anos." << endl;
}
