#include <bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    short i=(s[0]=='-'),j=s.size()-1;
    while(i<j)
    {
        if( s[i++] != s[j--] )
        {
            cout<<"No";
            return;
        }
    }
    cout<<"Yes";
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long testCases;
    cin >> testCases;
    while (testCases--)
    {
        solve();
        cout << endl;
    }
}