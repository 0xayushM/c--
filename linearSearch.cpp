#include<iostream>
using namespace std;

int linearSearch(int arr[],int &key,int n) {
    for(int i=0;i<n; i++) {
        if(arr[i] == key)
            return i;
    }
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
    cout << "Position of the element : " << linearSearch(arr,key,n);
}