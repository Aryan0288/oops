#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int maximum(int a, int b, int c)
{
    int d = max(a, b);
    int maxim = max(d, c);
    return maxim;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << maximum(a, b, c);
    return 0;
}