#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class base
{
private:
    int pri = 1;

protected:
    int pro = 2;

public:
    int pub = 3;
    int prit()
    {
        return pri;
    }
};

class derived : public base
{
public:
    int prot()
    {
        return pro;
    }
};

int main()
{
    derived obj;
    obj.pub;
    obj.prot();
    cout << obj.pub << "\n";
    cout << obj.prot() << "\n";
    cout << obj.prit();

    return 0;
}