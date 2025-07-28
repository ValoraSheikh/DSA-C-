#include <iostream>
using namespace std;

// int printFunc(){
//     cout << "Hello World\n";
//     return 3;
// }

// int sum (int p1, int p2){
//     int s = p1 + p2;
//     return s;
// }

// Min of two num
// int minNo(int p1, int p2){
//     if (p1 > p2){
//         return p2;
//     } else{
//         return p1;
//     }
    
// }

    // int SumN(int n){
    //     int sum = 0;
    //     for (int i = 1; i <= n; i++){
    //         sum += i;
    //     }
    //         return sum;
    // }

    // int factoN(int n){
    //     int facto = 1;
    //     for (int i = 1; i <= n; i++){
    //         facto *= i;
    //     }
    //         return facto;
        
    // }

    // Calculate sum of digits of a number 
    // int sumDigit(int num){
    //     int digiSum = 0;
    //     while (num > 0){
    //         int lastDigi = num % 10;
    //         num /= 10;
    //         digiSum += lastDigi;
    //     }
    //     return digiSum;
    // }

    int facto(int n){
        int fact = 1;
        for (int i = 1; i <= n; i++){
            fact *= i;
        }
        return fact;
    }

    int nCr(int n, int r){
        int fact_n = facto(n);
        int fact_r = facto(r);
        int fact_nmr = facto(n-r);

        return fact_n / (fact_r * fact_nmr);
    }

int main (){
    // int val = printFunc();
    // cout << val << endl;

    // cout << sum(10, 45) << endl;

    // cout << minNo(45, 89) << endl; //arguments

    // cout << SumN(12) << endl;

    // cout << factoN(5) << endl;

    // cout << "Sum of digits is: " << sumDigit();

    int n = 8, r = 2;
    cout << nCr(n, r) << endl;

    return 0;
}
