#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string name;

public:
    student()
    {
        name = "unknown";
    }
    student(string a)
    {
        name = a;
    }
    void dis()
    {
        cout << name;
    }
    ~student()
    {
        cout << " class destroy";
    }
};

int main()
{
    student obj;
    student obj1("aryan");

    obj.dis();
    cout << "\n";
    obj1.dis();

    return 0;
}