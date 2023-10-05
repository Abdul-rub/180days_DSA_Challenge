#include<iostream>
using namespace std;


// 1) Print 
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// int main(){
//     int row,col,n;
//     n=5;
//     for(row=1;row<=n;row++){
//         for(col=1;col<=row;col++){
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// 2) Print 

// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// int main(){
//     int row,col,n;
//     n=5;
//     for(row=1;row<=n;row++){
//         for(col=1;col<=row;col++){
//             cout << col<<" ";
//         }
//         cout << endl;
//     }
// }

// 3) Print 

// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// int main(){
//     int row,col,n;
//     n=5;
//     for(row=1;row<=n;row++){
//         for(col=1;col<=row;col++){
//             cout << row<<" ";
//         }
//         cout << endl;
//     }
// }


// 4) Print 

// int main(){
//     int row,col,n;
//     n=5;
//     for(row=1;row<=n;row++){
//         for(col=row;col>=1;col--){
//             cout << col << " ";
//         }
//         cout << endl;
//     }
// }

// 5) Print 

// a
// b b
// c c c
// d d d d
// e e e e e

// int main(){
//   char row, col;

// for(row = 'a'; row <= 'e'; row++) {
//     for(col = 'a'; col <= row; col++) {
//         cout << col << " ";
//     }
//     cout << endl;
// }

// 2nd method 
// int row,col;
// for(row=1;row<=5;row++){
//     char name = 'a'+row-1;
//     for(col=1;col<=row;col++){
//         cout <<name <<" ";
//     }
//     cout <<endl;
// }
// }

// 6) Print
// * * * * * 
// * * * *
// * * *
// * *
// *

// int main(){
//     int row,col;
//     for(row=5;row>=1;row--){
//         for(col=1;col<=row;col++){
//             cout << "*" <<" ";
//         }
//         cout <<endl;
//     }
// }


// 7) Print 
// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// int main(){
//     int row,col,n;
    
//     cout << "Enter a number : ";
//     cin >> n ;

//     for(row=1;row<=n;row++){
//         for(col=1;col<=n-row+1;col++){
//             cout << col<<" ";
//         }
//         cout <<endl;
//     }
// }

// 8) Print 
// 5 
// 5 4
// 5 4 3
// 5 4 3 2
// 5 4 3 2 1

// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=5;col>=5-row+1;col--){
//             cout << col<<" ";
//         }
//         cout <<endl;
//     }
// }