#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fast() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    fast();
    short stones, count = 0;
    cin >>stones;
    string row;
    cin >> row;
    for (short i = 0; i <= stones - 1; i++)
    {
        if(row[i] == row[i + 1] && i != stones - 1){
            count++;
        }
    }
    cout << count;
    return 0;
}