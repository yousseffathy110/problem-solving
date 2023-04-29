#include <iostream>
using namespace std;
int main(){
    bool terminate=true;
    while (terminate)
    {
        int x;
        cin>>x;
        if (x==1999)
        {
            cout<<"Correct"<<endl;
            terminate=false;
        }else{
            cout<<"Wrong"<<endl;
        }
    }
    return 0;
}