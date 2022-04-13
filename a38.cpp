#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //  reverse string

    string a = "aryan";
    int n = a.size();
    char arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = a[i];
    }

    char *ptr = &arr[n - 1];
    for (int i = 0; i < n; i++)
    {
        cout << *ptr;
        ptr--;
    }

    return 0;
}