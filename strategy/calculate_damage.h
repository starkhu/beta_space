// #include<iostream>
#include"hero.h"


class DamageCalculator {
 private:
  Hero* hero_;

 public:
  DamageCalculator(Hero* hero): hero_(hero) {}
  ~DamageCalculator() {}

  float CalculateDamage() {
   return hero_->DamageStrategy();
  }
};
