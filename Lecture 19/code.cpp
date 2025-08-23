#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> arr){
  int start = 1; // Changes for edge cases
  int end = arr.size() - 2;
  // int start = 0;
  // int end = arr.size() - 1;

  
  while (start <= end){
    int mid = start + (end - start) / 2;
    if (arr[mid-1] < arr[mid] > arr[mid+1]){
      return mid;
    }

    if (arr[mid - 1] < arr[mid]){
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    return mid;
  }
  
}

int main() {
  vector<int> arr = {1, 3, 20, 4, 1};
  int peak = findPeak(arr);
  cout << "Peak element is: " << arr[peak] << endl;
  
  return 0;
}
