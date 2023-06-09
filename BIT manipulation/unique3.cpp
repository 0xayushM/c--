// Write a program to find a unique number in an array where all numbers
// except one, are present thrice.

#include<iostream>
using namespace std;

int setBit(int n,int pos) {
    return ( n | ( 1 << pos ));
}
int getBit(int n, int pos) {
    return ((n & (1 << pos)) != 0 );
}

int unique(int arr[], int n) {
    int result = 0;
    for(int i=0;i<64;i++) {
        int sum = 0;
        for(int j=0;j<n;j++) {
            if(getBit(arr[j],i))
                sum++;
        }
        if(sum%3 != 0)
            result = setBit(result,i);
    }
    return result;
}

int main() {
    int arr[10] = {1,3,2,3,4,2,1,1,3,2};
    cout << "Unique element = " << unique(arr,10) << endl;
    return 0;
}
