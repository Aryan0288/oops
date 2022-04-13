#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, k, n = 2, m = 2;

    //  row1, col1, row2, col2, arr1[row1][col1], arr2[row2][col2];

    int arr1[2][2] = {{1, 2}, {3, 4}};
    int arr2[2][2] = {{5, 6}, {7, 8}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int temp[n][m] = {0};
    if (2 == 2)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                for (int k = 0; k < 2; k++)
                {
                    temp[n][m] += arr1[i][k] * arr2[k][j];
                    cout << temp[n][m] << " " << endl;
                }
                cout << endl;
            }
        }
    }
    else
    {
        cout << "nothing";
    }

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         for (int k = 0; k < 2; k++)
    //         {
    //             temp[j][k] += arr1[i][k] * arr2[k][j];
    //             cout << temp[j][k] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    return 0;
}