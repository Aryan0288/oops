#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    // WAP to print the sum & avarsge of 1-D arrray;

    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    int average;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        // cout << sum << endl;
        // average = sum / 2;
        // cout << average << endl;
    }
    cout << sum << endl;
    average = sum / n;
    cout << average << endl;
    return 0;
}