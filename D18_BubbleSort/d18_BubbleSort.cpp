#include<iostream>
using namespace std;


// 1: Use Bubble Sort Algorithm to sort the array of integers in decreasing order.

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-i-1; j++) {
//             if (arr[j] < arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     bubbleSort(arr, n);

//     cout << "Sorted array in decreasing order: ";
//     for (int i=0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


// 2: Bubble Sort Algorithm to sort the array of integers in increasing order by taking
//  the smallest number to first place by starting from the last.

// void bubbleSort(int arr[], int n) {
//     for (int i = n-1; i > 0; i--) {
//         for (int j = n-1; j > n-i-1; j--) {
//             if (arr[j] < arr[j-1]) {
//                 swap(arr[j], arr[j-1]);
//             }
//         }
//     }
// }

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     bubbleSort(arr, n);

//     cout << "Sorted array in increasing order: ";
//     for (int i=0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }



// 3: Bubble Sort Algorithm to sort the array of char in ascending order.

// void bubbleSort(char arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         for (int j = 0; j < n-i-1; j++) {
//             if (arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

// int main() {
//     char arr[] = {'d', 'c', 'a', 'b', 'e'};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     bubbleSort(arr, n);

//     cout << "Sorted array in ascending order: ";
//     for (int i=0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }

