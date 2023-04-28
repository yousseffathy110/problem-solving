#include <iostream>
 
using namespace std;
 
int main()
{
    long long eyes,mouth,body,counter;
    cin>>eyes>>mouth>>body;
    if(eyes==0 || body==0){
    cout<<0;
    }
    else{
        if((mouth>=eyes && mouth>=body) ||(mouth>=body &&mouth<eyes) ||(mouth<body && mouth>=eyes)){
            counter=min(eyes,body);
            cout<<counter;
        }
        else if(mouth<body && mouth<eyes){
                counter=mouth;
                eyes-= mouth;
                body-= mouth;
                counter+= min(eyes/2,body);
                cout<<counter;
        }
    }

    return 0;
}