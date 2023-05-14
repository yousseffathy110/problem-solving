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
        return 0;
    }
    else if (r2 + x2 > 1600)
    {
        cout << "Ramadan";
        return 0;
    }
    else if (r1 + x1  > 1600 && r2 + x2 > 1600)
    {
        if ((r1 + x1) > (r2 + x2))
        {
            cout << "Mr.Sadik";
            return 0;
        }
        else if (((r1 + x1) > (r2 + x2)))
        {
            cout << "Ramadan";
            return 0;
        }
        
        
    }
    else
        cout <<"None";
        return 0;
}