#include <iostream>
#include <cstdlib>
#include <time.h>
#include <random>

using namespace std;

int main() {
  
  unsigned seed = time(NULL);

  std::default_random_engine eng(seed);
  int random_num = eng() % 100;
  
  while (true) {

    int user_num;
    cout << "enter a number: ";
    cin >> user_num;
    if (cin.fail()) {
      cout << "Error encountered, exiting...";
      exit(EXIT_FAILURE);
    } else if (user_num > 99 && user_num < 0) {
      cout << "[WARNING] : number must be between 0 and 99";
      continue;
    }

    if (user_num > random_num) {
      cout << "number is smaller" << endl;
    }else if (user_num < random_num) {
      cout << "number is bigger" << endl;
    }else {
      cout << "you have won" << endl;
      break;
    }

  }
  return 0;
}