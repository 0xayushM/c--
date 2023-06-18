#include<iostream>
using namespace std;

int getBit(int n,int pos) {
    return (((n & (1 << pos)) !=0));
}

int setBit(int n,int pos) {
    return ((n | (1<<pos)));
}

int clearBit(int n,int pos) {
    int mask = ~(1<<pos);
    return (n & mask);
}

int updateBit(int n,int pos,int val) {
    int mask = ~(1<<pos);
    n = n&mask;
    return (n|(val<<pos));
}

int main() {
    cout << "GetBit of (5,2) = " << getBit(5,2) << endl;
    cout << "SetBit of (5,1) = " << setBit(5,1) << endl;
    cout << "ClearBit of (5,2) = " << clearBit(5,2) << endl;
    cout << "UpdateBit of (5,1,1) = " << updateBit(5,1,1) << endl;
    return 0;
}