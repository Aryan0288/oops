#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2;
    char opt;
    cout << "Enter a operator  ";
    cin >> opt;
    cout << " Enter a number   ";
    cin >> n1 >> n2;

    switch (opt)
    {
    case '+':
        cout << n1 + n2;
        break;
    case '-':
        cout << n1 - n2;
        break;
    case '*':
        cout << n1 * n2;
        break;
    case '/':
        cout << n1 / n2;
        break;
    }

    return 0;
}