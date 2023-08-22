#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll x , count = 0;
    cin >> x;
    while (x != 0)
    {
        if(x % 10 == 4 || x % 10 == 7){
            count++;
        }

        x /= 10;
    }
    if(count == 4 || count == 7){
        cout <<"YES";
    }else{
        cout << "NO";
    }
    
}
