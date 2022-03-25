#include<iostream>
using namespace std;

int main()
{

    // Question 3


    int n;
    cin>>n;

    if(n>=1000)
    {
        int a=n/10;
        n=n-a;
        cout<<"The cost of the item after discount is "<<n;
    }
    else{
        cout<<"No discount "<<n;
    }
}