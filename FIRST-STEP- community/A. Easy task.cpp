#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll number , even;
    cin >> number;
    if(number % 2 == 0)
        even = number /2;
    else
        even = (number - 1) /2;
    cout << even;
}