#include<iostream>
using namespace std;
 
 
int main(){
    int x,y;
    char opr;
    cin>>x>>opr>>y;
    switch (opr)
    {
    case '+':
        cout<<x+y;
        break;
    case '-':
        cout<<x-y;
        break;
    case '*':
        cout<<x*y;
        break;
    case '/':
        cout<<x/y;
        break;
    }
    return 0;
}