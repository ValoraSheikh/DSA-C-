#include <iostream>
using namespace std;

int main() {
    int st = 0;
    int end = A.size() - 1;

    while (st <= end){
      int mid = st + (end - st) / 2;

      if (A[mid] == target){
        return mid;
      }

      if (A[st] <= A[mid]){ // left sorted
        if (A[st] <= target && target <= A[mid]){
          end = mid - 1;
        } else {
          st = mid + 1;

        } 
        
      } else { // right side is sorted
          
          if (A[mid] <= target && target <= A[end]){
            st = mid + 1;
          } else {
            end = mid - 1;
          }
        }
      
      
    }
    


    return 0;
}