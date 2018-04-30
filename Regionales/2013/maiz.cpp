#include <iostream>

using namespace std;

int main() {
  int tubos, lanzamientos, tmpIni, tmpFin;
  int cantidadPreguntas;
  int pregIni, pregFin;
  int res = 0;

  cin >> tubos >> lanzamientos;

  int aTubos[tubos];

  for(int i=0; i<tubos; i++) {
    aTubos[i] = 0;
  }

  for(int i=0; i<lanzamientos; i++) {
    cin >> tmpIni >> tmpFin;
    for(int j=tmpIni; j<=tmpFin; j++) {
      aTubos[j]++;
    }
  }

  cin >> cantidadPreguntas;

  for(int i=0; i < cantidadPreguntas; i++) {
    cin >> pregIni >> pregFin;
    for(int j=pregIni; j<=pregFin; j++) {
      res += aTubos[j];
    }
    cout << res << endl;
    res = 0;
  }

  return 0;
}
