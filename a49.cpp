#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int minimum(int a, int b)
{
    int d = min(a, b);
    return d;
}
int minimum(int a, int b, int c)
{
    int d = min(a, b);
    int mini = min(d, c);
    return mini;
}

bool minimum(bool a, bool b)
{
    bool d = min(a, b);
    return d;
}

int main()
{

    cout << minimum(10, 20) << "\n";
    cout << minimum(10, 20, 15) << "\n";
    cout << minimum(true, false) << "\n";
    return 0;
}