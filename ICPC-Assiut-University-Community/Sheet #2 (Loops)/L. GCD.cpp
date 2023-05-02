#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    short x , y , reminder;
    cin >> x >> y;
    while (y != 0)
    {
        reminder = x % y;
        x = y;
        y = reminder;
    }    
    cout<<x;
    return 0;
}