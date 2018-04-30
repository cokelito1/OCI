#include <iostream>
#include <string>

std::string git(int plus, int minus) {
  std::string gitString = "";

  for(int i=0; i<plus; i++) {
    gitString.append("+");
  }
  for(int i=0; i<minus; i++) {
    gitString.append("-");
  }

  return gitString;
}
