# include <iostream>
using namespace std;

int main() {
  int a = 12;
  // cout << &a << endl;

  //Pointers
  int *p = &a;
  // cout << p << endl;
  // cout << *p << endl;
  // cout << &p << endl;

  cout << "Address of pointer p: " << &p << endl;

  float price = 100.48f;
  float *ptr = &price;
  cout << ptr << endl;
  cout << *ptr << endl;

  float **ptr2 = &ptr;
  cout << "ptr2 = " << ptr2 << endl;
  cout << *ptr2 << endl;
  cout << **ptr2 << endl;

  return 0;
}