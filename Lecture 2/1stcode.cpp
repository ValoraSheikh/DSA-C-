#include <iostream>
using namespace std;


int main(){
    // cout <<"Hello World" << endl;
    // cout <<"Hello World" << "\n";
    // cout <<"Hello World \n from Aman Sheikh ";
    // cout <<"Hello World" << " by Aman Sheikh" << endl;
    // cout <<"Hello World \n by Aman Sheikh" ;
    // int age = 25;
    // char grade = 'A';
    // cout << age << endl;
    // cout << grade << endl;
    // cout << sizeof(grade) << endl;

    // float PI = 3.14f ;
    // cout << PI << endl;

    // bool isSafe = true;
    // cout << isSafe << endl;
    
    // double price = 1400.21;
    // cout << price << endl;
    
    // char name1 = 'a'; // This implicit conversion
    // int value = name1;

    // cout << value << endl;

    // double price = 1121.23;
    // int newPrice = (int) price; // This is explicit forced conversion
    // cout << newPrice << endl;

    // Input in C++

    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // cout << "Your age is " << age << endl;

    // double price;
    // cout << "Enter item price: ";
    // cin >> price;
    // cout << "Your price is : " << price << endl;


    // Now Operators in C++ : Arithematic

    // int a = 12, b = 6;
    // int sum = a + b;
    // cout << sum << endl;
    // cout << "Sum = " << (a + b) << endl;
    // cout << "Difference = " << (a - b) << endl;
    // cout << "Product = " << (a * b) << endl;
    // cout << "Divide = " << (a / b) << endl;
    // cout << "Modulo = " << (a % b) << endl;

    // cout << (5 / 2) << endl; // 2

    // int a = 5;
    // double b = 2;
    // cout << (a / b) << endl; // 2.5

    // cout << (5 / (double)2 ) << endl; // Here we just typecast 2 to get 2.5

    // int ans = (5 / (double)2 ); // Here you store value in int container that why ans is not in decimal 
    // cout << ans << endl; // 2

    // Relational Operators
    

    // cout << (5 < 4) << endl; // False -> 0
    // cout << (5 < 10) << endl; // True -> 1
    // cout << (5 <= 5) << endl; // True -> 1
    // cout << (5 != 5) << endl; // True -> 0

    // Logical operators
    // cout << !(5 < 10) << endl; // reverse then ans : false
    // cout << ((5 < 2) || (45 < 55)) << endl; // If any one is true than all is true
    

    // Sum of 2 numbers

    // int a;
    // cout << "Enter a: ";
    // cin >> a;

    // int b;
    // cout << "Enter b: ";
    // cin >> b;

    // int sum = a + b;
    // cout << "Your no. is here: " << sum << endl;

    int a = 10;
    int b = a++;
    int c = a--;

    cout << "b = " << b << endl; // kaam; update 10
    cout << "a = " << a << endl; // update 11
    cout << "c = " << c << endl; // update 11
    cout << "a = " << a << endl; // update 11




    return 0;
}