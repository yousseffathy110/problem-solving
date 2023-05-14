#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll number , max  = 0, min = 0;
    cin >> number;
    max = (number / 6) * 6;
    cout << "The biggest is " << max << endl;
    cout << "The smallest is " << min << endl;
}