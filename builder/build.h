#include<iostream>

class House {
 public:
  House() {}
  ~House() {}
  virtual std::string name() = 0;

 public:
  std::string wall_;
  std::string door_;
  std::string windows_;
};

class HouseBuilder {
 public:
  HouseBuilder(House* house) : house_(house) {}
  ~HouseBuilder() {}
  virtual void BuildWall() = 0;
  virtual void BuildDoor() = 0;
  virtual void BuildWindows() = 0;
 protected:
  House* house_;
};

class WoodHouse : public House {
 public:
  std::string name() {return "wood_house";}
};

class WoodHouseBuilder : public HouseBuilder {
 public:
  WoodHouseBuilder(WoodHouse* house) : HouseBuilder(house) {}
  ~WoodHouseBuilder() {}
  virtual void BuildWall() {
    house_->wall_ = "wooden_wall";
  }
  virtual void BuildDoor() {
    house_->door_ = "wooden_door";
  }
  virtual void BuildWindows() {
    house_->windows_ = "wooden_windows";
  }
};

class BuildDirector {
 private:
  HouseBuilder* house_builder_;
 public:
  BuildDirector(HouseBuilder* house_builder): house_builder_(house_builder) {}
  void BuildYourHouse() {
    house_builder_->BuildWall();
    house_builder_->BuildDoor();
    house_builder_->BuildWindows();
  }
};


