#include <iostream>
using namespace std;

int main()
{
    short rows;
    cin >> rows;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows-i; j++)
        {
            cout<<" ";
        }
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout <<"*";
        }
        cout<<endl;
    }
    for (int x = rows; x >= 1; x--)
    {
        for (int y = 0; y < rows-x; y++)
        {
            cout<<" ";
        }
        for (int z = 2*x-1; z >= 1 ; z--)
        {
            cout <<"*";
        }
        cout<<endl;
    }
    
    
    return 0;
}