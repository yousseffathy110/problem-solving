#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int x;
    cin>>x;
    int a=x%10;
    int b=(x-a)/10;
    if (a%b==0||b%a==0)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}