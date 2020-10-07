#include<iostream>
#include "battle_factory.h"

class Battle {
 private:
  BattleModeFactory* battle_factory_;
  BanPick* bp_;
  BattleField* bf_;
  Statistics* st_;

 public:
  Battle(BattleModeFactory* bf):battle_factory_(bf) {}
  void doBattle() {
    bp_ = battle_factory_->initBanPick();
    bf_ = battle_factory_->initBattleField();
    st_ = battle_factory_->initStatistics();
    bp_->bpHeros();
    bf_->loadMap();
    st_->showKDA();
  }
};

int main() {
 BattleModeFactory_1Player bm_factory;
 Battle battle(&bm_factory);
 battle.doBattle();
 return 0;
}
