#include <bits/stdc++.h>
using namespace std;

int main()
{
    short testCases, counter = 0;
    cin >> testCases;
    while (testCases--)
    {
        int Answer1, Answer2, Answer3;
        cin >> Answer1 >> Answer2 >> Answer3;
        if(Answer1 + Answer2 + Answer3 >= 2)
        counter++;
    }
    cout << counter ;
   return 0;
}