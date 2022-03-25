#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row1, col1, temp;
    cout << "Enter a row 1st matrix  ";
    cin >> row1;
    cout << "Enter a col 1st matrix  ";
    cin >> col1;
    int arr1[row1][col1];

    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            cin >> arr1[i][j];
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    int row2, col2;
    cout << "Enter a row 2nd matrix  ";
    cin >> row2;
    cout << "Enter a col 2nd matrix  ";
    cin >> col2;
    int arr2[row1][col1];

    for (int m = 0; m < row2; m++)
    {
        for (int n = 0; n < col2; n++)
        {
            cin >> arr2[m][n];
            cout << arr2[m][n] << " ";
        }
        cout << endl;
    }
    return 0;
}