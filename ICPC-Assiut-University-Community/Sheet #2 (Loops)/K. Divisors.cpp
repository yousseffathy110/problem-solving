#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    short x;
    cin >> x;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}