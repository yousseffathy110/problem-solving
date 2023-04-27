#include<iostream>
using namespace std;
 
int main(){
    int x, y, z, min, max, mid;
    cin>> x>> y>> z;
    if (x>=y&&x>=z)
    {
        max=x;
        if (y>=z)
        {
            mid=y;
            min=z;
        }
        else
        {
            mid=z;
            min=y;
        }
        
    }
    else if (y>=x&&y>=z)
    {
        max=y;
        if (x>=z)
        {
            mid=x;
            min=z;
        }
        else
        {
            mid=z;
            min=x;
        }
    }
    else
    {
        max=z;
        if (x>=y)
        {
            mid=x;
            min=y;
        }
        else
        {
            mid=y;
            min=x;
        }
        
    }
    cout<<min<<"\n"<<mid<<"\n"<<max<<endl;
    cout<<endl;
    cout<<max<<"\n"<<mid<<"\n"<<min<<endl;

    
    return 0;
}
