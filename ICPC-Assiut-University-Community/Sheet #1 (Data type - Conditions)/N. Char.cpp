#include<iostream>
#include <cctype>
using namespace std;
 
 
int main(){
    char x;
    cin>>x;
    if (isupper(x))
    {
        cout<<static_cast<char>(tolower(x));
    }
    else if (islower(x))
    {
        cout<<static_cast<char>(toupper(x));
    }
    return 0;
}