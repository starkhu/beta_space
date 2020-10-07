#include <iostream>

// base class
class BanPick {
 public:
  BanPick() {}
  ~BanPick() {}
  virtual void bpHeros() = 0;
};

class BattleField {
 public:
  BattleField() {}
  ~BattleField() {}
  virtual void loadMap() = 0;

};

class Statistics {
 public:
  Statistics() {}
  ~Statistics() {}
  virtual void showKDA() = 0;
};


//1V1 
class BanPick_1Player: public BanPick {
 public:
  BanPick_1Player() {}
  ~BanPick_1Player() {}
  void bpHeros() {
    std::cout << "~~pick 1 hero~~" << std::endl;
  }
};

class BattleField_1Player : public BattleField {
 public:
  BattleField_1Player() {}
  ~BattleField_1Player() {}
  void loadMap() {
    std::cout << "~~load 1V1 battle_field map~~" << std::endl;
  }
};

class Statistics_1Player : public Statistics {
 public:
 Statistics_1Player() {}
 ~Statistics_1Player() {}
 void showKDA() {
   std::cout << "~~show hero KDA~~" << std::endl;
 }
};

//3V3 
class BanPick_3Players: public BanPick {
 public:
  BanPick_3Players() {}
  ~BanPick_3Players() {}
  void bpHeros() {
    std::cout << "~~pick 3 heros~~" << std::endl;
  }
};

class BattleField_3Players : public BattleField {
 public:
  BattleField_3Players() {}
  ~BattleField_3Players() {}
  void loadMap() {
    std::cout << "~~load 3V3 battle_field map~~" << std::endl;
  }
};

class Statistics_3Players : public Statistics {
 public:
 Statistics_3Players() {}
 ~Statistics_3Players() {}
 void showKDA() {
   std::cout << "~~show heros KDA~~" << std::endl;
 }
};
