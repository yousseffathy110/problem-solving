#include <bits/stdc++.h>
using namespace std;

int main()
{
    short input;
    cin >> input;
    while (input > 0)
    {
        string word;
        cin >> word;
        int size = word.length()-1;
        if(word.length() <= 10){
            cout << word << endl;
        }
        else
        {
            int count = 0;
            for(int i = 1; i < word.length()-1 ; i++){
                count += 1;
            }
            cout << word[0] << count << word[size] << endl;
        }
        input --;
    }
    
}