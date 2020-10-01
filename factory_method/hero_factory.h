#include<iostream>
#include "hero.h"

class HeroFactory {
 public:
  HeroFactory() {}
  ~HeroFactory() {}

  virtual Hero* initHero() = 0;
};

class Shouyue_MatchMode_Factory : public HeroFactory {
 public:
  Hero* initHero() {
    Shouyue_Zhuque zhuque = Shouyue_Zhuque();
    Hero* hero = new Shouyue_MatchMode(&zhuque);
    return hero;
  }
  Shouyue_MatchMode_Factory() {}
  ~Shouyue_MatchMode_Factory() {}
};
