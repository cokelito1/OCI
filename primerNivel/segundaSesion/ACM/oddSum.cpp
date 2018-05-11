#include <iostream>

using namespace std;

int oddSum(int ini, int fin) {
  fin++;
  int arraySize = fin - ini;
  int array[arraySize];
  int oddArray[arraySize];
  int sum = 0;

  for(int i=0; i<arraySize; i++) {
    oddArray[i] = 0;
  }

  for(int i = 0; i<arraySize; i++) {
    array[i] = ini + i;
  }

  for(int i=0 ; i<arraySize; i++) {
    if(array[i] % 2 != 0) {
      oddArray[i] = array[i];
    }
  }

  for(int i=0; i<arraySize; i++) {
    sum += oddArray[i];
  }

  return sum;
}


int main() {
  int ini, fin;
  cin >> ini >> fin;

  cout << oddSum(ini, fin) << endl;
  return 0;
}
