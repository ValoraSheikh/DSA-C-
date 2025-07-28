#include <iostream>
using namespace std;

int main(){

    // Program to check whether a person can vote or not
    // int age;

    // cout << "Enter your age here:   ";
    // cin >> age;

    // if (age <= 18){
    //     cout << "Sorry kid you are not eligible \n";
    // } else {
    //     cout << "Yes Man / Women you are eligible to vote";
    // }
    
    // Program to check no. is even or not
    // int num;
    // cout << "Enter your no. babe here: ";
    // cin >> num;

    // if (num % 2 == 0){
    //     cout << "This is Even no. Babe";
    // } else {
    //     cout << "Oh my gosh This is ODD no. babe";
    // }
    

    // Making a grading system by using if-else if- else
    // int marks;
    // cout << "Enter your fucking marks here: ";
    // cin >> marks ;

    // if (marks >= 90){
    //     cout << "Hey duffer you have scored more than 90% you are in topper's list\n";
    // } else if(marks >= 80 && marks < 90){
    //     cout << "Oh my God you have scored more than 80%\n";
    // } else if (marks >= 45 && marks < 80 ){
    //     cout << "Finally you passed the exam\n";
    // } else {
    //     cout << "Man you failed the exam\n";
    // }
    

    // Find Characters in lowercase or uppercase

    // char letter;
    // cout << "Enter your character here: " ;
    // cin >> letter;
    // // we can also use (letter >= 65 && letter <= 90)
    // if (letter >= 'a' && letter <= 'z' ){
    //     cout << "lowerCase";
    // } else{
    //     cout << "UpperCase";
    // }
    
    // Ternery Statement
    // int n = -45;
    // cout << (n >= 1 ? "(+)ve" : "(-)ve") << endl;

    // Let's make loops: While loop
    // int n = 20000;
    // int count = 1;
    // while (count <= n){
    //     cout << count << " " ;
    //     count++;
    // }

    // Let's learn about for loop
    // int n = 50;
    // for (int i = 0; i < n; i = i+5){
    //     cout << i << "-";
    // }

    // Sum of number from 1 to n
    // int n;
    // cout << "Enter your value of n here:";
    // cin >> n;
    // int sum = 0;

    // for ( int i = 1; i <= n; i++){
    //     cout << (sum += i) << endl;
    //     if(i == 12){
    //         break; // With the help of break we can quit loop
    //     }
    // }
    //     cout << "Your sum is here: " << sum ;
    
    // Sum of all odd no. from 1 to N
    // int n;
    // cout << "Enter your no. here: ";
    // cin >> n;
    // int oddSum = 0;
    // for (int i = 1; i <= n; i++){
    //     if (i % 2 != 0){
    //         cout << i << " " << endl;
    //         oddSum += i;
    //     }
    // }
    // cout << "Odd Sum = " << oddSum ;

    // Sum of all even no. from 1 to N by while loop
    // int n;
    // cout << "Enter your no. here: ";
    // cin >> n
    // int i = 1;
    // int evenSum = 0;
    // while (i <= n){
    //     if(i % 2 == 0){
    //         evenSum += i;
    //     }
    //     i++;
    // }
    // cout << "Even Sum = " << evenSum ;
    
    // Sum of even no. by for loop
    // int n;
    // cout << "Enter your no. here: ";
    // cin >> n;
    // int evenSum = 0;
    // for (int i = 1; i <= n; i++){
    //     if (i % 2 == 0){
    //         cout << i << " " << endl;
    //         evenSum += i;
    //     }
    // }
    // cout << "Even Sum = " << evenSum ;
    
    // do-while loop
    // int n = 10;
    // int i = 1;
    // do{
    //     cout << i << " ";
    //     i++;
    // } while (i <= n);
    // cout << endl;
    
    // Check if no. is prime or not
    // int n;
    // cout << "Enter your fucking no. here: ";
    // cin >> n;
    // bool isPrime = true;
    // for (int i = 2; i <= n-1; i++){
    //     if(n % i == 0){
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if ( isPrime == true ){
    //     cout << "Oh my god You have Prime no."; 
    // } else {
    //     cout << "Bad luch next time" ;
    // }

// The issue you're encountering is likely due to the fact that int in C++ cannot store such a large number as 101214564210210. In C++, the int type has a limit (typically up to 2 billion for 32-bit systems). The number you're testing is far larger than that, which is causing incorrect behavior. 
// use `long long` instead of `int` for (long long i = 2; i <= n / 2; i++) you can use n/2 rather than n-1

    // And for more better optimization we can use root n 
    // use `i*i<=n` instead of `i <= n-1` Check out chatGPT


    // for (int i = 0; i <= 5; i++){
    // int x = 1000;
    //     for (int i = 0; i <= x; i++){
    //         cout << "*" << " " << endl;   
    //     }
    // }
    // cout << endl;
    
    // Sum of all no. from 1 to N which are divisible 3.
    // int n = 10;
    //     int noDivisibleByThree = 0;
    // for (int i = 1; i <= n; i++){
    //     if (i % 3 == 0){
    //         noDivisibleByThree += i;
    //         cout << i << endl;
    //     } 
    // }
    // cout << "Sum of num divisible by 3 is here: " << noDivisibleByThree;
    
    // Print factorial of a num N
    // int n = 5;
    // int factoN = 1;
    // for (int i = 1; i <=n; i++){
    //     factoN *= i;
    // }
    // cout << factoN << endl;
    
    


    return 0;
}