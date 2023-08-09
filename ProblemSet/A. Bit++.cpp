#include <bits/stdc++.h>
using namespace std;

int main()
{
    short testCases , output = 0;
    cin >>testCases;
    for (int i = 0; i < testCases; i++)
    {
        string input;
        cin >> input;
        if(input[1] == '+'){
            output++;
        }else{
            output--;
        }
    }
    cout << output;
    
}