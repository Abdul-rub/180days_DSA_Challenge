#include <iostream>
using namespace std;


  int BinarySearch(int arr[], int n, int key){

    int start =0, end= n-1, mid;

    while(start<=end){
        mid = start +(end -start)/2;
        if(arr[mid]==key)
        return mid;

        else if(arr[mid]<key)
        start = mid +1;

        else 
        end = mid-1;

    }
        return -1;
  }

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n= sizeof(arr)/sizeof(arr[0]);
    int target = 60;

    int result = BinarySearch(arr,n,target);
    if(result!=-1)
    cout<<"Found at index "<<result;
    else
    cout<< "Not Found"; 
}