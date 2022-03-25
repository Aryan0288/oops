#include<iostream>
using namespace std;


// void factorial(int n)
// {
//     for(int i=n-1;i>0;i--)
//     {
//         n=n*i;   
//     }
// }

int main()
{
    int n;
    cin>>n;
    for(int i=n-1;i>0;i--)
    {
        n=n*i;
    }
    cout<<n;
    // factorial();
    return 0;
    

}