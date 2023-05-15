#include<bits/stdc++.h>
using namespace std;
#define  ll             long long
#define  endll          '\n'
#define  loop2(n)       for(int i=0;i<n;i++)
#define  loop(i,a,n)    for(int i=a;i<n;i++)
#define  test           ll t;cin>>t;while(t--)
void speed(){
    ios::sync_with_stdio(0);
    cin.tie(0);
}
void solve()
{
    string s;
    cin>>s;
    short x=s[s.size()-1]-'0';
    cout<<( (x&1)? "odd number":"even number");
}
int main()
{
    speed();
    test
    {
        solve();
        cout<<'\n';
    }
}