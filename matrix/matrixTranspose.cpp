#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter dimensions of matrix : ";
    cin >> n;
    int matrix[n][n];
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin >> matrix[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<=i;j++) {
            if(i==j)
                continue;
            else {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}