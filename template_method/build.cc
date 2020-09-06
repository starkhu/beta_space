#include <iostream>
#include "build.h"

void Build::pickAddress() {
  std::cout << "pick address" << std::endl;
}

void Build::buildYourDream() {
  setTarget();
  pickAddress();
  pickTools();
  carryTools();
  buildHouse();
}

// void pickTools() {
//   std::cout << "pick tools" << std::endl;
// }
// 
// void carryTools() {
//   std::cout << "carry tools" << std::endl;
// }



