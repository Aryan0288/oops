#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int a[n];
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            ar[i] = a[i];
            cout << ar[i] << " ";
        }
        else
        {
            ar[i] = a[i + 1];
            cout << ar[i] << " ";
        }
    }
    return 0;
}
