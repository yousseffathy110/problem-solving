#include <bits/stdc++.h>
using namespace std;

int main()
{
    short charNumber;
    char character;
    cin >> charNumber;
    while (charNumber > 0)
    {
        cin >> character;
        if (islower(character))
        cout << "is lower" << endl;
        else if (isdigit(character))
        cout << "is digit" << endl;
        else
        cout << "is upper" << endl;
        charNumber--;
    }
}