#include <iostream>
using namespace std;

int main()
{
    short rows;
    cin >> rows;
    int x=1 , y=2 , z=3;
    for (int i = 0; i < rows; i++)
    {
        cout<<x<<" "<<y<<" "<<z<<" "<< "PUM"<<endl;
        x =x+4;
        y=y+4;
        z=z+4;
    }
    
    return 0;
}