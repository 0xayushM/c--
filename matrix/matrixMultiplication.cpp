#include<iostream>
using namespace std;

int main() {
    int n1,n2,n3;
    cout << "Enter rows and columns of 1st matrix and columns of 2nd matrix : ";
    cin >> n1 >> n2 >> n3;
    int m1[n1][n2];
    int m2[n2][n3];
    int ans[n1][n3];
    cout << "Enter matrix 1 : " << endl;
    for(int i=0;i<n1;i++)
        for(int j=0;j<n2;j++)
            cin >> m1[i][j];

    cout << "Enter matrix 2 : " << endl;
    
    for(int i=0;i<n2;i++)
        for(int j=0;j<n3;j++)
            cin >> m2[i][j];

    for(int i=0;i<n1;i++)
        for(int j=0;j<n3;j++)
            ans[i][j]=0;

    for(int i=0;i<n1;i++) {
        for(int j=0;j<n3;j++) {
            for(int k=0;k<n2;k++) {
                ans[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    cout << "Multiplied matrix : " << endl;

    for(int i=0;i<n1;i++) {
        for(int j=0;j<n3;j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}