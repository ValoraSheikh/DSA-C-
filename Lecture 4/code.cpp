#include <iostream>
using namespace std;

int main(){

    // Square Pattern 1 to n
    // int n = 5;
    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= n; j++){
    //         cout << "%" << "  ";
    //     }
    //     cout << endl;
    // }

    // Print A B C D
    // int n = 5;
    // for (int i = 0; i < n; i++){
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++){
    //         cout << ch << "  "; // First print then add
    //         ch += 1;
    //     }
    //     cout << endl;
    // }
    
    // Printing continous num square pattern
    // int n = 3;
    // int num = 1; // value should define outside because inside it can reset
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // Printing continous char square pattern
    // int n = 3;
    // char ch = 'A'; // A -> 65
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << ch << " ";
    //         ch++; // 65++ -> 66++ -> 67, so on
    //     }
    //     cout << endl;
    // }
    
    // Printing triangle with stars
    // int n = 50;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i + 1; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    
    // Printing num in star pattern
    // int n = 5;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i + 1; j++){
    //         cout << (i+1) << " ";
    //     }
    //     cout << endl;
    // }
    
    // Triangle pattern for Alphabet
    // int n = 5;
    // char ch = 'A';
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i + 1; j++){
    //         cout << (ch) << " ";
    //     }
    //     ch += 1;
    //     cout << endl;
    // }

    // Triangle pattern for num
    // int n = 5;
    // for (int i = 0; i < n; i++){
    //     for (int j = 1; j <= i + 1; j++){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Reverse triangle pattern
    // int n = 10;
    // for (int i = 0; i < n; i++){
    //     for (int j = i+1; j > 0; j--){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    
    // Floyd's triangle pattern of num
    // int n = 10;
    // int num = 1;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i+1; j++){
    //         cout << num << " ";
    //         num ++;
    //     }
    //     cout << endl;
    // }

    // Floyd's triangle pattern of alphabet
    // int n = 4;
    // char ch = 'A';
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < i+1; j++){
    //         cout << ch << " ";
    //         ch ++;
    //     }
    //     cout << endl;
    // }
    
    // Reverse triangle pattern for alphabet
    // int n = 4;
    // char ch = 'A';
    // for (int i = 0; i < n; i++){
    //     for (int j = i; j >= 0; j--){
    //         cout << (char)(ch + j) << " "; // Forced conversion should be done
    //     }
    //     cout << endl;
    // }
    
    // Inverted triangle pattern for nums
    // int n = 4;
    // for (int i = 0; i < n; i++){
    //     // spaces
    //     for (int j = 0; j < i; j++){
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n -i ; j++){
    //         cout << (i + 1) ;
    //     }
    //     cout << endl;
    // }
    
    // Inverted triangle pattern for Alphabets
    // int n = 5;
    // char ch = 'A';
    // for (int i = 0; i < n; i++){
    //     // Spaces
    //     for (int j = 0; j < i; j++){
    //         cout << " ";
    //     }
    //     // Alphabets
    //     for (int j = 0; j < n-i; j++){
    //         cout << ch;
    //     }
    //     ch++;
    //     cout << endl;
    // }
    
    // Pyramid Pattern
    // int n = 10;
    // for (int i = 0; i < n; i++){
    //     // spaces
    //     for (int j = 1; j < n-i; j++){
    //         cout << " ";
    //     }
    //     // first no.
    //     for (int j = 1; j <= i+1 ; j++){
    //         cout << j;
    //     }
    //     //second no.
    //     for (int j = i; j > 0; j--){
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    
    // Hollow diamond pattern
    // int n = 10;
    // // Top
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n-i-1; j++){
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != 0){
    //         for (int j = 0; j < 2*i-1; j++){
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // // Bottom
    // for (int i = 0; i < n-1; i++){
    //     // spaces
    //     for (int j = 0; j < i+1; j++){
    //         cout << " ";
    //     }
    //     cout << "*";
    //     if (i != n-2){
    //         for (int j = 0; j < 2*(n-i)-5; j++){
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    


    return 0;
}