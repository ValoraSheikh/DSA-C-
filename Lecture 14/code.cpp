#include <iostream>
using namespace std;

int main(){
  // int height[6] = {1, 4, 3, 7, 5, 6};

  // int maxWaterArea = 0;

  // for (int i = 0; i < 6; i++){
  //   for (int j = i+1; j < 6; j++){
  //     int width = j - i;
  //     int height_i = min(height[i], height[j]);
  //     int waterArea = width * height_i;
  //     maxWaterArea = max(maxWaterArea, waterArea);
  //   }
    
  // }

  // cout << "Maximum water area: " << maxWaterArea << endl;
  // cout << "Expected: 20" << endl;
  

  int maxWaterArea = 0;
  int lp = 0, rp = height.size() - 1;
  
  while (lp < rp) {
    int width = rp - lp;
    int height_i = min(height[lp], height[rp]);
    int waterArea = width * height_i;
    maxWaterArea = max(maxWaterArea, waterArea);
    
    if (height[lp] < height[rp]) {
      lp++;
    } else {
      rp--;
    }
  }


  return 0;
}