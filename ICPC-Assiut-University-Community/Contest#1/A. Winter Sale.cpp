#include <bits/stdc++.h>
using namespace std;

int main()
{
    double discount, priceafterdiscount;
    cin>>discount>>priceafterdiscount;
    double price=round((priceafterdiscount/((100-discount)/100))*100)/100.00;
    // cout<<fixed<<setprecision(2)<<price;
    cout<<price;
    return 0;
}