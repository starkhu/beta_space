#include <iostream>
#include "hero.h"
#include "calculate_damage.h"

int main() {
  Daji daji;
  BaiLishouyue shouyue;

  //
  DamageCalculator daji_dc(&daji);
  DamageCalculator shouyue_dc(&shouyue);

  // battle mode
  daji.BattleMode();
  shouyue.BattleMode();
  std::cout << "daji damage: " << daji_dc.CalculateDamage() << std::endl;
  std::cout << "shouyue damage: " << shouyue_dc.CalculateDamage() << std::endl;

  return 0;
}
