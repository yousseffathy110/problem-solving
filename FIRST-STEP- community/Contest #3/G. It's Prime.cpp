#include <bits/stdc++.h>
using namespace std;

void primeCheck()
{
    string number , primeNumbers = "2357";
    cin >> number;
    if (number.length() % 2 == 0)
        cout << "Impossible";
    else
    {
        int size = number.length() / 2;
        char middle = number[size];
        for (int i = 0; i < 4; i++)
        {
            if (middle == primeNumbers[i])
            {
                cout << "Prime";
                return;
            }
        }
        cout << "Not prime";   
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    short testCases;
    cin >>testCases;
    while (testCases--)
    {
       primeCheck();
       cout << endl;
    }
}