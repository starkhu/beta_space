#include <iostream>

class HeroImage;

class Hero {
 public:
  Hero(HeroImage* hero_image): hero_image_(hero_image) {}
  ~Hero() {}
  virtual void skillOne() = 0;
  // virtual void skillTwo() = 0;
  // virtual void skillThree() = 0;
  // virtual void returnSpring() = 0;
  virtual std::string name() = 0;

  protected:
   HeroImage* hero_image_;
};

class HeroImage {
 public:
  virtual void heroLines() = 0;
  // virtual void Skin() = 0;
};

class Shouyue_Zhuque : public HeroImage {
 public:
  void heroLines();
  void Skin();
};

class Shouyue_Meiying : public HeroImage {
 public: 
  void heroLines();
  void Skin();
};

class Shouyue_MatchMode : public Hero {
 public:
  Shouyue_MatchMode(HeroImage* hero_image): Hero(hero_image) {}
  void skillOne();
  std::string name() {return "shouyue";}
};

class Shouyue_UnlimitedMode : public Hero {
 public:
  Shouyue_UnlimitedMode(HeroImage* hero_image): Hero(hero_image) {}
  void skillOne();
  std::string name() {return "shouyue";}
};




