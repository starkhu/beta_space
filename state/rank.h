#include<iostream>

class Rank {
 public:
  Rank* rank_next_;
  virtual void BanPick() = 0;
  virtual void Battle() = 0;
  virtual std::string name() = 0;
  
  // // at new Season
  // virtual void ReceiveAward() = 0;
  // virtual void SuccessionRank() = 0;
};

class GoldRank : public Rank {
 private:
  GoldRank() {}
 public:
  static Rank* rank_;
  static Rank* getInstance();
  virtual void BanPick();
  virtual void Battle();
  std::string name() {return "gold";}
};

class DiamondRank : public Rank {
 private:
  DiamondRank() {}
 public:
  static Rank* rank_;
  static Rank* getInstance();
  virtual void BanPick();
  virtual void Battle();
  std::string name() {return "diamond";}
};

class KingRank : public Rank {
 private:
  KingRank() {}
 public:
  static Rank* rank_;
  static Rank* getInstance();
   virtual void BanPick();
   virtual void Battle();
  std::string name() {return "king";}
};
