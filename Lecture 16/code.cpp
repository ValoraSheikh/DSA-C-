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

  // int a = 12;
  // changeA(&a);
  // cout << a << endl;

  // int b = 15;
  // changeB(b);
  // cout << b << endl;

  // Array Pointer
  // int arr[] = {1, 2, 3, 4, 5};
  // int *ptr = arr;
  // cout << "Array elements using pointer: ";
  // for (int i = 0; i < 5; i++) {
  //   cout << *(ptr + i) << " ";
  // }
  // cout << endl;


  //Pointer Arithmetic
  // int a = 10;
  // int *p = &a;
  // cout << "Address using pointer: " << p << endl;
  // cout << "Address using pointer after ++: " << ++p << endl;
  // cout << "Address using pointer before ++: " << p++ << endl;
  // cout << "Address using pointer after ++: " << p << endl;
  // cout << "Address using pointer before --: " << --p << endl;
  // cout << "Address using pointer after +2: " << p + 2 << endl;

  int arr[] = {1, 2, 3, 4, 5};
  int *ptr = arr;
  cout << *(ptr + 2) << endl;
  cout << *(ptr + 3) << endl;
  ptr++;
  cout << *ptr << endl;

  return 0;
}