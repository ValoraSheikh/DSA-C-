# include <iostream>
using namespace std;


void changeA(int *p) {
  *p = 20;
}

void changeB(int &b) {
  b = 30;
}

int main() {
  // int a = 12;
  // cout << &a << endl;

  //Pointers
  // int *p = &a;
  // cout << p << endl;
  // cout << *p << endl;
  // cout << &p << endl;

  // cout << "Address of pointer p: " << &p << endl;

  // float price = 100.48f;
  // float *ptr = &price;
  // cout << ptr << endl;
  // cout << *ptr << endl;

  // float **ptr2 = &ptr;
  // cout << "ptr2 = " << ptr2 << endl;
  // cout << *ptr2 << endl;
  // cout << **ptr2 << endl;

  int a = 12;
  changeA(&a);
  cout << a << endl;

  int b = 15;
  changeB(b);
  cout << b << endl;

  return 0;
}