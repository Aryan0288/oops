#include<iostream>
using namespace std;

int main()
{
    char n;
    cout<<"Enter a character +";
    cin>>n;

    if(isdigit(n))
    {
        cout<<"It is a digit";
    }
    else if(isalpha(n))
    {
        cout<<"It is a character";
    }
    else
    {
        cout<<"It is a special character";
    }
}