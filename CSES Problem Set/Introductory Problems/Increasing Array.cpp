#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int s , flag = 0;
    ll count = 0 ;
    cin >> s;
    for (int i = 0; i < s; i++)
    {
        int x;
        cin >> x;
        flag = max(flag , x);
        count += flag - x;
    }
    cout << count;
    
}