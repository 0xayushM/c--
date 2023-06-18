// count no. of ones in binary representation
#include<iostream>
using namespace std;

int noOfOnes(int n) {
    int count = 0;
    while(n) {
        n = n & (n-1);
        count++;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Number of one's : " << noOfOnes(n) << endl;
    return 0;
}