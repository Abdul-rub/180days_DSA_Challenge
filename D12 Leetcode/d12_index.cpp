#include<iostream>
#include <cmath>
using namespace std;



// 1) Convert small alphabets to capital alphabets like this  "a"  to "A "
// char Change(char name){
//     char uppercase = name-'a'+'A';
//     // name -32;
//    cout << uppercase;
// }

// int main(){
//     char name;
// cout << "Enter a alphabet : ";
// cin>> name;
//   Change( name);

// }


// 2) Find Aremstrong Number

// int CountDigit(int n){
//     int c=0;
//     while (n)
//     {
//         c++;
//         n/=10;
//     }
//     return c;
// }

// bool ArmStrongNum(int num, int digit){
//     int n=num, ans=0,rem;
//     while(n){
//         rem=n%10;
//         n =n/10;
//         ans=ans+pow(rem,digit);
//     }
//     if(ans==num){
//         return true;
//     }
//     return false; 
// }

// int main(){
//     int n;
//     cout<< "Enter a number : ";
//     cin>>n;
//    int digit =  CountDigit(n);
//    cout<< ArmStrongNum(n,digit);
// }


