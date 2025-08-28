#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isValid(vector<int> &stall, int n, int cow, int minAllowed){
  int cowCount = 1;
  int lastStall = stall[0];

  for (int i = 1; i < n; i++){

    if (stall[i] - lastStall >= minAllowed){
      cowCount++;
      lastStall = stall[i];
    }

    if (cow == cowCount){
      return true;
    }
  }

  return false;
}

int aggressiveCow(vector<int> &stall, int n, int cow){
  sort(stall.begin(), stall.end());

  int start = 1, end = stall[n - 1] - stall[0];

  int result = -1;

  while (start <= end){
    int mid = start + (end - start)/2;

    if (isValid(stall, n, cow, mid)){
      result = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    
  }

  return result;
  
}

int main() {
  vector<int> stall = {1, 2, 4, 8, 9};
  int n = stall.size();
  int cow = 3;
  cout << aggressiveCow(stall, n, cow) << endl;

    return 0;
}