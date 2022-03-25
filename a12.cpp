#include<iostream>
using namespace std;

int main()
{

    // Question 5

    // Give age of person as input.
    int age;
    cin>>age;

    if(age>=18 && age<=60)
    {
        cout<<"Eligible for vaccination for least priority";
    }
    else if(age>60)
    {
        cout<<"Eligible for vaccination for highest priority";
    }
    else if(age<18 && age>0)
    {
        cout<<"Minor not eligible";
    }
    else
    {
        cout<<"Not valid";
    }
}