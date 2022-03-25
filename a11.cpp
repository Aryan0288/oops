#include<iostream>
using namespace std;

int main()
{

    // Question 4


    int n;
    cin>>n;

    if(n>80 && n<=100)
    {
        cout<<"Grade is  A";
    }
    else if(n>60 && n<=80)
    {
        cout<<" Grade is  B";

    }
    else if(n>50 && n<=60)
    {
        cout<<"Grade is   C";
    }
    else if(n>45 && n<=50)
    {
        cout<<"Grade is   D";
    }
    else if(n>25 && n<=45)
    {
        cout<<"Grade is   E";
    }
    else if(n>0 && n<=25)
    {
        cout<<"Grade is  F";
    }
    else{
        cout<<"Not valid Input";
    }
    
}