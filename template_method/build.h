
class Build {
 public:
  Build() {}
  ~Build() {}

  void buildYourDream();

  protected:
   virtual void setTarget() = 0;
   void pickAddress();
   virtual void pickTools() = 0;
   virtual void carryTools() = 0;
   virtual void buildHouse() = 0;

};

