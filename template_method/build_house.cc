#include <iostream>
#include "build_house.h"

void BuildHouse::setTarget() {
  std::cout << "build a comfortable house" << std::endl;
}

void BuildHouse::pickTools() {
  std::cout << "build house, pick spade." << std::endl;
}

void BuildHouse::carryTools() {
  std::cout << "build house, carry spade to sz." << std::endl;
}

void BuildHouse::buildHouse() {
  std::cout << "build house." << std::endl;
}
