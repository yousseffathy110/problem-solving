#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;
int main()
{
    short testCases;
    cin >> testCases;
    ll input;
    for (int i = 0; i < testCases; i++)
    {
        cin >> input;
        int one = 0;
        while (input > 0)
        {
            if (input % 2 == 1)
            {
                one++;
            }
            input /= 2;
        }
        ll sum = 0;
        for (int j = 0; j < one; j++)
        {
            sum += 1*pow(2, j);
        }
        cout << sum<<endl;
    }
    return 0;
}