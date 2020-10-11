#include<iostream>
#include"rank.h"

void Play() {
  Rank* rank = GoldRank::getInstance();
  for (int i=0; i <=10; i++) {
    std::cout << rank->name() << std::endl;
    rank->BanPick();
    rank->Battle();
    rank = rank->rank_next_;
  }
}

int main() {
  Play();

  return 0;
}
