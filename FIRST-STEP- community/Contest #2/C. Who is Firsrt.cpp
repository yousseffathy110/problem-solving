#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int r1, r2;
    cin >> r1 >> r2;
    int x1 , x2;
    cin >> x1 >> x2;

    if (r1 + x1  > 1600)
    {
        cout << "Mr.Sadik";
    }
    else if (r2 + x2 > 1600)
    {
        cout << "Ramadan";
    }
    else if (r1 + x1  > 1600 && r2 + x2 > 1600)
    {
        if ((r1 + x1) > (r2 + x2))
        {
            cout << "Mr.Sadik";
        }
        else if ((r1 + x1) < (r2 + x2))
        {
            cout << "Ramadan";
        }
    }
    else if (r1 + x1 == r2 + x2)
    {
        cout <<"None";
    }
    else
        cout <<"None";
}