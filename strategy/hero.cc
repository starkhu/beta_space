#include <iostream>
#include "hero.h"

void Hero::BattleMode() {
  level_ = 1;
  damage_table_ = new DamageTable();
}

Hero::~Hero() {
  if (damage_table_ != nullptr) {
    delete damage_table_;
    damage_table_ = nullptr;
  }
}


float Daji::DamageStrategy() {
  if (damage_table_ == nullptr) {
    return -1;
  }
  damage_table_->physical_damage_ = 10.0;
  damage_table_->spell_damage_ = level_ * 100.0;
  return damage_table_->physical_damage_ + damage_table_->spell_damage_;
}

float BaiLishouyue::DamageStrategy() {
  damage_table_->physical_damage_ = level_ * 100.0;
  damage_table_->spell_damage_ = level_ * 10.0;
  return damage_table_->physical_damage_ + damage_table_->spell_damage_;
}
