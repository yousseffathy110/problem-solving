#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long number;
    short flag;
    cin >> number >> flag;
    while (flag > 0)
    {
        if (number % 10 == 0)
        number /= 10;
        else
        number--;
        flag--;
    }
    cout << number;
}