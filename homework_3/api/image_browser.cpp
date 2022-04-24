#include "image_browser.hpp"
#include "html_writer.hpp"
#include <array>
#include <string>
#include <tuple>
#include <vector>
#include <iostream>

using namespace std;

namespace image_browser {
  
  void AddFullRow(const ImageRow& row, bool first_row) {
    html_writer::OpenRow();
    for (int i = 0; i<3; i++) {
      if (first_row && i == 0) {
        html_writer::AddImage(get<0>(row[i]), get<1>(row[i]), true);      
      } else {
        html_writer::AddImage(get<0>(row[i]), get<1>(row[i]));      
      } 
    }
    html_writer::CloseRow();
  }

  void CreateImageBrowser(const std::string& title, const std::string& stylesheet, const std::vector<ImageRow>& rows) {
    html_writer::OpenDocument();
    html_writer::AddTitle(title);
    html_writer::AddCSSStyle(stylesheet);
    html_writer::OpenBody();
    AddFullRow(rows[0], true);
    for (int i=1; i<rows.size(); i++) {
      for (int j = 0; j<3; j++) {
        cout << get<0>(rows[i][j]) << endl;
      } 
      AddFullRow(rows[i]); 
    }
    html_writer::CloseBody();
    html_writer::CloseDocument();
  }
}