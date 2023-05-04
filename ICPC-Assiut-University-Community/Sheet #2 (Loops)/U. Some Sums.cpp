#include <iostream>
using namespace std;

int main()
{
    int number, lowerbond, upperbond;
    long long sum = 0;
    cin >> number >> lowerbond >> upperbond;
    for (int i = 1; i <= number; i++)
    {
        if (i / 10 == 0)
        {
            if (i >= lowerbond && i <= upperbond)
            {
                sum += i;
            }
            
        }
        else
        {
            int digitSum= 0;
            int counter = i;
            while (counter)
            {
                int digit = counter % 10;
                digitSum += digit;
                counter /= 10;
            }
            if (digitSum >= lowerbond && digitSum <= upperbond)
            {
                sum += i;
            }
            
        }
    }
    cout << sum;
    return 0;
}