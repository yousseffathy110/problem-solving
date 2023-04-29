#include <iostream>
using namespace std;
int main(){
    short x;
    cin>>x;
    long long max=0;
    for (int i = 0; i < x; i++)
    {
        long long y;
        cin>>y;
        if (max<y)
        {
           max=y;
        }
    }
    cout<<max<<endl;
    return 0;
}