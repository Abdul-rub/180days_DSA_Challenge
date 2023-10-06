#include<iostream>
using namespace std;

// 1) Print  
//     *
//    **
//   ***
//  ****
// *****
// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5-row;col++){
//             cout  << " ";
//         }
//         for(col=1;col<=row;col++){
//             cout<< "*";
//         }
//         cout<<endl;
//     }
// }

 // 2) Print

//    1
//   22
//  333
// 4444


// int main(){
    
//     int r,c;
//     for(r=1;r<=4;r++){
//         for(c=1;c<=4-r;c++){
//             cout<< " ";
//         }
//         for(c=1;c<=r;c++){
//             cout<< r ;
//         }
//         cout <<endl;
//     }
// }

// 3) Print 
//    1
//   12
//  123
// 1234

// int main(){
    
//     int r,c;
//     for(r=1;r<=4;r++){
//         for(c=1;c<=4-r;c++){
//             cout<< " ";
//         }
//         for(c=1;c<=r;c++){
//             cout<< c ;
//         }
//         cout <<endl;
//     }
// }


 // 4) Print 

//     A
//    AB
//   ABC
//  ABCD
// ABCDE

// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5-row;col++){
//             cout<< " ";
//         }
//         for(char name='A';name<='A'+row-1;name++){
//         cout << name;
//         }
//         cout<<endl;
//     }
// }


// 5) Print 
//     1
//    21
//   321
//  4321
// 54321

// int main(){
//     int row,col;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=5-row;col++){
//             cout << " ";
//         }
//         for(col=row;col>=1;col--){
//             cout <<col;
//         }
//         cout <<endl;
//     }
// }