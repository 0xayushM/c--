#include<iostream>
using namespace std;

int binarySearch(int arr[],int &key,int n) {
    int start=0, end=n;
    while(start<=end) {
        int mid = (start+end)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            end = mid - 1;
        else start = mid + 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter length of array : " ;
    cin >> n;
    int arr[n];
    cout << "Enter array : ";
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int key;
    cout << "Enter element to be searched : ";
    cin >> key;
    cout << "Position of the element : " << binarySearch(arr,key,n);
}