#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < n; i++){
    prefix = prefix[i-1] * nums[i-1]; 
  }

  for (int i = n-2; i => 0; i--){
    suffix = suffix[i+1] * nums[i+1];
  }

  for (int i = 0; i < n; i++){
    ans = suffix[i] * prefix[i];
  }
  
  
  return ans;
}