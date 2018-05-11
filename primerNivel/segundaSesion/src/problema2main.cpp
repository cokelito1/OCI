#include "problema2.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

int main() {
  float nota1, nota2, nota3 = 0.0f;
  std::cin >> nota1 >> nota2 >> nota3;

  std::cout << "Su promedio es " << std::setprecision (2) << promedio(nota1, nota2, nota3) << std::endl;

  return 0;
}
