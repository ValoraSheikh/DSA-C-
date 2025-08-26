#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &pages, int n, int students, int maxAllowedPages){
  int stu = 1, pagesSum = 0;

  for (int i = 0; i < n; i++){

    if (pages[i] > maxAllowedPages) return false;
    
    if (pages[i] + pagesSum <= maxAllowedPages){
      pagesSum += pages[i];
    } else {
      stu++;
      pagesSum = pages[i];
    }
    
  }

  return stu > students ? false : true;

  

}

int allocateBooks(vector<int> &pages, int students){
  int n = pages.size();
  if (students == 0 || n == 0) return -1;
  if (students > n) return -1;

  int sum = 0;
  for(int i = 0; i < n; i++){
    sum += pages[i];
  }
  int start = 0, end = sum;
  int result = -1;

  while (start <= end){
    int mid = start + (end - start) / 2;

    if (isValid(pages, n, students, mid)){
      result = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  return result;
  
}


int main() {
    vector<int> pages = {12, 34, 67, 90};
    int students = 2;
    int result = allocateBooks(pages, students);
    if (result != -1) {
        cout << "Minimum pages: " << result << endl;
    } else {
        cout << "Not possible to allocate books." << endl;
    }
    return 0;
}