#include <iostream>
using namespace std;

// 1: Use Insertion Sort Algorithm to sort the array of integers in decreasing order.

//     void insertionSort(int arr[], int n){
//     for (int i = 1; i < n; i++) {
//         int key = arr[i];
//         int j = i - 1;
//         while (j >= 0 && arr[j] < key) {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     insertionSort(arr, n);

//     cout << "Sorted array in decreasing order: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }



// 2: Insertion Sort Algorithm to sort the array of integers in increasing order if we start 
// from the last element of the array. Question was explained in the class.

// void insertionSort(int arr[], int n) {
//     for (int i = n - 2; i >= 0; i--) {
//         int key = arr[i];
//         int j = i + 1;
        
//         while (j < n && arr[j] < key) {
//             arr[j - 1] = arr[j];
//             j++;
//         }
//         arr[j - 1] = key;
//     }
// }

// int main() {
//     int arr[] = {12, 11, 13, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     insertionSort(arr, n);

//     cout << "Sorted array in increasing order: ";
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";

//     return 0;
// }