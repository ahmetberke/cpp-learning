#include "html_writer.hpp"
#include <string>
#include <fstream>

using namespace std;

namespace html_writer {
  void OpenDocument() {
    ofstream file("../web_app/test.html"); 
    file << "<!DOCTYPE html><html>";
    file.close(); 
  }

  void CloseDocument() {
    ofstream file("../web_app/test.html", std::ios_base::app);
    file << "</html>";
    file.close();   
  }

  void AddCSSStyle(const std::string& stylesheet) {
    ofstream file("../web_app/test.html", std::ios_base::app);
    file << "<head><link rel='stylesheet' type='text/css' href='" << stylesheet << "'/></head>";
    file.close();
  }

  void AddTitle(const std::string& title) {
    ofstream file("../web_app/test.html", std::ios_base::app);
    file << "<title>" << title << "</title>";
    file.close();
  }

  void OpenBody(){
    ofstream file("../web_app/test.html", std::ios_base::app);
    file << "<body>";
    file.close(); 
  }

  void CloseBody(){
    ofstream file("../web_app/test.html", std::ios_base::app);
    file << "</body>";
    file.close(); 
  }

  void OpenRow() {
    ofstream file("../web_app/test.html", std::ios_base::app);
    file << "<div class='row'>";
    file.close(); 
  }

  void CloseRow() {
    ofstream file("../web_app/test.html", std::ios_base::app);
    file << "</div>";
    file.close(); 
  }

  void AddImage(const std::string& img_path, float score, bool highlight){
    ofstream file("../web_app/test.html", std::ios_base::app);
    string highlightStyle = "";
    if(highlight) {
      highlightStyle = "style='border: 5px solid green;'";
    }
    file << "<div class='column' "<< highlightStyle <<"><h2>" << img_path << "</h2><img src='"<< img_path <<"' /><p>score = " << score << "</p></div>";
    file.close(); 
  }

}