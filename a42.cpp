#include <iostream>
using namespace std;

class rectangle
{
private:
    int length, breath;

public:
    rectangle(int a, int b)
    {
        length = a;
        breath = b;
    }
    void dis()
    {
        cout << length * breath;
    }
};

int main()
{
    rectangle aryan(10, 20);

    aryan.dis();

    return 0;
}