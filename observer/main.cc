#include<iostream>                                                                                                                                                                                          
#include "progress_bar.h"

int main() {
  DownloadPkg d_pkg;
  ProgressPercent p_percent;
  ProgressBar p_bar;
  d_pkg.add_progress(&p_percent);
  d_pkg.add_progress(&p_bar);
  d_pkg.download();

  HeroHP h_hp;
  h_hp.add_progress(&p_percent);
  h_hp.showHP();
  return 0;
}
