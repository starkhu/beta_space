#include <iostream>
#include "hero.h"

void Battle() {
  std::cout << "\nin Match Mode, new shouyue with zhuque' skin:"
            << std::endl;
  Shouyue_Zhuque shouyue_zq;
  Shouyue_MatchMode shouyue_mm(&shouyue_zq);
  shouyue_mm.skillOne();

  std::cout << "\nin Unlimited Mode, new shouyue with meiyingtegong' skin:"
            << std::endl;
  Shouyue_Meiying shouyue_my;
  Shouyue_UnlimitedMode shouyue_um(&shouyue_my);
  shouyue_um.skillOne();
} 

int main () {
  Battle();

  return 0;
}
