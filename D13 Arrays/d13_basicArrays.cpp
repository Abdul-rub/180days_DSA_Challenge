#include <iostream>
#include <climits>
using namespace std;


// 1: Take 20 elements from user input and find its sum with the help of an array.

// int main(){
//     int sum=0;
//     int arr[20];
//     cout << "Enter numbers : ";
//     for(int i=0;i<20;i++){
//         cin>>arr[i];
//     }

//     // end(arr)-begin(arr)  ---->length of an arr

//     for(int i=0;i<end(arr)-begin(arr);i++){
//         sum+=arr[i];
//     }
//     cout<<sum ;
// }

// 2: Calculate the average of elements in an array of size 18.

// int main(){
//     int avg,sum=0;
//     int arr[18];
//     cout <<"Enter numbers : ";
//     for(int i=0;i<5;i++){
//         cin>> arr[i];
//     }

//      for(int i = 0; i < 18; i++) { 
//         sum += arr[i];
//     }

//     avg = sum / 5; 

//     cout << "Avg is: " << avg;
// } 


// 3: Find the index of a specific element in an array,
//  if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

// int main() {
//     int size;
//     cout << "Enter the size of the array: ";
//     cin >> size;

//     int arr[size];
//     cout << "Enter the elements of the array: ";
//     for(int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     int target;
//     cout << "Enter the element to search for: ";
//     cin >> target;

//     int index = -1;
//     for(int i = 0; i < size; i++) {
//         if(arr[i] == target) {
//             index = i;
//             break;
//         }
//     }

//     if(index != -1) {
//         cout << "Element " << target << " found at index " << index << endl;
//     } else {
//         cout << "Element not found in the array" << endl;
//     }

//     return 0;
// }


// 4: Create an array of char types and store ‘a’ to ‘z’ in it. Then print the element of the arrays.


// int main() {
//     char charArray[26]; // Create an array of size 26 (for the alphabet)
    
//     // Initialize the array with 'a' to 'z'
//     for(int i = 0; i < 26; i++) {
//         charArray[i] = 'a' + i;
//     }

//     // Print the elements of the array
//     cout << "Elements of the array:" << endl;
//     for(int i = 0; i < 26; i++) {
//         cout << charArray[i] << " ";
//     }

//     return 0;
// }

// 5: Find the second largest element in an array of unique elements of size n. Where n>3.


// int findSecondLargest(int arr[], int n) {
//     int max = INT_MIN;
//     int secondMax = INT_MIN;

//     for(int i = 0; i < n; i++) {
//         if(arr[i] > max) {
//             secondMax = max;
//             max = arr[i];
//         } else if(arr[i] > secondMax && arr[i] != max) {
//             secondMax = arr[i];
//         }
//     }

//     return secondMax;
// }

// int main() {
//     int n;
//     cout << "Enter the size of the array (n > 3): ";
//     cin >> n;

//     if(n <= 3) {
//         cout << "Invalid input. Please enter n > 3." << endl;
//         return 1; 
//     }

//     int arr[n];
//     cout << "Enter unique elements of the array: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     int secondLargest = findSecondLargest(arr, n);
    
//     if(secondLargest == INT_MIN) {
//         cout << "There is no second largest element in the array." << endl;
//     } else {
//         cout << "The second largest element is: " << secondLargest << endl;
//     }

//     return 0;
// }