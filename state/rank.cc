// #include<iostream>
#include "rank.h"
Rank* GoldRank::rank_ = nullptr;
Rank* DiamondRank::rank_ = nullptr;
Rank* KingRank::rank_ = nullptr;

Rank* GoldRank::getInstance() {
  if (rank_ == nullptr) {
    rank_ = new GoldRank();
  }
  return rank_;
}
void GoldRank::BanPick() {
  std::cout << "ban 0 heros" << std::endl;
}
void GoldRank::Battle() {
  std::cout << "show nick name" << std::endl;
  if (1/*victory*/) {
    rank_next_ = DiamondRank::getInstance(); 
  }
}

Rank* DiamondRank::getInstance() {
  if (rank_ == nullptr) {
    rank_ = new DiamondRank();
  }
  return rank_;
}

void DiamondRank::BanPick() {
  std::cout << "ban 2 heros" << std::endl;
}
void DiamondRank::Battle() {
  std::cout << "show nick name" << std::endl;
  if (1/*victory*/) {
    rank_next_ = KingRank::getInstance(); 
  }
}
  
Rank* KingRank::getInstance() {
  if (rank_ == nullptr) {
    rank_ = new KingRank();
  }
  return rank_;
}

void KingRank::BanPick() {
  std::cout << "ban 4 heros" << std::endl;
}
void KingRank::Battle() {
  std::cout << "show no nick name" << std::endl;
  if (1/*victory*/) {
    rank_next_ = GoldRank::getInstance(); 
  }
}
