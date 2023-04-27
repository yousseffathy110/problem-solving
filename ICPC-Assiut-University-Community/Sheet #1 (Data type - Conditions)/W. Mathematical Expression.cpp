#include <iostream>
using namespace std;
 
int main()
{
   int num1, num2, result;
   char opr, equal;
   cin >> num1 >> opr >>num2 >> equal >> result;
   switch (opr)
   {
   case '+':
    if (num1 + num2 == result)
    {
        cout<<"Yes";
    }else{
        cout<<num1+num2;
    }
    break;
    
    case '-':
    if (num1 - num2 == result)
    {
        cout<<"Yes";
    }else{
        cout<<num1-num2;
    }
    break;
    
    case '*':
    if (num1 * num2 == result)
    {
        cout<<"Yes";
    }else{
        cout<<num1*num2;
    }
    break;
   }
   return 0;
}