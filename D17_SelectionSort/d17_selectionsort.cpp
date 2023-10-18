#include <iostream>
using namespace std;


// 1)1: Selection Sort Algorithm to sort the array of integers in
// decreasing order

// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         int maxIndex = i;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] > arr[maxIndex]) {
//                 maxIndex = j;
//             }
//         }
//         swap(arr[i], arr[maxIndex]);
//     }
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     selectionSort(arr, n);

//     cout << "Sorted array in decreasing order: ";
//     for (int i=0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


// 2) Selection Sort Algorithm to sort the array of integers in
// increasing order by taking the highest number to last place.
// Question was explained in the class.


// void selectionSort(int arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         int minIndex = i;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);
//     }
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     selectionSort(arr, n);

//     cout << "Sorted array in increasing order: ";
//     for (int i=0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }


// 3: Selection Sort Algorithm to sort the array of char in ascending
// order

// void selectionSort(char arr[], int n) {
//     for (int i = 0; i < n-1; i++) {
//         int minIndex = i;
//         for (int j = i+1; j < n; j++) {
//             if (arr[j] < arr[minIndex]) {
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);
//     }
// }

// int main() {
//     char arr[] = {'d', 'b', 'a', 'c', 'e'};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     selectionSort(arr, n);

//     cout << "Sorted array in ascending order: ";
//     for (int i=0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }