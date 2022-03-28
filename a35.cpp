// #include <iostream>
// #include <vector>
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int row1, col1, row2, col2, temp[row1][col2];
//     cout << "Enter a row 1st matrix  ";
//     cin >> row1;
//     cout << "Enter a col 1st matrix  ";
//     cin >> col1;
//     int arr1[row1][col1];

//     for (int i = 0; i < row1; i++)
//     {
//         for (int j = 0; j < col1; j++)
//         {
//             cin >> arr1[i][j];
//             cout << arr1[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // int row2, col2;
//     cout << "Enter a row 2nd matrix  ";
//     cin >> row2;
//     cout << "Enter a col 2nd matrix  ";
//     cin >> col2;
//     int arr2[row2][col2];

//     for (int i = 0; i < row2; i++)
//     {
//         for (int j = 0; j < col2; j++)
//         {
//             cin >> arr2[i][j];
//             cout << arr2[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for (int i = 0; i < row1; i++)
//     {
//         for (int j = 0; j < col2; j++)
//         {
//             for (int k = 0; k < row2; k++)
//             {
//                 temp[row1][col2] += arr1[i][j] * arr2[i][k];
//                 cout << temp[row1][row2] << " ";
//             }
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void sparse()
{
    int arr1[3][3] = {{0, 2, 0}, {1, 0, 0}, {0, 0, 1}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    //  write a program to print sparse matrix and upper traingular matrix.

    sparse();

    return 0;
}
