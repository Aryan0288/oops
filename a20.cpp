#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a,b,c==60)
    {
        cout<<"Traingle is equilateral";
    }
    else if(a==b && a!=c)
    {
        cout<<"Triangle is iososcles";
    }
    else if(a!=b && b!=c)
    {
        cout<<"Traingle is scalene";
    }
}