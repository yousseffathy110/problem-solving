#include<bits/stdc++.h>
using namespace std;
#define ll long long
string test(ll a,ll b)
{
    if(a>=1600&&b>=1600)
    {
        if(a>b)
            return "Mr.Sadik";
        else 
            return "Ramadan";
    }
    if(a>=1600)
        return "Mr.Sadik";
    if(b>=1600)
        return "Ramadan";
    return "#";
}
signed main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll n,m;cin>>n>>m;
    ll x,y;cin>>x>>y;
    string w=test(n,m);
    if(w=="#")
    {
        w=test(n+x,m+y);
    }
    if(w=="#")
    {
        cout<<"None";
    }
    else
    {
        cout<<w;
    }
    return 0;
}