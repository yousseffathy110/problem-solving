#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long number;
    cin >> number;
    bool isPrime;
    if (number < 2)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 2; i <= number; i++)
        {
            isPrime = true;
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime && i % 13 == 0)
            {
                cout << "YES";
                return 0;
            }
        }
        cout << "NO";
    }
    return 0;
}