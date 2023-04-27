#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if (a % c == 0 && b % c != 0)
    {
        cout<<"Memo";
    }
    else if (a % c == 0 && b % c == 0)
    {
        cout<<"Both";
    }
    else if (b % c == 0 && a % c != 0)
    {
        cout<<"Momo";
    }
    else if (b % c != 0 && a % c != 0)
    {
        cout<<"No One";
    }
    return 0;
}