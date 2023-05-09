#include <bits/stdc++.h>
using namespace std;

int main()
{
    short a, b, c, minutes, Maximum, minimum, mid;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "0";
    }
    else
    {
        Maximum = max({ a, b, c });
        minimum = min({ a, b, c });
        mid = a + b + c - Maximum - minimum;

        minutes = (Maximum - mid - minimum) + 1;
        cout << minutes;
    }
    return 0;
}