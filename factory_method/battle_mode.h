#include <iostream>
// #include "hero.h"
#include "hero_factory.h"

class BattleMode {
 public:
  BattleMode(HeroFactory* hero_factory): hero_factory_(hero_factory) {}

  ~BattleMode(){}

  void initBattleField() {
    std::cout << "------init heros------" << std::endl;
    Hero* hero = hero_factory_->initHero();
    std::cout << "~~hero " << hero->name() << " has arrived at battlefield~~" << std::endl;
  }

 private:
  HeroFactory* hero_factory_;
};

