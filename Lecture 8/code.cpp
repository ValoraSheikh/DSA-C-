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
    
    
    // Reverse an array

    // Mine brain 😂
    
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int size = 9;
    // int start = 0;
    // int end = size - 1;

    // for (int i = 0; i < size; i++){
    //   cout << "Arr =" << arr[i] << "\n";
    // }

    // for (int i = 0; i < size; i++){
    //   if (start < end){
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    //   }
      
    // }

    // cout << "Swaping started" << "\n";

    // for (int i = 0; i < size; i++){
    //   cout << "Arr = " << arr[i] << "\n";
    // }

    // // Teacher
    // while (start < end){
    //   swap(arr[start], arr[end]);
    //   start++;
    //   end--;
    // }
    
    // int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int sum = 0;
    // int prod = 1;
    // for (int i = 0; i < 9; i++){
    //   cout << "Arr = " << arr[i] << "\n";
    //   sum += arr[i];
    //   prod *= arr[i];
    // }

    // cout << sum << "\n";
    // cout << prod << "\n";


  // double arr1[6] = {12.55, 1.245, 78.23, 4, 45, 0.23};
  // double smallest = __DBL_MAX__;
  // double largest = __DBL_MIN__;
  // int smallIndex = 0;
  // int largeIndex = 0;

  // for (int i = 0; i < 6; i++) {
  //   smallest = min(arr1[i], smallest);
  //   largest = max(arr1[i], largest);
  // }

  // for (int i = 0; i < 6; i++) {
  //   if (arr1[i] == smallest) smallIndex = i;
  //   if (arr1[i] == largest) largeIndex = i;
  // }

  // Swap only once
  // swap(arr1[smallIndex], arr1[largeIndex]);

  // for (int i = 0; i < 6; i++) {
  //   cout << "Arr[" << i << "] = " << arr1[i] << "\n";
  // }

  // cout << "Smallest = " << smallest << " at index = " << smallIndex << "\n";
  // cout << "Largest = " << largest << " at index = " << largeIndex << "\n";

  // int arr1[9] = {1, 1, 2, 5, 88, 88, 7, 7, 3};

  
  // for (int i = 0; i < 9; i++){
  //   bool alreadyChecked = false;

  //   for (int k = 0; k < i; k++){
  //     if (arr1[i] == arr1[k]){
  //       alreadyChecked = true;
  //       break;
  //     }
  //   }

  //   if (alreadyChecked) continue;

  //   bool notUnique = false; 

  //   for (int j = 0; j < 9; j++){
  //     if (i != j && arr1[i] == arr1[j]){
  //       notUnique = true;
  //       break;
  //     }
  //   }

  //   if (notUnique) {
  //     cout << arr1[i] << " is NOT unique\n";
  //   } else {
  //     cout << arr1[i] << " is UNIQUE\n";
  //   }
  // }


  // To find intersection in array

  int arr1[9] = {1, 2, 5, 88, 7, 3, 44, 9, 10};

  int arr2[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++){
    
    for (int j = 0; j < 9; j++){
      if (arr2[i] == arr1[j]){
        cout << arr2[i] << " is at " << j << " in arr1\n";
        break;
      }
    }
  }
  



  return 0;
}