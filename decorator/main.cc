#include <iostream>
#include "battle_mode.h"

int main() {
  BattleMode* b_mode = new SoloMode();
  b_mode->Play();
  
  return 0;
}
