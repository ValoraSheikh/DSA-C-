#include <iostream>
#include <vector>
using namespace std;

int binarySearchAlgo(vector<int> arr, int tar){
  int st = 0, ed = arr.size() - 1;

  while (st <= ed){
    int mid = (st + ed) / 2;

    if (tar > arr[mid]){
      st = mid + 1;
    } else if (tar < arr[mid]){
      ed = mid - 1;
    } else {
      return mid;
    }
  }

  return -1;
}

int main() {
  vector<int> numbers = {1, 2, 3, 4, 5};
  int target = 5;
  int result = binarySearchAlgo(numbers, target);

  // if (result != -1) {
  //   cout << "Element found at index: " << result << endl;
  // } else {
  //   cout << "Element not found" << endl;
  // }
  
  vector<int> numbers1 = {1, 2, 3, 4, 5, 6};
  int target1 = 6;
  int result1 = binarySearchAlgo(numbers1, target1);
  if (result1 != -1) {
    cout << "Element found at index: " << result1 << endl;
  } else {
    cout << "Element not found" << endl;
  }

}
