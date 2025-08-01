#include <iostream>
using namespace std;

int decToBi(int decNum){
  int ans = 0;
  int pow = 1;
  while(decNum > 0){
    int rem = decNum%2;
    decNum = decNum/2;
    ans += (rem*pow);
    pow = pow * 10;
  }
  return ans;
}

int biToDec(int binaryNum){
  int ans = 0;
  int pow = 1;
  while(binaryNum){
    int rem = binaryNum % 10;
    ans += rem * pow;
    binaryNum /= 10;
    pow *= 2; 
  }
  return ans;
}



int main(){

  int decNum = 23;
  int binaryNum = 1010010;
  
  // for (int i = 0; i<=10; i++){
  //   cout << decToBi(i) << endl;
  // }
  
  // cout << biToDec(binaryNum) << endl;



  return 0;
}