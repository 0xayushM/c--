//binary search approach in 2D matrix
#include<iostream>
using namespace std;

int main() {
    int n,m;
    cout << "Enter size of matrix : ";
    cin >> n >> m;
    int matrix[n][m];
    int key=0;
    cout << "Enter element to be searched : " << endl; 
    cin >> key;
    cout << "Enter matrix : " << endl;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> matrix[i][j];
        }
    }
  bool found = false;
    int r = 0, c = n - 1;
    while (r < m && c >= 0)
    {
        if (matrix[r][c] == key)
        {
            found = true;
        }
        matrix[r][c] > key ? c-- : r++;
    }
    if (found)
        cout << "Found";
    else
        cout << "Not Found";
}