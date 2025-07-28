#include <iostream>
using namespace std;

// int decToBinary(int decNum){
//     // int decNum = 50;
//     int ans = 0;
//     int pow = 1;
//     while (decNum > 0){
//         int rem = decNum % 2;
//         decNum = decNum / 2;

//         ans += (rem * pow);
//         pow = pow * 10;
//     }
//     return ans;
// }


// int main(){
//     int decNum = 50;
//     cout << decToBinary(decNum) << endl;
    
    
//     return 0;
// }

int biTode(int biNum){
    int ans = 0, pow = 1;
    while (biNum > 0){
        int rem = biNum % 10;
        ans += rem * pow;
        biNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main(){
    int biNum;
    cout << biTode(100110) << endl;
}