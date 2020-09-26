#include "hero.h"

void Shouyue_Zhuque::heroLines() {std::cout << "  > give me a goal, give you a silence!" << std::endl;}
void Shouyue_Zhuque::Skin() {std::cout << "> shouyue dressed zhu_que clothes. " << std::endl;}

void Shouyue_Meiying::heroLines() {std::cout << "  > today's Great Wall is also at peace." << std::endl;}
void Shouyue_Meiying::Skin() {std::cout << "> shouyue dressed mei_ying clothes. " << std::endl;}


void Shouyue_MatchMode::skillOne() {
  std::cout << "  > filed of the view distance is 10" << std::endl;
  if (true/*simplifed, if target*/) {
    hero_image_->heroLines();
  }
}

void Shouyue_UnlimitedMode::skillOne() {
  std::cout << "  > filed of the view distance is 20" << std::endl;
  if (true/*simplifed, if target*/) {
    hero_image_->heroLines();
  }
}

