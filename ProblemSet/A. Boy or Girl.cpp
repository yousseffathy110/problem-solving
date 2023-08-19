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

    string input;
    cin >> input;

    vector<char> name;
    for (char letter : input) {
        name.push_back(letter);
    }

    short counter = 0;
    for (int i = 0; i < name.size(); i++) {
        for (int j = i + 1; j < name.size(); j++) {
            if (name[i] == name[j]) {
                counter++;
                break;
            }
        }
    }

    if ((name.size() - counter) % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }

    return 0;
}