#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& v) {
  int n = v.size();
  bool isSorted = false;

  for (int i = 0; i < n; i++){

    for (int j = 0; j < n-i-1; j++){
      if (v[j] > v[j+1]){
        swap(v[j], v[j+1]);
        isSorted = true;
      }
    }
    if (!isSorted) break;
  }
}

void selectionSort(vector<int>& v) {
  int n = v.size();

  for (int i = 0; i < n-1; i++){
    int smallIndex = i;
    for (int j = i+1; j < n; j++){
      if (v[j] < v[smallIndex]){
        smallIndex = j;
      }
      
    }
    swap(v[i], v[smallIndex]);
  }
  
}

void insertionSort(vector<int>& v) {
  int n = v.size();
  
  for (int i = 0; i < n; i++){
    int curr = v[i];
    int prev = i-1;

    while (prev >= 0 && v[prev] > curr){
      v[prev+1] = v[prev];
      prev--;
    }
    v[prev+1] = curr;
  }
  
}

int main(){
  vector<int> v = {5, 4, 3, 2, 1};
  bubbleSort(v);

  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }

  cout << endl;

  selectionSort(v);

  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }

  cout << endl;

  insertionSort(v);

  for(int i = 0; i < v.size(); i++){
    cout << v[i] << " ";
  }

  return 0;
}