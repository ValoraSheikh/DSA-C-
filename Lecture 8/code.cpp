#include <iostream>
using namespace std;

void doubleNo(int arr[], int size){
  cout << "In function";
  for (int i = 0; i < size; i++){
    arr[i] = 5 * arr[i];
  }
  
}

int main() {
  // int arr[5] = {12, 45, 7};
  // double arr1[] = {12.55, 1.245, 78.23};
  
  // cout << arr[-1] << "\n";
  
  // double arr1[5] = {12.55, 1.245, 78.23, 4, 45};
  // int size = sizeof(arr1)/sizeof(double);
  // cout << sizeof(arr1)/sizeof(double) << "\n";

  // for(int i=0; i<size; i++){
  //   cout << arr1[i] << "\n";
  // }

  // int size = 5;
  // int age[size];

  // for(int i=0; i<size; i++){
  //   cout << "Enter age array: ";
  //   cin >> age[i];
  // }

  // for(int i=0; i<size; i++){
  //   cout << age[i] << "\n";
  // }

  // double arr1[6] = {12.55, 1.245, 78.23, 4, 45, 0.23};
  // int index;
  // double smallest = __DBL_MAX__;
  // double largest = __DBL_MIN__;
  // for(int i=0; i<6; i++){
  //   if (arr1[i] < smallest){
  //     smallest = arr1[i];
  //     index = i;
  //   }

  //   // smallest = min(arr1[i], smallest);
  //   largest = max(arr1[i], largest);
  // }

  // cout << "Smallest value is at index  = " << smallest << " & " << index << "\n";
  
  // cout << "Largest = " << largest << "\n";

  // int arr[] = {1, 2, 3};
  
  // doubleNo(arr, 3);
  
  
  // cout << "in main \n";
  // for (int i = 0; i < 3; i++){
    //   cout << arr[i] << "\n";
    // }

    // Linear Search
    
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // int target = 9;

    // for (int i = 0; i < 9; i++){
    //   if (arr[i] == target){
    //     cout << "Your no. exist at: " << i << "\n";
    //     return i;
    //   }
    // }
    // return -1;
    




  return 0;
}