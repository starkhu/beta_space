#include<iostream>
#include "fly_weight.h"
int main() {
  FontFactory font_factory;
  Word(1, "songti", &font_factory);
  Word(2, "songti", &font_factory);

}

