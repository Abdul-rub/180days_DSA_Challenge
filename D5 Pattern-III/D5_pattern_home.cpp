#include <iostream>
using namespace std;

// 1)Print
//     1
//    21
//   321
//  4321
// 54321
// int main(){
//     int row,col,n;
//     cout << "Enter a numnber : ";
//     cin >> n;
//     for(row=1;row<=n;row++){
//         for(col=1;col<=n-row;col++){
//             cout << " ";
//         }
//         for(col=row;col>=1;col--){
//             cout <<col;
//         }
//         cout <<endl;
//     }
// }

// 2) Print
//      A
//     AB
//    ABC
//   ABCD
//  ABCDE
// ABCDEF
// int main()
// {
//     int row, col, n;
//     cout << "Enter a numnber : ";
//     cin >> n;
//     for (row = 1; row <= n; row++){
//         for (col = 1; col <= n - row; col++){
//             cout << " ";
//         }
//         for(char name ='A'; name<='A'+row-1;name++){
//             cout << name ;
//         }
//         cout <<endl;
//     }
// }

// 3) Print
//         5
//       5 4
//     5 4 3
//   5 4 3 2
// 5 4 3 2 1

// int main()
// {
//     int row, col, n;
//     cout << "Enter a numnber : ";
//     cin >> n;

//     for (row=1;row<=n;row++){
//         for(col=1;col<=n-row;col++){
//             cout <<" ";
//         }
//         for(col=5;col>=n-row+1;col--){
//             cout <<col;
//         }
//         cout <<endl; 
//     }
// }


// 4) Print 


int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    for (int row = 1; row <= n; row++) {
        for (int col = row; col < n; col++) {
            cout << " "; 
        }
        for (char name = 'E'; name >= 'E' - row + 1; name--) {
            cout << name;
        }

        cout << endl;
    }
}