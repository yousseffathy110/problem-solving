#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    short x;
    cin>>x;
    for (int i = 2; i <= x; i++)
    {
        bool isPrime=true;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime=false;
                break;
            }
        }
        if (isPrime)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}