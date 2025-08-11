#include <iostream>
#include <vector>
using namespace std;

int main(){
  // vector<int> vec = {4, 5, 8, 9};
  // int n = vec.size();
  // int target = 17;
  // vector<int> ans;

  // for (int i = 0; i < n; i++){
  //   for (int j = i + 1; j < n; j++){
  //     if (vec[i] + vec[j] == target){
  //       ans.push_back(vec[i]);
  //       ans.push_back(vec[j]);
  //     }
  //   }
  // }

  // for (int val: ans){
  //   cout << val << "\n";
  // }

  // vector<int> vec = {4, 5, 8, 9, 10, 5};
  // int n = vec.size();
  // int target = 15;
  // int pairSum = 0;
  // vector<int> ans;

  // int i = 0, j = n-1;

  // while (i < j){
  //   pairSum = vec[i] + vec[j];
  //   if (pairSum < target){
  //     i++;
  //   } else if (pairSum > target){
  //     j--;
  //   } else{
  //     ans.push_back(vec[i]);
  //     ans.push_back(vec[j]);
  //     break;
  //   }
  // }

  // for (int val: ans){
  //   cout << val << "\n";
  // }

  // // vector<int> vec = {1, 1, 2, 4, 5, 4 ,1, 1, 1};
  // int n = vec.size();
  // int freq;

  // for(int val: vec){
  //   freq = 0;
  //   for(int elem: vec){
  //     if(elem == val){
  //       freq ++;
  //     }
  //   }
  //   if(freq > n/2){
  //     return val;
  //   }
  // }

  // vector<int> nums = {1, 1 ,1, 1, 1, 4, 4 , 5, 5, 5, 5, 5, 5, 5, 5};
  // int freq = 1, ans = nums[0];
  // int n = nums.size();

  // for (int i = 1; i < n; i++){
  //   if (nums[i] == nums[i - 1]){
  //     freq++;
  //   } else {
  //     freq = 1;
  //     ans = nums[i];
  //   }
    
  //   if (freq > n/2){
  //     cout << ans << "\n";
  //   }
    
  // }
  
  vector<int> nums = {1, 1 ,1, 1, 1, 4, 4 , 5, 5, 5, 5, 5, 5, 5, 5};
  int freq = 0, ans = 0;
  int n = nums.size();

  for (int i = 0; i < n; i++){
    if (freq == 0){
      ans = nums[i];
    } 
    
    if (ans == nums[i]){
      freq++;
    } else {
      freq --;
    }
  }
  
  cout << ans << "\n";

  // if (freq > n/2){
  // }
  
  

  

  return 0;
}