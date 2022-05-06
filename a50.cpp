#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class parent
{
public:
    int pub = 1;
    int prit()
    {
        return pri;
    }

protected:
    int pro = 2;

private:
    int pri = 3;
};

class child : public parent
{
public:
    int prot()
    {
        return pro;
    }
};

// class ch : public child
// {
// };

int main()
{
    child obj;
    obj.pub;
    obj.prit();
    obj.prot();
    cout << obj.prit() << endl;
    cout << obj.prot() << endl;
    cout << obj.pub << endl;
    return 0;
}