#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long x, y;
    cin >> x >> y;
    string result = (x % y == 0 || y % x == 0) ? "Multiples" : "No Multiples";
    cout << result;
}