#include <iostream>
using namespace std;

int main()
{
    int number;
    cin >> number;

    if (number <= 1)
    {
        cout << "NO";
    } 
    else 
    {
        bool isPrime = true;
        for (int i = 2; i*i <= number; i++) 
        {
            if (number % i == 0) 
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime) 
        {
            cout << "YES";
        } 
        else 
        {
            cout << "NO";
        }
    }

    return 0;
}