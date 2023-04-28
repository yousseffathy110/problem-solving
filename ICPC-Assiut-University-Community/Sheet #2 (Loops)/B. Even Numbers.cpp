#include <iostream>
using namespace std;
 
int main()
{
    int x; 
    cin>>x;
    if (x>1)
    {
        for (int i = 2; i <= x; i++)
        {
            if (i%2==0)
            {
                cout<<i<<endl;
            }
        }
    }
    else{
        cout<<"-1";
    }
    
    return 0;
}