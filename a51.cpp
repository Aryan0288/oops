#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

//  Multiple Inheritance....

class A
{
public:
    void func()
    {
        cout << "Inheritance" << endl;
    }

protected:
    void func1()
    {
        cout << "Inheritance";
        ;
    }
};
class C
{
public:
    C()
    {
        cout << "It is  a inheritance ";
    }
};
class B : public A, public C
{
public:
    void func2()
    {
        return func1();
    }
};
int main()
{
    B b;
    b.func();
    b.func2();
    // b.func3();

    return 0;
}