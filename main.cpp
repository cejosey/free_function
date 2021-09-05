#include <iostream>
#include "dothis.h"
#include "dothat.h"

dothis thisThing;
int makeVar = 0;

int main() {
  std::cout << "Hello World!" << std::endl;
  std::cout << "varOne is currently = " << thisThing.getVarOne() << std::endl;
  
  makeVar = 99;
  std::cout << "Setting varOne to: " << makeVar << std::endl;
  thisThing.setVarOne(makeVar);
  std::cout << "varOne is now = " << thisThing.getVarOne() << std::endl;

  std::cout << "Doing that" << std::endl;
  printThis(42);

  return 0;
}
