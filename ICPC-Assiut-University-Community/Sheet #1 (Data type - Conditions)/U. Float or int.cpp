#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
   double input,intpart,fractpart;  
   cin>>input;
   fractpart= modf(input, &intpart);
   if (fractpart==0)
   {
    cout<<"int "<<intpart;
   }else{
    cout<<"float "<<intpart<<" "<<fractpart;
   }
   return 0;
}