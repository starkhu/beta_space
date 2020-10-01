#include <iostream>

class BattleMode {
 public:
  virtual void pickHero()  = 0;
  virtual void Battle() = 0;
  virtual void Statistics() = 0;
  void Play() {
    pickHero();
    Battle();
    Statistics();
  }
};


class SoloMode : public BattleMode {
 public:
  virtual void pickHero() ;
  virtual void Battle();
  virtual void Statistics();
};

class ThreePlayersBattleMode : public BattleMode {
 public:
  virtual void pickHero() ;
  virtual void Battle();
  virtual void Statistics();
};

class FivePlayersBattleMode : public BattleMode {
 public:
  virtual void pickHero() ;
  virtual void Battle();
  virtual void Statistics();
};

class RankBattleMode : public BattleMode {
 public:
  void pickHero() {
    std::cout << "add ban/pick mode" << std::endl;
    std::cout << "pick hero" << std::endl;
    std::cout << std::endl;
  }
  
  void battle() {
    std::cout << " weisuofayu, bielang!" << std::endl;
    std::cout << "Victory" << std::endl;
    std::cout << std::endl;
  }

  void Statistics() {
    std::cout << "victory, rank add 1";
    std::cout << "show  summoner data" << std::endl;
    std::cout << std::endl;
  }
};







