#include <iostream>
#include <vector>
using namespace std;

int main(){
  vector<int> vec = {4, 5, 8, 9};
  int n = vec.size();
  int target = 17;
  vector<int> ans;

  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      if (vec[i] + vec[j] == target){
        ans.push_back(vec[i]);
        ans.push_back(vec[j]);
      }
    }
  }

  for (int val: ans){
    cout << val << "\n";
  }

  return 0;
}