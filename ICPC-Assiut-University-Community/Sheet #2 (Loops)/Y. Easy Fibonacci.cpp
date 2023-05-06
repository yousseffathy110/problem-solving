#include <iostream>
using namespace std;
int main()
{
    int start = 0, end = 1, result, Fibonacci, i = 2;
    cin >> Fibonacci;
    if (Fibonacci == 1)
    {
        cout << start ;
    }
    else if(Fibonacci == 2)
    {
        cout << start << " " << end;
    }
    else
    {
        cout << start << " " << end << " ";
        while (i < Fibonacci)
        {
            result = start + end;
            cout << result << " ";
            start = end;
            end = result;
            i++;
        }
    }
    return 0;
}