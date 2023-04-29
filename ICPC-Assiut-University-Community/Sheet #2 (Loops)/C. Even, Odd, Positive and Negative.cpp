#include <iostream>
using namespace std;
int main(){
    short x;
    cin>>x;
    int 
    values,
    evencounter=0,
    oddcounter=0, 
    positivecounter=0, 
    negativecounter=0;
    for (int i = 0; i < x; i++)
    {
        cin>> values;

        if (values % 2 == 0)
        {
            evencounter++;
        }else if (values % 2 != 0)
        {
            oddcounter++;
        }

        if(values<0)
        {
            negativecounter++;
        }
        else if(values>0)
        {
            positivecounter++;
        }

    }
    cout<<"Even: "<<evencounter<<endl;
    cout<<"Odd: "<<oddcounter<<endl;
    cout<<"Positive: "<<positivecounter<<endl;
    cout<<"Negative: "<<negativecounter;
    
    return 0;
}