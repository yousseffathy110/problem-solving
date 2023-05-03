#include <iostream>
using namespace std;

int main()
{
    short testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        short x, y;
        cin >> x >> y;
        int sum = 0;
        for (int j = min(x, y)+1; j < max(x, y); j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }else if (x-y==1 && y-x==1)
            {
                cout<<0;
            }
        }
        cout << sum <<endl;
    }
    
    return 0;
}