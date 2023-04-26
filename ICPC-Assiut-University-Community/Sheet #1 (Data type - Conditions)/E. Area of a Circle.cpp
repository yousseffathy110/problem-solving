#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    double r;
    const double pi=3.141592653;
    cin>>r;
    cout<<pi*r*r<<fixed<<setprecision(9)<<endl;
    return 0;
}