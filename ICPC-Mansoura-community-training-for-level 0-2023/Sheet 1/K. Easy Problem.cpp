#include <iostream>
using namespace std;
int main()
{
    long long number;
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
                cout << "NO";
            }
            else if (number % i != 0 && number % 13 == 0)
            {
                cout << "YES";
            }
            
            
        }
        
    }
     
}