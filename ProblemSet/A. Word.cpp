#include <bits/stdc++.h>
using namespace std;

void fast(){
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}


int main(){
    fast();
    string word;
    cin >> word;
    short upcount = 0, lowcount = 0;
    for (short i = 0; i < word.length(); i++)
    {
        if (isupper(word[i]))
            upcount++;
        else
            lowcount++;
    }
    if (lowcount >= upcount){
        for (short i = 0; i < word.length(); i++)
        {
            cout << char(tolower(word[i]));
        }
    }else{
        for (short i = 0; i < word.length(); i++)
        {
            cout << char(toupper(word[i]));
        }
    }
}