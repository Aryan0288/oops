#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    //  WAP to print the grestest out of n numbers;
    int n;
    cin >> n;
    int arr[n];
    int temp = arr[0];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (temp < arr[i])
            ;
        temp = arr[i];
    }
    cout << temp;
    return 0;
}