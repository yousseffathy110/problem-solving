#include <bits/stdc++.h>
using namespace std;

int main()
{
    short testCases;
    cin >> testCases;
    string number;
    while(testCases--)
    {
        cin >> number;
        if (number[0] + number[1] + number[2] ==  number[3] + number[4] + number[5])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }   
    }
    return 0;
}