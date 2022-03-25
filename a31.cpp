#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // WAP to print the count of odd number of input in 1-D array;

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd++;
        }
    }
    cout << odd;
    return 0;
}