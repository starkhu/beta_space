#include "battle_mode.h"

void SoloMode::pickHero() {
  std::cout << "pick one hero" << std::endl;
}

void ThreePlayersBattleMode::pickHero() {
  std::cout << "pick 3 hero" << std::endl;
}

void FivePlayersBattleMode::pickHero() {
  std::cout << "pick 5 hero" << std::endl;
}

void SoloMode::Battle() {
  std::cout << "Solo" << std::endl;
}

void ThreePlayersBattleMode::Battle() {
  std::cout << "3players team battle" << std::endl;
}

void FivePlayersBattleMode::Battle() {
  std::cout << "3 players team battle" << std::endl;
}

void SoloMode:: Statistics() {
  std::cout << "show 1 player data" << std::endl;
}

void ThreePlayersBattleMode:: Statistics() {
  std::cout << "show 3 player data" << std::endl;
}

void FivePlayersBattleMode:: Statistics() {
  std::cout << "show 5 player data" << std::endl;
}


