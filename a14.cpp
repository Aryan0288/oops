#include<iostream>
using namespace std;

int main()
{

    // Question 7


    char n;
    cin>>n;

    if(int(n)>=97 && int(n)<=122)
    {
        cout<<"Lower case Alphabet";
    }
    else if(int(n)>=65 && int(n)<=90)
    {
        cout<<"Upper case Alphabet";
    }
    else{
        cout<<"Invalid Number";
    }
}