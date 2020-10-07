#include<iostream>
#include<string>
#include<map>
class Font {
 private:
  std::string key_;
  
  //font state
  // ...
 public:
  Font(std::string key) : key_(key) {}
};

class FontFactory {
 private:
  std::map<std::string, Font*> font_pool_;

 public:
  Font* getFont(const std::string& key) {
    std::map<std::string, Font*>::iterator iter = font_pool_.find(key);
    if (iter != font_pool_.end()) {
      std::cout << "~~get font~~" << std::endl;
      return font_pool_[key];
    } else {
      std::cout << "~~create font~~" << std::endl;
      Font* font = new Font(key);
      font_pool_[key] = font;
      return font;
    }
  }

  void doClear() {
  
  }
};

class Word {
 public:
  Word(int utf_code, const std::string& font, FontFactory* font_factory)
      : utf_code_(utf_code) {
    font_ptr_ = font_factory->getFont(font);
  }

 private:
  int utf_code_;
  Font* font_ptr_;
};


