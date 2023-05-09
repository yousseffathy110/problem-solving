#include <iostream>
using namespace std;
int main()
{
    char character;
    cin >> character;
    short testCases, number;
    cin >> testCases;
    while (testCases--)
    {
        cin >> number;
        for (int i = 0; i < number; i++)
        {
            cout << character;
        }
        cout << endl;
    }
}