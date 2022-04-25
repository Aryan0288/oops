#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class student
{
private:
    string name, address;
    int age;

public:
    student()
    {
        name = "unknown";
        age = 10;
        address = "not available";
    }

    string setinfo(string nm, int ag)
    {
        name = nm;
        age = ag;
    }

    string setinfo(string nm, string addr, int ag)
    {
        name = nm;
        address = addr;
        age = ag;
    }

    void dis()
    {
        cout << name << " " << address << " "
             << " " << age;
    }
};

int main()
{
    student ob1, obj2;

    return 0;
}