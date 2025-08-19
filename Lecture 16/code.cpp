# include <iostream>
using namespace std;

int main() {
  int a = 12;
  cout << &a << endl;

  //Pointers
  int *p = &a;
  cout << p << endl;
  cout << *p << endl;
  cout << &p << endl;
  
  float price = 100.48f;
  float *ptr = &price;
  cout << ptr << endl;
  cout << *ptr << endl;

  return 0;
}