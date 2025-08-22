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

int majorityElementMoore(vector<int> &nums){
  int n = nums.size();
  int ans = 0;
  int count = 0;

  for (int i = 0; i < n; i++){
    if (count == 0){
      ans = nums[i];
    }

    if (nums[i] == ans){
      count++;
    } else {
      count--;
    }
    
  }

    return ans;

}

int buyAndSellStock(vector<int> &prices){
  int minPrice = prices[0];
  int maxProfit = 0;

  for(int price: prices){
    minPrice = min(minPrice, price);
    maxProfit = max(maxProfit, price - minPrice);
  }

  return maxProfit;
}

int bestBuyOptimal(vector<int> &prices){
  int n = prices.size();
  int bestBuy = prices[0];
  int maxProfit = 0;

  for (int i = 0; i < n; i++){
    if (prices[i] > bestBuy){
      maxProfit = max(maxProfit, prices[i] - bestBuy);
    }
    bestBuy = min(bestBuy, prices[i]);
  }

  return maxProfit;
}

int containerWithMostWater(vector<int> &height) {
  int maxWaterArea = 0;
  int n = height.size();

  for (int i = 0; i < n; i++){
    for (int j = i + 1; j < n; j++){
      int width = j - i;
      int height_i = min(height[i], height[j]);
      int waterArea = width * height_i;
      maxWaterArea = max(maxWaterArea, waterArea);
    }
  }

  return maxWaterArea;

}

int OptimalTwoPointerApproach(vector<int> &height) {
  int maxWaterArea = 0;
  int lp = 0, rp = height.size() - 1;

  while (lp < rp){
    int width = rp - lp;
    int height_i = min(height[lp], height[rp]);\
    int waterArea = width * height_i;

    maxWaterArea = max(maxWaterArea, waterArea);

    if (height[lp] < height[rp]) {
      lp++;
    } else {
      rp--;
    }
  }
  
  return maxWaterArea;
}

vector<int> productExceptSelfBrute(vector<int> &nums){
  int n = nums.size();
  vector<int> result(n, 1);

  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      if (i != j){
        result[i] *= nums[j];
      }
    }
  }

  return result;
}

vector<int> productExceptSelfNaive(vector<int> &nums) {
  int n = nums.size();
  long long total = 1;

  for(int num: nums) total *= num;

  vector<int> answer(n);

  for (int i = 0; i < n; i++){
    answer[i] = total / nums[i];
  }
  

  return answer;
}

int main(){
  vector<int> vec = {1, 2, 2, 2, 5, 8, 8, 8, 8, 8};

  // cout << majorityElementBruteForce(vec) << "\n";
  // cout << majorityElementMoore(vec) << "\n";

  vector<int> prices = {7, 1, 5, 3, 6, 4};

  // cout << buyAndSellStock(prices) << "\n";

  vector<int> prices1 = {7, 1, 5, 3, 6, 4};

  // cout << bestBuyOptimal(prices1) << "\n";

  vector<int> height = {1,8,6,2,5,4,8,3,7};

  // cout << containerWithMostWater(height) << "\n";

  // cout << OptimalTwoPointerApproach(height) << "\n";

  vector<int> nums = {1, 2, 3, 4, 5};

  // vector<int> result = productExceptSelfBrute(nums);
  //   for (int num : result) {
  //     cout << num << " "; // Print each element
  //   }
  //   cout << "\n";

  vector<int> result = productExceptSelfNaive(nums);
  for (int num : result) {
    cout << num << " "; // Print each element
  }
  cout << "\n";

  return 0;
}