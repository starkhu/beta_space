#include<iostream>
#include "build.h"

int main() {
  WoodHouse wooden_house;
  WoodHouseBuilder wh_builder(&wooden_house);
  BuildDirector bd(&wh_builder);
  bd.BuildYourHouse();

 return 0;
}
