#include <iostream>
using namespace std;

int main()
{
    char s;
    short x , y;
    cin>> s >> x;
    for (int i = 0; i < x; i++)
    {
        cin>>y;
        for (int j = 0; j < y; j++)
        {
            cout<<s;
        }
        cout<<endl;
        
    }
    
    return 0;
}