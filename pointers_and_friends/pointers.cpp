#include <iostream>
using namespace std;

void f() {}


void getFunctionMemoryAddress() {
  cout << &f << endl; //  Get memory address of variable/function/const
  cout << (f == &f) << endl; // Function reference address is the same as &function
  // Same things are going in array example tab == tab[0]
}

// pointers
// It keeps address of another variable lub memory space
// type *identification
// int *ptr - pointer named ptr to int type


void pointerExample() {
  int a = 10;
  int *pointer = &a;
  
  cout << a << endl // returns value of a
    << &a << endl // returns memory address of a
    << pointer << endl // returns memory adress of a
    << &pointer << endl // returns memory address of pointer
    << *pointer << endl; // returns value of a

}

void pointerAndReference() {
  int a = 10;
  int *pointer = &a;
  
  // we can use reference to change primary value
  
  *pointer = 20;
  
  cout << a << endl; // 20
}

void pointersChain() {
  int a = 1;
  int *w1, *w2;

  w1 = &a;
  w2 = &a;
    
  int *w3 = w2;
  int *w5 = w3;
  int *w4 = w5;
  
  int b = *w4;
  
  cout << b << endl;
}

// pointer can hold random element of array


void pointersWithArray() {
  int a[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
  
  int *w0, *w1, *w5;
  
  w0 = &a[0];
  w1 = &a[1];
  w5 = &a[5];
  
  cout << w0 << endl // Address of a[0]
    << w1 << endl // Address of a[1]
    << w5 << endl // Address of a[5]
    << *w0 << endl // Value of a[0]
    << *w1 << endl // Value of a[1]
    << *w5 << endl; // Value of a[5]
}

void pointersWithArray2() {
  int a[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
  
  cout << *&a[0] << endl
    << *&a[3] << endl
    << *&a[6] << endl
  
    << endl
  
    << *a << endl
    << *(a + 0) << endl
    << *(a + 3) << endl // You will get value of a[4]
    << *(a + 6) << endl;

}

void pointersChainDeclaration() {
  int ca = 10;
  int* a, b, c; // declare three pointers
  a = &ca;
}

// operations on pointers

void pointersIncrementations() {
  double t[] = { 5.0, 10.0, 15.0 };
  double *w = t;
  
  cout << *w << endl;
  
  w++;
  
  cout << *w << endl;
  
  cout << *++w << endl;

}

// pointers to constants
// We can change memory address
// We cannot modify value by reference

void pointersToConstants() {
  int a = 10;
  int b = 20;
  const int* w1;
  w1 = &a;
  
  cout << *w1 << endl;
  
  w1 = &b;
  
  cout << *w1 << endl;
 
  // *w1 = 40; // raise Error
}

// const pointer
// We cannot assign other value - Same like standard const
// We can modify value by reference

void constPointer() {
  int a = 20;

  int *const w1 = &a;

  cout << *w1 << endl;

  *w1 = 24;

  cout << *w1 << endl;
}


// const pointer to const
// we cannot change assign - same like standard const
// we cannot modify value

void constPointertoConst() {
  const int c1 = 56;
  int c2 = 2;
  
  const int *const w1 = &c1;
  const int *const w2 = &c2;
  
  cout << *w1 << endl;
  cout << *w2 << endl;

}
