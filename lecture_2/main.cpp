#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main() {
	srand(NULL);
	int rand1 = rand() % 100;
	int rand2 = rand() % 100;
	int rand3 = rand() % 100;
	cout << rand1 << rand2 << rand3 << endl;
}
