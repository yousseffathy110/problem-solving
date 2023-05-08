#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    double x, y, z;
    cin >> x>> y>>z;
    double  res=(x*y)/z;
    long long intpart=res;
    double fraction = res - intpart;
    if (fraction!=0)
    {
        cout <<"double";
    }else if (fraction ==0 && res <= 2147483647)
    {
        cout <<"int";
    }else{
        cout <<"long long";
    }
    return 0;
}