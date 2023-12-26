#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, z;
    char y;
    cin>> x >> y >> z;
    switch (y) {
        case '=':
            (x == z) ? cout<<"Right" : cout << "Wrong";
        break;
        case '<':
            (x < z) ? cout<<"Right" : cout << "Wrong";
        break;
        case '>':
            (x > z) ? cout<<"Right" : cout << "Wrong";
        break;
    }
    return 0;
}