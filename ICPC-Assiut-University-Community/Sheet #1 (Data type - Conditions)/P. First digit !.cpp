#include<iostream>
using namespace std;
 
 
int main(){
    int num;
    cin>>num;
    while (num>=10)
    {
        num /= 10;
    }
    if (num % 2 ==0)
    {
        cout<<"EVEN";
    }else{
        cout<<"ODD";
    }
    
    
    return 0;
}

// ***************************************another solution**************************************************


#include<iostream>
using namespace std;
 
 
int main(){
    string num;
    cin>>num;
    if (num[0] % 2 ==0)
    {
        cout<<"EVEN";
    }else{
        cout<<"ODD";
    }
    
    return 0;
}