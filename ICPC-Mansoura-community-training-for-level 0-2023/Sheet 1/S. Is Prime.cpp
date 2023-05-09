#include <bits/stdc++.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    bool isPrime = true;
    if (number < 2)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 2; i * i <= number; i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
            }
        }
        if(isPrime)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        
    }
     
}