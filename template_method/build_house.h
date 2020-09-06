#include "build.h"

class BuildHouse : public Build {
 public:
  virtual void setTarget();
  void setFlag();
  virtual void pickTools();
  virtual void carryTools();
  virtual void buildHouse();
};



