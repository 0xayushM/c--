#include<iostream>
using namespace std;

int bubbleSort(int arr[],int n) {
    int counter=1;
    while(counter<n) {
        for(int i=0;i<n-counter;i++) {
            if(arr[i] > arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
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
    bubbleSort(arr,n);
    cout << "Sorted array : ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}