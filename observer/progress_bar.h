class DownloadPkg {
 public:
  void download() {
    int total_num = 10;
    for (int i = 0; i <= total_num; i++) {
      // fake download

      // show download progress
      for (Progress* p : progress_vec_) {
        p->doProgress(i, total_num);
      }
    }
  }

 void add_progress(Progress* p) {
  progress_vec_.push_back(p);
 }

 void remove_progress() {
   if (!progress_vec_.empty()) {
     progress_vec_.pop_back();
   }
 }

 private:
  std::vector<Progress*> progress_vec_ ;
};

class HeroHP {
 public:
  void showHP() {
    int total_num = 10;
    for (int i = total_num; i > 0; i--) {
      // show download progress
      for (Progress* p : progress_vec_) {
        p->doProgress(i, total_num);
      }
    }
  }

 void add_progress(Progress* p) {
  progress_vec_.push_back(p);
 }

 void remove_progress() {
   if (!progress_vec_.empty()) {
     progress_vec_.pop_back();
   }
 }

 private:
  std::vector<Progress*> progress_vec_ ;
};
