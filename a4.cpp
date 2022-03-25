#include<iostream>
using namespace std;

int display(int a)
{
    cout<<a<<endl;
    return a;
};

int main()
{
    int a;
    int b;
    cin>>a>>b;

    int c=a++;
    int d=b--;

    cout<<a<<endl;
    cout<<b<<endl;

    display(59);
}