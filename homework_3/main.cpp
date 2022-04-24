#include "api/image_browser.hpp"
#include <string>
#include <iostream>

using namespace std;


int main() {
  image_browser::ImageRow row1 {
    make_tuple("./data/000000.png", 0.12),
    make_tuple("./data/000100.png", 0.12),
    make_tuple("./data/000200.png", 0.12),
  };
  image_browser::ImageRow row2 {
    make_tuple("./data/000300.png", 0.12),
    make_tuple("./data/000400.png", 0.12),
    make_tuple("./data/000500.png", 0.12),
  };
  image_browser::ImageRow row3 {
    make_tuple("./data/000600.png", 0.12),
    make_tuple("./data/000700.png", 0.12),
    make_tuple("./data/000800.png", 0.12),
  };

  cout << get<0>(row1[0]) << endl; 

  for (int i = 0; i<3; i++) {
    cout << get<0>(row1[i]) << endl;
  } 

  vector<image_browser::ImageRow> rows{row1, row2, row3}; 

  image_browser::CreateImageBrowser("deneme", "style.css", rows);

  return 0;
}