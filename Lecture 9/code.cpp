#include <iostream>
#include <vector>
using namespace std;

int main(){
  // Vector syntax
  vector<int> vec = {1, 2, 3};
  vector<char> vec1(5, 'a');
  cout << vec[0] << "\n";
  cout << vec1[0] << "\n";

  for(char val: vec1){
    cout << val << "\n";
  }

  return 0;
}