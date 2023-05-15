#include <iostream>
using namespace std;

int main()
{
    short Ramadan_goals , sadik_goals;
    cin >> sadik_goals >> Ramadan_goals;

    if (sadik_goals < 3 && Ramadan_goals >= 3)
        cout << "Ramadan first";
    else if (sadik_goals >= 3 && Ramadan_goals < 3)
        cout << "Mr.sadik first";
    else
        cout << "Can't determine";
}