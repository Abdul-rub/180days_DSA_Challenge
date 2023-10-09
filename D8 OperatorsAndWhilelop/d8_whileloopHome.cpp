#include <iostream>
using namespace std;

// 1: Take a number n from the user and print all the even numbers
// between 1 and n(inclusive). Do this using while and do while loop
// separately.

// while loop
//  int main(){
//   int i,n;
//   cout << "Enter a number : ";
//   cin >> n;
//   i=1;
//   while(i<=n){
//    if(i%2==0){
//      cout << i<< " ";
//    }
//    i++;
//   }
//  }

// do whileloop

// int main()
// {
//     int i, n;
//     cout << "Enter a number : ";
//     cin >> n;
//     i = 1;
//     do
//     {
//         if (i % 2 == 0)
//         {
//             cout << i << " ";
//         }
//         i++;
//     } while (i <= n);
// }

// 2: Find the factorial of a number n using a while loop and do a
// while loop.

// whileloop
// int main(){
//         int i, n;
//     cout << "Enter a number : ";
//     cin >> n;
//     i = 1;
//     int fact = 1;
//     while(i<=n){
//          fact = fact*i;
//          i++;
//     }
//          cout << fact;
// }

// dowhile loop
//  int main(){
//        int i, n;
//      cout << "Enter a number : ";
//      cin >> n;
//      i = 1;
//      int fact = 1;
//  do
//  {
//      fact*=i;
//      i++;
//  } while (i<=n);
//      cout << fact ;
//  }

// 3: Given a number n, print all the numbers from 1 to n(inclusive)
// which are not divisible by 3 and 5. (use Continue here).

// int main(){
//     int n,i;
//     cout << "Enter a number : ";
//     cin>> n;
//     i=1;
//     while (i<=n){
//         if(i%3==0 || i%5==0){
//         i++;
//             continue;
//         }
//         cout<< i<<" ";
//         i++;

//     }

// }

// 4: Given a number n, print the corresponding month of it. For n=1,
// print Jan, n=2, print Feb…, if the user puts any invalid number,
// don’t do anything. (Use switch here)

// int main()
// {
//     int i, n;
//     cout << "Enter month number : ";
//     cin >> n;
//     switch (n)
//     {
//     case 1:
//         cout << "Jan";
//         break;
//     case 2:
//         cout << "Feb";
//         break;
//     case 3:
//         cout << "Mar";
//         break;
//     case 4:
//         cout << "Apr";
//         break;
//     case 5:
//         cout << "May";
//         break;
//     case 6:
//         cout << "June";
//         break;
//     case 7:
//         cout << "July";
//         break;
//     case 8:
//         cout << "Aug";
//         break;
//     case 9:
//         cout << "Sept";
//         break;
//     case 10:
//         cout << "Oct";
//         break;
//     case 11:
//         cout << "Nov";
//         break;
//     case 12:
//         cout << "Dec";
//         break;

//     default:
//         break;
//     }
// }


// 5 : Print all the Capital and small letters using a while loop. It
// means A-Z, then a-z.

// int main(){
//   char name='A';
//   while(name<='Z'){
//     cout << name <<" ";
//     name++;
//   }
// }

// int main(){
//     char ch='a';
//     while (ch<='z'){
//         cout << ch <<" ";
//         ch++;
//     }
    
// }


// 6: Give a number n, find if it is prime or not, use a while loop and
// break here to solve it.

// int main(){
//     int n;
//     cout << "Enter a number :";
//     cin >> n;
//     int i=2;
//     bool isPrime = true;
//     while(i<=n/2){
//         if(n%i==0){
//         isPrime =  false;
//         break;
//         }
//     i++;
//     }
//     if(n<=1)
//     isPrime =false;

//     if(isPrime)
//     cout << n <<" is a prime number";
//     else
//     cout<< n << " is not a prime number";
// }
