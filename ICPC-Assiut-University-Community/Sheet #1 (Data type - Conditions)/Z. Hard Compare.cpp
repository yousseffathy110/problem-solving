#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a, b, c, d;
    cin>>a>>b>>c>>d;
    if (b*log (a)> d*log (c))
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}

/*
important note :
**you can't use the pow function becauce it return double value 
*/ 