#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int painter, int maxAllowed){
  int painterCount = 1, sum = 0;

  for (int i = 0; i < n; i++){

    if (arr[i] > maxAllowed){
      return false;
    }
    
    if (arr[i] + sum <= maxAllowed){
      sum += arr[i];
    } else {
      painterCount++;
      sum = arr[i];
    }
  }

  return painterCount > painter ? false : true;
}

int painterPartition(vector<int> arr, int n, int painter){
  int start = 0, end = 0;

  if (painter > n) {
    return false;
  }

  for (int i = 0; i < n; i++){
    end += arr[i];
  }

  int result = -1;

  while (start <= end){
    int mid = start + (end - start) / 2;

    if (isValid(arr, n, painter, mid)){
      result = mid;
      end = mid - 1;
    }
    else {
      start = mid + 1;
    }
  }

  return result;
}

int main (){
  vector<int> arr = {40, 30, 10, 20};
  int k = arr.size();
  int painter = 2;
  int result = painterPartition(arr, k, painter);
  cout << "Minimum time required: " << result << endl;

  return 0;
}