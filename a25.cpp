#include<iostream>
using namespace std;

int  main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;

    // if(n%3==0 && n%7==0)
    // {
    //     cout<<"Number is multiple of 3 and 7";
    // }
    if(n%3==0)
    {
        cout<<"Number is multiple of 3";
    }
    else if(n%7==0)
    {
        cout<<"Number is multiple of 7";
    }
    // else if(n%3==0)
    // {
    //     cout<<"Number is multiple of 3 and 7";
    // }
    else{
        cout<<"Number is not a multiple of 3 & 7";
    }
}