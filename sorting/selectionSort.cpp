#include<iostream>
using namespace std;

int selectionSort(int arr[],int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[j] < arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
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
    selectionSort(arr,n);
    cout << "Sorted array : ";
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
}