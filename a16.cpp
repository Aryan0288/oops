#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    // if(a>b)
    // {
    //     if(b>c)
    //     {
    //         cout<<a<<" is greater";
    //     }
    //     else{
    //         cout<<c<<" is greater";
    //     }
    // }
    // else if(b>c)
    // {
    //     if(c>a)
    //     {
    //         cout<<b<<" is greater";
    //     }
    //     else{
    //         cout<<c<<" is greater";
    //     }
    // }
    // if(c>a)
    // {
    //     if(a>b)
    //     {
    //         cout<<c<<" is greater";
    //     }
    //     else{
    //         cout<<b<<" is greater";
    //     }
    // }

    if(a>b)
    {
        cout<<max(a,c);
    }
    else if(b>c)
    {
        cout<<max(b,a);
    }
    else if(c>a)
    {
        cout<<max(c,b);
    }
}