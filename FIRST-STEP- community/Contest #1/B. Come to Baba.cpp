#include <bits/stdc++.h>
using namespace std;
#define pi 3.14
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    double circle_Area , radius , square_AREA , green_Parts;
    cin >> circle_Area;
    radius = sqrt(circle_Area / pi);
    square_AREA = sqrt(2 * radius * radius) * sqrt(2 * radius * radius);
    green_Parts = circle_Area - square_AREA;
    cout << fixed << setprecision(3) << green_Parts;
}