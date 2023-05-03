#include <iostream>
using namespace std;

int main()
{
    short testCases;
    cin>>testCases;
    for (int i = 0; i < testCases; i++)
    {
        string number;
        cin>>number;
        for (int j = number.length(); j > 0; j--)
        {
            cout<<number[j-1]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}