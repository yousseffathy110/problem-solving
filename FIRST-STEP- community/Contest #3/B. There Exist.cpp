#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long number , prime = 0;
    bool found_prime  = false ;
    cin >> number;
    if (number <= 1)
        cout << "NO";
    else
    {
        for (int i = 2; i * i <= number; i++)
        {
            if (number % i == 0) 
            {
                bool is_prime = true;
                for (int j = 2; j * j <= i; j++) 
                {
                    if (i % j == 0) 
                    {
                        is_prime = false;
                        break;
                    }
                }
                
                if (is_prime) 
                {
                    if (i % 7 == 0) 
                    {
                        prime = i;
                        found_prime = true;
                    }
                }

            }
        }
    }
    if (found_prime)
        cout << prime;
    else
        cout << "NO";
}