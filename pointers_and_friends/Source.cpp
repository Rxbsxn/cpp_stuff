#include <iostream>
using namespace std;

void enumExample() {
  enum Color { Red = 10, Green = 15, Blue = Green + 2 };
  
  cout << Color::Blue << endl;
}

void addOne(int& b) {
  b++;
}


void addingByReference() {
  int p = 1;
  
  cout << p << endl;
  
  addOne(p);
  
  cout << p << endl;

}

// return from function by reference
int glob = 0;
int& function()
{
  return glob;
}
void returnsFromFunction() {
  function() = 530;
    cout << glob;
}

// Array

void arrayExample() {
  const int n = 10;
  
  int tab[n];
  
  for (int i = 0; i < n; i++)
  {
    tab[i] = i + 5 * 2;
    cout << tab[i] << endl;
  }
}

void multipleArrays() {
  const char f = (char)219;
  const char e = ' ';
  
  const int d1 = 3;
  const int d2 = 5;
  const int d3 = 3;
    
  char a[d1][d2][d3] =
  {
    {
      
      { f, f, f },
      { f, e, f },
      { f, f, f },
      { f, e, f },
      { f, e, f },
    },
    {
      { f, f, f },
      { e, f, e },
      { e, f, e },
      { e, f, e },
      { e, f, e },
    },
    {
      { f, e, f },
      { f, e, f },
      { f, f, f },
      { f, e, f },
      { f, e, f },
    }
  };
  
  for (int i = 0; i < d1; i++) {
    for (int j = 0; j < d2; j++) {
      for (int k = 0; k < d3; k++) {
        cout << a[i][j][k];
      }
      cout << endl;
    }
    cout << endl;
  }
}