#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cin>>a>>b;

    int c=a;
        a=b;
        b=c;
    
    cout<<a<<endl;
    cout<<b;
}