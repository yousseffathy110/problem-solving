#include <iostream>
using namespace std;

int main()
{
    bool terminate=false;
    while (!terminate)
    {
        short x, y;
        cin>>x>>y;
        int sum = 0;
        if (x<=0 || y<=0)
        {
            terminate=true;
        }
        else
        {
            for (int i = min(x, y); i <= max(x, y); i++)
            {
                cout<<i<<" ";
                sum +=i;
            }
            cout << "sum ="<<sum;
            cout<<endl;
        }

    }
    
    return 0;
}