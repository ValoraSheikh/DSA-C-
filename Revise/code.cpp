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

int binarySearchIterative(vector<int> &arr, int tar){
  int start = 0, end = arr.size() - 1;

  while (start <= end){
    int mid = start + (end - start) / 2;

    if(arr[mid] == tar){
      return mid;
    } else if(arr[mid] < tar){
      start = mid + 1;
    } else {
      end = mid - 1;
    }

  }
  return -1;
}

int searchInRotatedArray(vector<int> &arr, int target){

  int left = 0, right = arr.size() - 1;

  while (left <= right){
    int mid = left + (right - left) / 2;

    if (arr[mid] == target){
      return mid;
    }

    if (arr[left] <= arr[mid]){ // left sorted
      
      if (arr[left] <= target && target <= arr[mid]){
        right = mid - 1;
      } else{
        left = mid + 1;
      }

    } else { // right sorted

      if(arr[mid] <= target && target <= arr[right]){
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    } 
  }

  return -1;
  
}

int peakInMountainArray(vector<int> &arr) {
  int start = 1, end = arr.size() - 2;

  while (start <= end){
    int mid = start + (end - start) / 2;

    if(arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1]){
      return mid;
    }

    if(arr[mid] < arr[mid + 1]){
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return start;
}

int singleElement(vector<int>& arr) {
    int start = 0, end = arr.size() - 1;

    while (start < end) {
      int mid = start + (end - start) / 2;

      if (mid % 2 == 0) { // Even index

        if (arr[mid] == arr[mid + 1]) {
            start = mid + 2; // Single is on the right
        } else {
            end = mid; // Single is on the left
        }

      } else { // Odd index
        
        if (arr[mid] == arr[mid - 1]) {
            start = mid + 1; // Single is on the right
        } else {
            end = mid - 1; // Single is on the left
        }
      }
    }
    return arr[start]; // or arr[end]
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

  // vector<int> result = productExceptSelfNaive(nums);
  // for (int num : result) {
  //   cout << num << " "; // Print each element
  // }
  // cout << "\n";

  // Pointer

  int a = 10;
  // cout << "Value of a: " << a << endl;
  // cout << "Value of address of a: " << &a << endl;

  int *ptr = &a;

  // cout << "Value of ptr: " << ptr << endl;
  // cout << "Value of address of ptr: " << &ptr << endl;
  // cout << "Value pointed by ptr: " << *ptr << endl;

  
  // Double pointer
  int **dptr = &ptr;

  // cout << "Value of dptr: " << dptr << endl;
  // cout << "Value of address of dptr: " << &dptr << endl;
  // cout << "Value pointed by dptr: " << *dptr << endl;
  // cout << "Value pointed by ptr (via dptr): " << **dptr << endl;
  
  // Pointer Arithmetic

  // cout << "Value of ptr + 1: " << (ptr + 1) << endl;
  // cout << "Value of dptr + 1: " << (dptr + 1) << endl;

  int arr[5] = {1, 2, 3, 4, 5};
  int *arrPtr = arr;

  // cout << "Value of arr: " << arr << endl;
  // cout << "Value of arrPtr: " << *arrPtr << endl;

  // for(int point: arr){
    // cout << &point << " ";
  // }


  // for (int i = 0; i < 5; i++){
    // cout << (arrPtr + i) << " ";
  // }
  

  // Binary search algo

  vector<int> arr1 = {1, 2, 3, 4, 5};

  int target = 5;
  // int index = binarySearchIterative(arr1, target);
  // if (index != -1) {
  //   cout << "Element found at index: " << index << endl;
  // } else {
  //   cout << "Element not found" << endl;
  // }

  vector<int> rotatedArr = {4,5,6,7,0,1,2};
  // int rotatedIndex = searchInRotatedArray(rotatedArr, target);
  // if (rotatedIndex != -1) {
  //   cout << "Element found at index: " << rotatedIndex << " which is: " << rotatedArr[rotatedIndex] << endl;
  // } else {
  //   cout << "Element not found" << endl;
  // }

  vector<int> mountainArr = {1,2,3,4,5,3,1};
  // int peakIndex = peakInMountainArray(mountainArr);
  // cout << "Peak element is: " << mountainArr[peakIndex] << endl;

  vector<int> singleArr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 10};
  // int singleIndex = singleElement(singleArr);
  // cout << "Single element is: " << singleArr[singleIndex] << endl;

  return 0;
}