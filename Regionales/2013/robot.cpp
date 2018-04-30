#include <iostream>

using namespace std;

typedef struct coordenada{
  int x, y;
}coordenada;

int main() {
  int totalPuntos, girosDerecha = 0, girosIzquierda = 0;
  cin >> totalPuntos;

  struct coordenada aCoordenadas[totalPuntos];

  for(int i=0; i<totalPuntos; i++) {
    cin >> aCoordenadas[i].x >> aCoordenadas[i].y;
  }

  coordenada currentCoordenada;
  currentCoordenada.x = aCoordenadas[1].x;
  currentCoordenada.y = aCoordenadas[1].y;

  for(int i=2; i<totalPuntos; i++) {
    if(currentCoordenada.x > aCoordenadas[i].x) {
      girosIzquierda++;
    } else if(currentCoordenada.x < aCoordenadas[i].x) {
      girosDerecha++;
    }

    if(currentCoordenada.y > aCoordenadas[i].y) {
      girosDerecha++;
    } else if(currentCoordenada.y < aCoordenadas[i].y) {
      girosIzquierda++;
    }

    currentCoordenada.x = aCoordenadas[i].x;
    currentCoordenada.y = aCoordenadas[i].y;
  }


  cout << girosIzquierda << " " << girosDerecha << endl;
  free(aCoordenadas);

  return 0;
}
