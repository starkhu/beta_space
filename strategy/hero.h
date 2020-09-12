#ifndef HERO_H_
#define HERO_H_
#include<iostream>
#include "damage_table.h"

class Hero {
 public:
  Hero() {}
  ~Hero();

  virtual std::string name() = 0;
  virtual float DamageStrategy() = 0;


 // protected:
  
 //battle mode
 void BattleMode();
 protected:
  int level_;
  DamageTable* damage_table_;

};

class Daji : public Hero {
 public:
  Daji() {}
  ~Daji() {}

  std::string name() { return "daji"; }
  float DamageStrategy();

 private:
};

class BaiLishouyue : public Hero {
 public:
  BaiLishouyue() {}
  ~BaiLishouyue() {}

  std::string name() { return "bailishouyue"; }
  float DamageStrategy();

 private:
};

#endif  // HERO_H_
