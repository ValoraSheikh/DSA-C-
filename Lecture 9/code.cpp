#include <iostream>
#include <vector>
using namespace std;

int main(){
  // Vector syntax
  // vector<int> vec = {1, 2, 3};
  // vector<char> vec1(5, 'a');
  // cout << vec[0] << "\n";
  // cout << vec1[0] << "\n";

  // for(char val: vec1){
  //   cout << val << "\n";
  // }

  // vector<int> vec = {1, 2, 3, 5, 8, 9, 7};
  // cout << "Size = " << vec.size() << "\n";

  // vector<int> vec;

  // cout << "Size = " << vec.size() << "\n";
  // vec.push_back(78);
  // vec.push_back(7);
  // vec.push_back(8);
  // cout << "Size = " << vec.size() << "\n";

  // vec.pop_back();

  // cout << vec.at(0) << "\n";
  // cout << vec.front() << "\n";
  // cout << vec.back() << "\n";

  // for (int i : vec){
  //   cout << i << "\n";
  // }
  

  vector<int>vec;

  vec.push_back(45);
  vec.push_back(12);
  vec.push_back(78);
  vec.push_back(80);
  vec.push_back(13);

  cout << vec.size() << "\n";
  cout << vec.capacity() << "\n";


  return 0;
}