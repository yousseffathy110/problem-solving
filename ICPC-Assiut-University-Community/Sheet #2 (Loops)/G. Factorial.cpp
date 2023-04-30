#include <iostream>
 
using namespace std;
 
int main()
{
    short x;
    cin>>x;
    for(int i =1;i<=x;i++)
    {
    long long counter=1;
    int y;
    cin>>y;
    for(int i=y;i>0;i--)
    {
        counter *= i;
    }
    cout<<counter<<endl;
    }
 return 0;
}