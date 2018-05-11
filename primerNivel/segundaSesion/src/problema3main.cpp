#include "problema3.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
  string Nombre, Nacionalidad, Ciudad = "";
  cin >> Nombre >> Nacionalidad >> Ciudad;

  cout << PrintName(Nombre, Nacionalidad, Ciudad) << endl;
  return 0;
}
