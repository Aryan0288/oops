#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    A()
    {
        cout << "This is a class A \n";
    }
};

class B : public A
{
public:
    B()
    {
        cout << "This is a class B \n";
    }
};

class C : public B
{
public:
    C()
    {
        cout << "This is a class C \n";
    }
};

class D : public C
{
public:
};

int main()
{
    D obj;

    return 0;
}