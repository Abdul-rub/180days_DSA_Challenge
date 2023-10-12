#include<iostream>
using namespace std;



// 1: Find the cube of a number using Function. 
//     int MakeCube(int n){
//         int cube = n*n*n;
//         cout<<cube;
//     }

// int main(){
//      MakeCube( 2);
// }



// 2: Reverse a number n using Function, Constraints: -5000<=n<=5000

// int ReverseNumber(int n) {
//     int reversed = 0;

//     while (n != 0) {
//         int digit = n % 10;
//         reversed = reversed * 10 + digit;
//         n /= 10;
//     }

//     return reversed;
// }

// int main() {
//     int n = 12345; 
//     int reversed = ReverseNumber(n);
//     cout << "Reversed number: " << reversed << endl;
//     return 0;
// }


// 3: There are three numbers a,b,c. Put the value of a into b, put value of b into c and put value of c into a. Do it using Function.

// void SwapValues(int& a, int& b, int& c) {
//     int temp = a;
//     a = b;
//     b = c;
//     c = temp;
// }

// int main() {
//     int a = 10, b = 20, c = 30;

//     cout << "Before swapping: a=" << a << ", b=" << b << ", c=" << c << endl;

//     SwapValues(a, b, c);

//     cout << "After swapping: a=" << a << ", b=" << b << ", c=" << c << endl;

//     return 0;
// }

// 4: Swap 2 numbers a, b without using extra variables. Range of 
// -10000<=a,b<=100000.

// void printHelloCoderArmy(int n) {
//     for (int i = 0; i < n; i++) {
//         cout << "Hello Coder Army" << endl;
//     }
// }

// int main() {
//     int n = 5; 
//     printHelloCoderArmy(n);
//     return 0;
// } 

// 6: Given two numbers n, r. Find nCr (Combination). Use Function here.

// #include <iostream>
// using namespace std;

// int factorial(int num) {
//     if (num == 0 || num == 1) {
//         return 1;
//     } else {
//         return num * factorial(num - 1);
//     }
// }

// int nCr(int n, int r) {
//     int result;
//     result = factorial(n) / (factorial(r) * factorial(n - r));
//     return result;
// }

// int main() {
//     int n = 5; 
//     int r = 2; 

//     int result = nCr(n, r);
//     cout << n << "C" << r << " = " << result << endl;

//     return 0;
// }





