#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long number1, number2, number3;
    cin >> number1 >> number2 >> number3;
    cout << min({number1, number2, number3}) << " " << ((number1 + number2 + number3) - (min({number1, number2, number3})+max({number1, number2, number3}))) << " " << max({number1, number2, number3});
    return 0;
}