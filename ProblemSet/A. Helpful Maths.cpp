#include <bits/stdc++.h>
using namespace std;

void fast(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main()
{
    fast();
    string input;
    cin >> input;
    if (input.length() == 1)
        cout << input;
    else
    {
        for(int i = 0 ; i < input.length() - 1 ; i++){
            for(int j = 0 ; j < input.length() - i - 1 ; j += 2){
                if (input[j] >= input[j + 2])
                    swap(input[j], input[j +2]);
            }
        }
        cout << input;
    }
}