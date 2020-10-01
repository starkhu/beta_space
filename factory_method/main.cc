#include <iostream>
// #include "hero_factory.h"
#include "battle_mode.h"

int main () {
  Shouyue_MatchMode_Factory shouyue_factory = Shouyue_MatchMode_Factory();
  BattleMode battle_mode = BattleMode(&shouyue_factory);
  battle_mode.initBattleField();
 
  return 0;
}
