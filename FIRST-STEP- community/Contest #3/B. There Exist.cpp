#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long x , prime = -1;
    cin >> x;
    if (x <= 1)
        cout << "NO";
    else
    {
        for (int i = 2; i <= x; i++)
        {
            bool isPrime = true;
            for (int j = 2; j <= sqrt(i); j++)
            {        
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime && i % 7 == 0)
            {
                prime = i;
                break;
            }
        }
        if (prime != -1)
            cout << prime;
        else
            cout << "NO";
    }
}