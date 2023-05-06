#include <iostream>
using namespace std;
int main()
{
    int a = 0, b = 1, c, Fibonacci;
    cin >> Fibonacci;
    if (Fibonacci == 1)
    {
        cout <<a;
    }
    else if (Fibonacci == 2)
    {
        cout << a <<" "<< b <<" ";
    }
    else
    {
        cout << a <<" "<< b <<" ";
        for (int i = 2; i < Fibonacci; i++)
        {
            c=a+b;
            cout <<c<<" ";
            a=b;
            b=c;
        }
    }
    return 0;
}