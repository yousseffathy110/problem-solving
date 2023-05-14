#include <iostream>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll N;
    cin >> N;

    ll remainder = N % 6;
    ll moves = 0;
    if (remainder == 1 || remainder == 5) {
        moves = 1;
    } else if (remainder == 2 || remainder == 4) {
        moves = 2;
    } else if (remainder == 3) {
        ll multiple = 6 * floor(N / 6.0);
        moves = min(abs(N - 3 - multiple), abs(N + 3 - multiple));   
    }

    cout << moves << endl;
    return 0;
}