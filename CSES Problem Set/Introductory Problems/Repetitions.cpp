#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string dna;
    cin >> dna;
    int counter = 0, rep = 1;
    char index = 'A';
    for(char letter : dna)
    {
        if (index == letter)
        {
            counter++;
            rep = max(rep, counter);
        }else{
            index = letter;
            counter = 1;
        }
    }
    cout << rep;
}