#include <iostream>
using namespace std;

int main(){

  // int n=20;
  // for(int i=1; i<=n; i++){
  //   for(int j=1; j<=n; j++){
  //     cout << "&" << "  ";
  //   }
  //   cout << "\n";
  // }

  // int n=10;
  // for(int i=1; i<=n; i++){
  //   char ch = 'A';
  //   for(int j=1; j<=n; j++){
  //     cout << ch << "  ";
  //     ch+=1;
  //   }
  //   cout << "\n";
  // }

  // int n=3;
  // int num = 1;
  // for(int i=0; i<n; i++){
  //   for(int j=0; j<n; j++){
  //     cout << num << "  ";
  //     num++;
  //   }
  //   cout << "\n";
  // }

  // char ch='A';
  // int n = 5;
  // for(int i=0; i<n; i++){
  //   for(int j=0; j<n; j++){
  //     cout << ch << "  ";
  //     ch++;
  //   }
  //   cout << "\n";
  // }

  // Triangle pattern

  // int n=6;
  // for(int i=0; i<n; i++){
  //   for(int j=0; j<i+1; j++){
  //     cout << "*" << " ";
  //   }
  //   cout << "\n";
  // }

  // int n=6;
  // char ch= 'A';

  // for(int i=0; i<n; i++){
  //   for(int j=0; j<i+1; j++){
  //     cout << ch << " ";
  //   }

  //   ch++;
  //   cout << "\n";
  // }

  // int n=6;

  // for(int i=0; i<n; i++){
  //   for(int j=0; j<i+1; j++){
  //     cout << (i+1) << " ";
  //   }

  //   cout << "\n";
  // }

  // int n=6;

  // for(int i=0; i<n; i++){

  //   for(int j=0; j<i+1; j++){
  //     cout << (j+1) << " ";
  //   }

  //   cout << "\n";
  // }

  // int n=6;

  // for(int i=0; i<=n-1; i++){

  //   for(int j=i+1; j>0; j--){
  //     cout << j << " ";
  //   }

  //   cout << "\n";
  // }

  // int n=6;
  // char ch = 'A';
  // for(int i=0; i<n; i++){
  //   for(int j=0; j<i+1; j++){
  //     cout << ch << " ";
  //     ch++;
  //   }
  //   cout << "\n";
  // }

  // int n=6;

  // for(int i=0; i<=n-1; i++){
  //   char ch = 'A' + i;

  //   for(int j=i+1; j>0; j--){
  //     cout << ch-- << " ";
  //   }

  //   cout << "\n";
  // }

  // int n = 3;
  // for(int i=0; i<n; i++){

  //   for(int j=0; j<i; j++){
  //     cout << " ";
  //   }

  //   for(int j=0; j<n-i; j++){
  //     cout << (i+1);
  //   }

  //   cout << endl;

  // }

  // int n = 5;
  // char ch = 'A';
  // for(int i=0; i<n; i++){

  //   for(int j=0; j<i; j++){
  //     cout << " ";
  //   }

  //   for(int j=0; j<n-i; j++){
  //     cout << ch;
  //   }

  //   ch++;
  //   cout << endl;
  // }

  // Mine code 😂
  //  int n = 5;
  //  for(int i=0; i<n; i++){

  //   for(int j=0; j<n-i; j++){
  //     cout << " ";
  //   }

  //   for(int j=0; j<= i; j++){
  //     cout << (j+1);
  //   }

  //   for(int j=i; j>0; j--){
  //     cout << (j);
  //   }

  //   cout << endl;
  // }

  // Teacher's code 🙄

  // int n = 5;
  // for(int i=0; i<n; i++){

  //   for(int j=0; j<n-i-1; j++){
  //     cout << " ";
  //   }

  //   for(int j=1; j<= i+1; j++){
  //     cout << (j);
  //   }

  //   for(int j=i; j>0; j--){
  //     cout << (j);
  //   }

  //   cout << endl;
  // }

  // Mine brain 🧠🦕🌿

  // int n = 4;
  // for(int i = 0; i<n; i++){

  //   for(int j=0; j<n-i-1; j++){
  //     cout << " ";
  //   }

  //   cout << "*";

  //   if(i != 0){
  //     for(int j=0; j<2*i-1; j++){
  //       cout << " ";
  //     }
  //     cout << "*";
  //   }

  //   cout << endl;
  // }

  // for(int i = 0; i<n; i++){

  //   for(int j=0; j<i; j++){
  //     cout << " ";
  //   }
  //   cout << "*";

  //   for(int j=0; j<n-i-1; j++){
  //     cout << " ";
  //   }

  //   for(int j=0; j<n-i-1; j++){
  //     cout << " ";
  //   }
  //   if(i != n-1){
  //   cout << "*";
  // }
  //   cout << endl;
  // }

  // Teacher code 👩‍🏫 (madam ji, Adyapika 😍🥰)

  // int n = 4;
  // for (int i = 0; i < n; i++)
  // {

  //   for (int j = 0; j < n - i - 1; j++)
  //   {
  //     cout << " ";
  //   }

  //   cout << "*";

  //   if (i != 0)
  //   {
  //     for (int j = 0; j < 2 * i - 1; j++)
  //     {
  //       cout << " ";
  //     }
  //     cout << "*";
  //   }

  //   cout << endl;
  // }

  // for (int i = 0; i < n - 1; i++){

  //   for (int j = 0; j < i+1; j++){
  //     cout << " ";
  //   }

  //   cout << "*";

  //   if (i != n - 2){
  //     for (int j = 0; j < 2*(n-i)-5; j++){
  //       cout << " ";
  //     }

  //     cout << "*";
  //   }

  //   cout << endl;
  // }

// int n=4;
//   // Phase 1

//   for (int i=0; i<=n-1; i++ ){

//     for (int j = 0; j <= i; j++){
//       cout << "*";
//     }

//     for(int j=0; j<n-i-1; j++){
//       cout << " ";
//     }

//     for(int j=0; j<n-i-1; j++){
//       cout << " ";
//     }

    
//     for (int j = 0; j <= i; j++){
//       cout << "*";
//     }

//     cout << endl;
    
//   }


//   // 2nd phase

//     for (int i=0; i<=n-1; i++ ){

//     for(int j=0; j<n-i-1; j++){
//       cout << "*";
//     }

//     for (int j = 0; j <= i; j++){
//       cout << " ";
//     }

    
//     for (int j = 0; j <= i; j++){
//       cout << " ";
//     }

//     for(int j=0; j<n-i-1; j++){
//       cout << "*";
//     }

    

//     cout << endl;
//     // titli udoi bus ne chadi driver ne bola aaj mere padd titli boli haat badmash mera ghar hai pass
//   }

  return 0;
}