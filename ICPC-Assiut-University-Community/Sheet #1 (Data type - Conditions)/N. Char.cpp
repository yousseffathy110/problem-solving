#include<iostream>
// #include <cctype>
using namespace std;
 
 
int main(){
    // char x;
    // cin>>x;
    // if (isupper(x))
    // {
    //     cout<<static_cast<char>(tolower(x));
    // }
    // else if (islower(x))
    // {
    //     cout<<static_cast<char>(toupper(x));
    // }
    char x;
    cin>>x;
    if (x>96)
    {
        cout<<char(int(x-32));
    }else{
        cout <<char(int(x+32));
    }
    return 0;
}