#include <bits/stdc++.h>
using namespace std;

int main()
{
    short number , score, records[100],  count = 0;
    cin >> number >> score;
    for (int i = 0; i < number; i++)
    {
        cin >> records[i];
    }
    for (int i = 0; i < number; i++)
    {
        if (records[i] >= records[score-1] && records[i] > 0)
        {
            count++;
        }
    }
    cout << count <<" ";

}