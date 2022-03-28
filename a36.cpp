#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int a = 22;
    // int *ptr;
    // ptr = &a;
    // cout << ptr << endl;
    // cout << *ptr;

    // print *ptr & ptr in array
    // int *ptr;
    // int arr[5] = {1, 2, 3, 4, 5};
    // ptr = arr;

    // cout << "first element  " << *ptr << endl;
    // ptr++;
    // cout << "second element  " << *ptr << endl;
    // ptr++;
    // cout << "third element  " << *ptr << endl;
    // ptr++;
    // cout << "fourth element  " << *ptr << endl;
    // ptr++;
    // cout << "first element  " << *ptr << endl;
    // ptr;
    // cout << "fifth element  " << *ptr << endl;
    // ptr--;
    // cout << "fourth element  " << *ptr << endl;
    // ptr--;
    // cout << "third element  " << *ptr << endl;
    // ptr--;
    // cout << "second element  " << *ptr << endl;
    // ptr--;
    // cout << "first element  " << *ptr << endl;

    int a = 90;
    int *b;
    int **c;
    b = &a;
    c = &b;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}