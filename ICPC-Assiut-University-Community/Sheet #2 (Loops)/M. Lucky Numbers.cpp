#include <iostream>
using namespace std;

int main()
{
    int x , y;
    cin >> x >> y;
    bool find_lucky_number = false;
    for (int i = x; i <= y; i++)
    {
        bool Lucky=true;
        int temp = i;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (digit != 4 && digit != 7)
            {
                Lucky = false;
                break;
            }
            temp /= 10;
        }
        if (Lucky) {
            cout << i << " ";
            find_lucky_number = true;
        }
    }
    if (!find_lucky_number) {
        cout << -1;
    }
    return 0;
}