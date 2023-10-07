#include<iostream>
using namespace std;


// 1) Print 

//     *
//    ***
//   *****
//  *******
// *********

// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5-row;col++){
//             cout <<" ";
//         }
//         for(col=1;col<=2*row-1;col++){
//             cout << "*";
//         }
//         cout <<endl;
//     }
// }



// 2) Print 

//     1
//    121
//   12321
//  1234321
// 123454321

// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5-row;col++){
//             cout <<" ";
//         }
//         for(col=1;col<=row;col++){
//             cout << col;
//         }
//         for(col=row-1;col>=1;col--){
//             cout<< col;
//         }
//         cout <<endl;
//     }
// }


// 3) Print
// *********
//  *******
//   *****
//    ***
//     *
// int main(){
//     int row,col,n;
//     cout<< "Enter the number : ";
//     cin >>n;
//     for(row=n;row>=1;row--){
//         for(col=1;col<=n-row;col++){
//             cout<< " ";
//         }
//         for(col=1;col<=2*row-1;col++){
//             cout << "*";
//         }
//         cout <<endl;
//     }
// }


// 4) Print 
// * * * * *  * * * * *
// * * * *      * * * *
// * * *          * * *
// * *              * *
// *                  *
// *                  *
// * *              * *
// * * *          * * *
// * * * *      * * * *
// * * * * *  * * * * *

// int main() {
//     int row, col, n;
//     cout << "Enter a number : ";
//     cin >> n;

//     // upper half of the pattern
//     for(row = 0; row < n; row++) {
//         for(col = 0; col < (2 * n); col++) {
//             if(row + col <= n - 1)  
//                 cout << "*";
//             else
//                 cout << " ";
//             if((row + n) <= col)  
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout <<endl;
//     }

//     // bottom half of the pattern
//     for(row = 0; row < n; row++) {
//         for(col = 0; col < (2 * n); col++) {
//             if(row >= col)  
//                 cout << "*";
//             else
//                 cout << " ";
//             if(row >= (2 * n - 1) - col)  
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout <<endl;
//     }


// }


// 5) Print 
// *                  *
// * *              * *
// * * *          * * *
// * * * *      * * * *
// * * * * *  * * * * *
// * * * * *  * * * * *
// * * * *      * * * *
// * * *          * * *
// * *              * *
// *                  *

// int main()
// {
//     int i, j, n;
//     cin >> n;
//     // upper half of the pattern
//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < (2 * n); j++)
//         {
//             if(i >= j) 
//                 cout << "*";
//             else
//                 cout << " ";
//             if(i >= (2 * n - 1) - j)  
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout <<endl;
//     }
//     // bottom half of the pattern
//     for(i = 0; i < n; i++)
//     {
//         for(j = 0; j < (2 * n); j++)
//         {
//             if(i + j <= n - 1)  
//                 cout << "*";
//             else
//                 cout << " ";
//             if((i + n) <= j)  
//                 cout << "*";
//             else
//                 cout << " ";
//         }
//         cout <<endl;
//     }
//     return 0;
// }