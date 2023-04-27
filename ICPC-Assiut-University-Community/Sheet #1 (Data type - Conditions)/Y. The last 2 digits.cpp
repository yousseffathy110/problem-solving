#include <iostream>
 
using namespace std;
 
int main()
{
    long long a,b,c,d,mul; 
    cin>>a>>b>>c>>d;
    // mul = ((a * b) % 100 * (c * d) % 100) % 100;
    mul= (((a%100* b%100)%100* c%100)%100* d%100)%100;
    if(mul<10){
        cout<<"0";
    }
    cout<<mul;
    return 0;
}

