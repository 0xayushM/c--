#include<iostream>
using namespace std;

int isPower(int n) {
    return (n && !(n & (n-1)));
}

int main() {
    int n;
    cout << "enter number : ";
    cin >> n;
    if(isPower(n))
        cout << "Yes";
    else cout << "No";
    return 0;
}