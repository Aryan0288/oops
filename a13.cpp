#include<iostream>
using namespace std;

int main()
{
    //  Grades in students


    // Question 6

    int n;
    cin>>n;

    if(n>9 && n<=10)
    {
        cout<<"Grade is  A+";
    }
    else if(n>8 && n<=9)
    {
        cout<<"Grade is  A";
    }
    else if(n>7 && n<=8)
    {
        cout<<"Grade is  B+";
    }
    else if(n>6 && n<=7)
    {
        cout<<"Grade is  B";
    }
    else if(n>5 && n<=6)
    {
        cout<<"Grade is  C";
    }
    else if(n>4 && n<=5)
    {
        cout<<"Grade is  D";
    }
    else{
        cout<<"Student Failed";
    }
}