#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    cin >> word;
    if(isupper(word[0])){
        cout<< word;
    }
    else
    {
        cout << char(toupper(word[0]));
        for (int i = 1; i < word.length(); i++)
        {
            cout << word[i];
        }
    }
}