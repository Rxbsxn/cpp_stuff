#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void randomize() {
  srand((unsigned int)time(nullptr));
}

int random(int min, int max) {
  return int((double)rand() / RAND_MAX*(1 + max - min) + min);
}

int main()
{
  
  randomize();

  for (int i = 0; i < 5; i++)
    cout << random(1, 6) << endl;
  cin.get();
}

