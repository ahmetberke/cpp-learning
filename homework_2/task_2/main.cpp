#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]) {
  char *val1, *val2;
  char *number1, *number2, *ext1, *ext2;
  
  if (argc-1 != 2) {
    fprintf(stderr, "Insufficient argument");
  
  }else {

    val1 = strtok(argv[1], ".");
    while (val1 != NULL){
      val1 = strtok(NULL, ".");
      if (val1 != NULL) {
        ext1 = val1;
      }
    }
    number1 = strtok(argv[1], ".");

    val2 = strtok(argv[2], ".");
    while (val2 != NULL){
      val2 = strtok(NULL, ".");
      if (val2 != NULL) {
        ext2 = val2;
      }
    }
    number2 = strtok(argv[2], ".");

    int res;
    if (!strcmp(ext1, "txt") && !strcmp(ext2, "txt")) {
      res = (atoi(number1) + atoi(number2)) / 2;
      cout << res << endl;
    }else if (!strcmp(ext1, "png") && !strcmp(ext2, "png")) {
      res = atoi(number1) + atoi(number2);
      cout << res << endl;
    }else if ((!strcmp(ext1, "txt") && !strcmp(ext2, "png")) || (!strcmp(ext1, "png") && !strcmp(ext2, "txt"))) {
      res = atoi(number1) % atoi(number2);
      cout << res << endl;
    } else {
      fprintf(stderr, "Invalid file extension.");
    }

  }
  
  return 0;
}