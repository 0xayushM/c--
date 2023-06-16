#include<iostream>
using namespace std;

int main() {
    int n,m;
    cout << "Enter rows and columns of the matrix : ";
    cin >> n >> m;
    int matrix[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin >> matrix[i][j];
    
    int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;

    while(row_start<=row_end && column_start<=column_end) {
        

        //printing the first row
        for(int col = column_start;col <= column_end;col++)
            cout << matrix[row_start][col] << " ";
        row_start++;
        cout << endl;
        //printing the end column starting from the end of first row downwards
        for(int row = row_start;row<=row_end;row++)
            cout << matrix[row][column_end] << " ";
        column_end--;
        cout << endl;
        //printing the last row backwards from end of last column
        for(int col = column_end;col >= column_start;col--)
            cout << matrix[row_end][col] << " ";
        row_end--;
        cout << endl;
        //printing the first column upwards starting from the last row
        for(int row = row_end;row >= row_start;row--)
            cout << matrix[row][column_start] << " ";
        column_start++;
        cout << endl;
        
    }
    return 0;
}