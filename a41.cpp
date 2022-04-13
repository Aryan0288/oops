#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int func()
{
    int a = 20;
    int b = 22;

    return a + b;
}
void fun()
{
    cout << "hello";
}

int mul();

int fun1(int a)
{
    // int a = 5;
    return a + 5;
}
int fun1(int a, int b)
{

    return a * b;
}
int fun1(int a, int b, int c)
{

    return (a + c) / b;
}
int fun1(int a, int b, int c, int d)
{
    // string a = "hello";
    return a + b + c + d;
}

int main()
{
    // fun();
    // cout << func();
    // cout << mul();
    cout << fun1(1) << endl;
    cout << fun1(1, 2) << endl;
    cout << fun1(1, 2, 3) << endl;
    cout << fun1(50 + 5 + 6 + 7);

    return 0;
}

int mul()
{
    int a, b;
    cin >> a >> b;
    return a * b;
}
