#include <iostream>
#include <string>

#include "git.hpp"

using namespace std;

int main() {
  int plus, minus;

  cin >> plus >> minus;
  cout << git(plus, minus);

  return 0;
}
