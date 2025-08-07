#include <iostream>
using namespace std;

int main(){

  // Mine code 😂

  // int n = 5;
  // int arr[n] = {1, 2, 3, 4, 5};
  // int subSum = 0;

  // for (int st = 0; st < n; st++){
  //   for (int end = st; end < n; end++){
  //     for (int i = st; i <= end; i++){
  //       cout << arr[i];
  //       subSum += arr[i];
  //     }
  //     cout << " ";
  //     cout << "Sum is here = " << subSum << "\n";
  //     subSum = 0;
  //   }
  //   cout << endl;
  // }

  // Teacher code 👩‍🏫
  
  // int n = 5;
  // int arr[n] = {1, 2, 3, 4, 5};
  // int subSum = INT16_MIN;

  // for (int st = 0; st < n; st++){
  //   int curSum = 0;
  //   for (int end = st; end < n; end++){
  //     curSum += arr[end];
  //     subSum = max(curSum, subSum);
  //   }
  // }

  // cout << "max subarray = " << subSum << "\n";
  

  int arr[8] = {1, 2, -9, 8, 7, -2, -12, 45};
  int curSum = 0;
  int maxSum = INT16_MIN; 
  for (int i = 0; i < 8; i++){
    curSum += arr[i];
    maxSum = max(maxSum, curSum);
    if (curSum < 0){
      curSum = 0;
    }
  }

  cout << "MAX SUM = " << maxSum;
  

  return 0;
}