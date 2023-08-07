#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    double x;
    cin >> x;
    if (x == int(x))
    {
       cout << "int " << int(x);
    }else
    {
        cout << "float " << x - int(x);
    }
}