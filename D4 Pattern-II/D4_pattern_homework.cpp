#include<iostream>
using namespace std;


// 1) Print 
// 1 
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6
// 1 2 3 4 5 6

// int main(){
//     int row,col;
//     for(row=1;row<=6;row++){
//         for(col=1;col<=row;col++){
//             cout <<col <<" ";
//         }
//         cout <<endl;
//     }
//     for(row=1;row<=6;row++){
//         cout <<row<< " ";
//     }
// }


// 2) Print 
// A
// A B
// A B C
// A B C D
// A B C D E

// int main(){
//     char row;
//     char col;
//     for(row='A';row<='E';row++){
//         for(col='A';col<=row;col++){
//             cout << col << " ";
//         }
//         cout <<endl;
//     }
// }


// 3) Print 
// 10
// 10 11
// 10 11 12
// 10 11 12 13
// 10 11 12 13 14
// 10 11 12 13 14 15

// int main(){
//     int row,col;
//     for(row=10;row<=15;row++){
//         for(col=10;col<=row;col++){
//             cout <<col<<" ";
//         }
//         cout <<endl;
//     }
// }


// 4) Print 
// A B C D
// A B C
// A B
// A

// int main(){
//     char row,col;
//     for(row='A';row<='D';row++){
//         for(col='A';col<='D'-row+'A';col++){
//             cout<< col<<" ";
//         }
//         cout <<endl;
//     }
// }