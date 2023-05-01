#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string x , z;
    cin>>x;
    int y =stoi(x);
    z=x;
    for (int i = 0; i < x.length(); i++)
    {
        if (y % 10 == 0)
        {
            y = y / 10;
        }
    }
    x = to_string(y);
    for (int i = x.length()-1; i >= 0; i--)
    {
        cout<<x[i];
    }
    reverse(x.begin(),x.end());
    if(z == x)
    {
        cout<<"\nYES";
    }
    else
    {
        cout<<"\nNO";
    }
    return 0;
}