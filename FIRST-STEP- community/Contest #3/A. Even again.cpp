#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long number , sum = 0;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        sum += i;
    }
    cout << sum ;
}