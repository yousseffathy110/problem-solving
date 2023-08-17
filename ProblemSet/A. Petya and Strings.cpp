#include <bits/stdc++.h>
using namespace std;

void fast(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fast();
    string x,y;
    cin >> x >> y;
    short size = x.length();
    for(short i=0;i<x.length();i++){
        x[i]=toupper(x[i]);
		y[i]=toupper(y[i]);
    }
    if (x < y)
        cout << -1;
    else if(x > y)
        cout << 1;
    else
        cout << 0;    
}