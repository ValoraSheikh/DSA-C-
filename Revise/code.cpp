#include <iostream>
#include <vector>
using namespace std;

int majorityElementBruteForce(vector<int> &nums){
  int n = nums.size();

  for (int i = 0; i < n; i++){
    int count = 0;

    for (int j = 0; j < n; j++){
      if (nums[i] == nums[j]){
        count++;
      }
    }

    if (count >= n/2){
      return nums[i];
    }
    
    
  }
  return -1;
}

int main(){
  vector<int> vec = {1, 2, 2, 2, 5, 8, 8, 8, 8};

  cout << majorityElementBruteForce(vec) << "\n";



return 0;
}