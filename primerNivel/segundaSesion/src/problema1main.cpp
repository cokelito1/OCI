#include <iostream>
#include "problema1.hpp"

int main() {
  int year1, year2 = 0;
  std::cin >> year1 >> year2;

  std::cout << "Han pasado " << yearPasados(year1, year2) << " años." << std::endl;
  return 0;
}
