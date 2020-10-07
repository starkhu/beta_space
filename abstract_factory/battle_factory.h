#include <iostream>
#include "battle_mode.h"

class BattleModeFactory {
 public:
  virtual BanPick* initBanPick() = 0;
  virtual BattleField* initBattleField() = 0;
  virtual Statistics* initStatistics() = 0;
  BattleModeFactory() {}
  ~BattleModeFactory() {}
};

class BattleModeFactory_1Player : public BattleModeFactory {
 private:
  BanPick_1Player* bp_;
  BattleField_1Player* bf_;
  Statistics_1Player* st_;

 public:
  BanPick_1Player* initBanPick()  {
    bp_ = new BanPick_1Player();
    return bp_;
  }
  BattleField_1Player* initBattleField() {
    bf_ = new BattleField_1Player();
    return bf_;
  }
  Statistics_1Player* initStatistics() {
    st_ = new Statistics_1Player();
    return st_;
  }
  ~BattleModeFactory_1Player() {
    if (bp_ != nullptr) {
      delete bp_;
    }
    if (bf_ != nullptr) {
      delete bf_;
    }
    if (st_ != nullptr) {
      delete st_;
    }
  }
};

class BattleModeFactory_3Players : public BattleModeFactory {
 private:
  BanPick_3Players* bp_;
  BattleField_3Players* bf_;
  Statistics_3Players* st_;

 public:
  BanPick_3Players* initBanPick()  {
    BanPick_3Players* bp = new BanPick_3Players();
    return bp;
  }
  BattleField_3Players* initBattleField() {
    BattleField_3Players* bf = new BattleField_3Players();
    return bf;
  }
  Statistics_3Players* initStatistics() {
    Statistics_3Players* st = new Statistics_3Players();
    return st;
  }
  ~BattleModeFactory_3Players() {
    if (bp_ != nullptr) {
      delete bp_;
    }
    if (bf_ != nullptr) {
      delete bf_;
    }
    if (st_ != nullptr) {
      delete st_;
    }
  }
};

