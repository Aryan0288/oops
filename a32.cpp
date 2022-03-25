#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int reverse[n];
    for (int i = n - 1; i >= 0; i--)
    {
        // reverse[n] = arr[i];
        cout << arr[i] << " ";
    }
    // cout << reverse;
    return 0;
}