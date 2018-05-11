#include <iostream>
#include <string>
#include <iomanip>
#include "problema4.hpp"

using namespace std;

int main() {
  float Precio = 0;
  float Iva = 0;
  cin >> Precio;

  Iva = iva(Precio);

  cout << "El precio Neto es "  << (int)Precio << ", el 19% es "  << (int) Iva << ", El valor +Iva es "  << (int) Precio + Iva << endl;

  return 0;
}
