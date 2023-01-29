#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a, b, c;

    cout << "give a of the triangle: " << endl;
    cin >> a;
    cout << "give b of the triangle: " << endl;
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << c << endl;
    cout << (int)c;
    return 0;
}