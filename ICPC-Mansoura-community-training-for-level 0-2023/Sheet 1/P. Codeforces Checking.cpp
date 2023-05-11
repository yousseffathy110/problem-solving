#include <bits/stdc++.h>
using namespace std;

int main()
{
    short testCases;
    char letter;
    cin >> testCases;
    while (testCases--)
    {
        cin >> letter;
        bool found = false;
        for (int i = 0; i < 10; i++)
        {
            if (letter == "codeforces"[i])
            {
                found = true;
                break;
            }
        }
        if (found)
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