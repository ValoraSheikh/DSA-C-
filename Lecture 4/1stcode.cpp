#include <iostream>
using namespace std;

int main(){
    int n = 8;
    for (int i = 1; i <= n; i++){
        // Star Triangle

        for (int j = 1; j <= i ; j++){
            cout << "*";
        }
        for (int j = n; j >=  i; j--){
            cout << " " ;
        }
        for (int j = n; j >= i; j--){
            cout << " " ;
        }
        for (int j = 1; j <= i ; j++){
            cout << "*";
        }
        
        cout << endl;
    }

    for (int i = 0; i <= n; i++){

        for (int j = n; j >= i ; j--){
            cout << "*";
        }
        for (int j = 1; j <= i ; j++){
            cout << " " ;
        }
        
        for (int j = 1; j <= i ; j++){
            cout << " " ;
        }
        for (int j = n; j >= i ; j--){
            cout << "*";
        }
        cout << endl;
    }
    
    
    
}