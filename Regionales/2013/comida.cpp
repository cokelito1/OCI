#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  vector<long> Precios;
  int totalPlatos;
  int cantidadPlatos;
  int total = 0;

  cin >> totalPlatos >> cantidadPlatos;
  for(int i=0; i<totalPlatos; i++) {
    Precios.push_back(pow(2, i));
  }

  for(int i=Precios.size(); i>=0; i--) {
    if(cantidadPlatos - Precios[i-1] >= 0) {
      cantidadPlatos -= Precios[i-1];
      total++;
      i++;
    } else if(cantidadPlatos == 0) {
      goto finish;
    }
  }

finish:
  cout << total << endl;
  return 0;
}
