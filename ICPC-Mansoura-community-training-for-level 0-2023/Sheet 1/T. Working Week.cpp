#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    short testCases;
    cin >> testCases;
    while (testCases--)
    {
        long long days;
        cin >> days;
        cout << (days/3)-2 << endl;
    }
}