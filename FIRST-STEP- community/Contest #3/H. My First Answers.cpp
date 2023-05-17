#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long number , testCases , sum =0;
    cin >>testCases;
    while (testCases--)
    {
        
        cin >> number;
        sum += number;
    }
    cout << abs(sum);
}