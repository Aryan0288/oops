#include<iostream>
using namespace std;

int main()
{
    int phy,chem,bio,math,com;
    cout<<"Enter a physics marks  ";
    cin>>phy;
    cout<<"Enter a chemistry marks  ";
    cin>>chem;
    cout<<"Enter a bio marks  ";
    cin>>bio;
    cout<<"Enter a math marks  ";
    cin>>math;
    cout<<"Enter a com marks  ";
    cin>>com;

    int percentage=((phy+chem+bio+math+com)/5);
    cout<<percentage<<" %"<<endl;

    if(percentage>=90)
    {
        cout<<"Grade is  A";
    }
    else if(percentage>=80)
    {
        cout<<"Grade is B";
    }
    else if(percentage>=70)
    {
        cout<<"Grade is C";
    }
    else if(percentage>=60)
    {
        cout<<"Grade is D";
    }
    else if(percentage>=50)
    {
        cout<<"Grade is E";
    }
    else if(percentage>=40)
    {
        cout<<"Grade is F";
    }
    else
    {
        cout<<"Student Fail";
    }



    
}