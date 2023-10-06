//HomeWork 
// If-else
// 1) Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
// 2) Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
// 3) Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.
// 4) Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

//Loops
// 5)Print “India will win the World Cup 2023”, 20 times.
// 6)Print all Odd numbers from 1 to n, take n as an input from the user.
// 7)Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.
// 8) Print number from 280 to 250 with the help of for loop.
// 9)Print char from ‘A’ to ‘Z’ with the help of a for loop.
// 10 )Print char from ‘Z’ to ‘A’ with the help of a for loop.
// 11) There is an Arithmetic Progression, First number is 220 and Common Difference is 7. So print all the numbers from 220 to 730 which follow the AP.
// 12) Print Sum of square of first n natural number.
// 13) Print Sum of cube of first n natural number
// 14) Print n’th Fibonacci number.





#include<iostream>
using namespace std;

//1) Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.
// int main(){

// int a,b;
// a= 12;
// b=3;
// if(a>b){
//     cout << a << " is greater than " << b;
// }else{
//     cout << b << " is greater than " << a;
// }
    
// }

// 2) Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.
// int main(){
// int age = 18;

// if(age>18){
//        cout << "Adult";
// }else{
//     cout << "Teenager";
// }
// }


// 3) Take a number in input (ex n) and print the corresponding month to it. 
//Ex: for n=1, print january, n=2, print feburary like this you need to give output.
// It is given that n will be greater than 0 and less than 13.

// int main(){
//     int month;
//     cout << "Enter a month number: ";
//     cin >> month;
//     if(month==1 ){
//         cout<< "January";
//     }else if (month==2){
//         cout << "Feburary";
//     }else if (month==3){
//         cout << "March";
//     }else if (month==4){
//         cout << "April";
//     }else if (month==5){
//         cout << "May";
//     }else if (month==6){
//         cout << "June";
//     }else if (month==7){
//         cout << "July";
//     }else if (month==8){
//         cout << "August";
//     }else if (month==9){
//         cout << "September";
//     }else if (month==10){
//         cout << "October";
//     }else if (month==11){
//         cout << "November";
//     }else if(month==12){
//         cout << "December";
//     }else{
//       cout << "Please enter a number between greater than 0 and less than 13";
//     }
    
// }

// 4) Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify 
//for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

// int main(){
//     int age ;
//    cout << "Enter your age : ";
//    cin >> age;

//    if(age<=12 || age >=65){
//     cout << "YES !!  You're eligible for Discount";
//    }else{
//     cout << "NO !! You're not eligible for Discount";
//    }

// }

// 5)Print “India will win the World Cup 2023”, 20 times.

// int main(){
//     int a;
//     for(a=1;a<=20;a++){
//         cout << "India will win the World Cup 2023 "  <<endl;
//     }
// }

// 6)Print all Odd numbers from 1 to n, take n as an input from the user.

// int main(){
//     int n,i;
//     cout << "Enter a value of n : ";
//     cin >> n;
//     for(i=1;i<=n;i++){
//         if(i%2!=0){
//             cout << "Odd number : " << i <<endl;
//         }
//     }
// }

// 7)Print all numbers from 1 to n, which is divisible by 4. Take n as an input from the user.

// int main(){
//     int n,i;
//     cout << "Enter a value of n : ";
//     cin >> n;
//     for(i=1;i<=n;i++){
//         if(i%4==0){
//             cout << "Number divisible by 4 is : " << i <<endl;
//         }
//     }
// }

// 8) Print number from 280 to 250 with the help of for loop.

// int main(){
//     int i;
//     for(i=280;i>=250;i--){
//         cout << i <<endl;
//     }
// }

// 9)Print char from ‘A’ to ‘Z’ with the help of a for loop.

// int main(){
//     char i;
//     for(i = 'A'; i<='Z';i++){
//         cout <<" "<< i ;
//     }
// }

// 10 )Print char from ‘Z’ to ‘A’ with the help of a for loop.

// int main(){
//     char i;
//     for(i = 'Z'; i>='A';i--){
//      cout << " "<< i ;
//     }
// }

// 11) There is an Arithmetic Progression, First number is 220 and Common Difference is 7.
// So print all the numbers from 220 to 730 which follow the AP.

// int main(){
//     int i=220;
//     int commonDiff = 7;
//     int target = 730;
// //    for(i=220;i<=target;i=i+commonDiff){
// //     cout << " " <<i; 
// //    }
    
//     while (i<=target)
//     {
//         cout << " "<<i; 
//         i=i+commonDiff;
//     }
    
// }

// 12) Print Sum of square of first n natural number.

// int main(){
//     int n,i,bag;
// cout << "Enter a number : ";
// cin>> n;
// bag =0;

// for(i=1;i<=n;i++){
//     bag+= i*i;
// }
//     cout << bag ;  

// }

// 13) Print Sum of cube of first n natural number

// int main(){
//     int n,i,bag;
// cout << "Enter a number : ";
// cin>> n;
// bag =0;

// for(i=1;i<=n;i++){
//     bag+= i*i*i;
// }
//     cout << bag ;  

// }

// 14) Print n’th Fibonacci number.

// int fibonacci(int n){
//   int current=1;
//   int prev =0;
//   int last =0;

//   for(int i=2;i<=n;i++){
//     last = prev;
//     prev =current;
//     current = prev+last;
//   }
//   return current;
// }

// int main(){
//     int n;
//     cout << "Enter a value : ";
//     cin>> n ;
//     cout << fibonacci(n) ; 
// }}