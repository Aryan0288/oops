#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int b=0;
    for(int i=1;i<=n;i++)
    {
        b+=i*i;
    }
    cout<<b;
}