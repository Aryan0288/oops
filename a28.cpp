#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input an array print a values

    // int n;
    // cin >> n;

    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    //     cout << arr[i] << " ";
    // }

    int n;
    int a[5] = {1, 2, 3, 4, 5};
    int *ptr;
    ptr = &(a[0]);
    cout << *(ptr + 1);

    return 0;
}