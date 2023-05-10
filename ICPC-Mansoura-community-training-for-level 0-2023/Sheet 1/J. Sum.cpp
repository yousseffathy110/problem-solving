#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases , a , b , c;
    cin >> testCases;
    while (testCases--)
    {
        cin >> a >> b >> c ;
        if (a == b + c || b == a + c || c == a + b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    
}