#include<iostream>
using namespace std;
 
 
int main(){
    char x;
    cin>>x;
    if(x >= 48 && x <= 57){
        cout<<"IS DIGIT";
    }else if (x >= 65 && x <= 90)
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }else if (x >= 97 && x <= 122)
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }

    return 0;
}


//////////////////////////////////////////////////////////// Another solutuin //////////////////////////////////////////////////////////////////////


#include<iostream>
#include <cctype> 
using namespace std;
 
 
int main(){
    char x;
    cin>>x;
    if(isdigit(x)){
        cout<<"IS DIGIT";
    }else if (isupper(x))
    {
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }else if (islower(x))
    {
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }

    return 0;
}