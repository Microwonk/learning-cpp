#include <iostream>
// cmath is used for POW
#include <cmath> // or math.h

using namespace std;
int main() {
    // cout << (insertion operator)
    string name;
    string fullname;
    cout << "Type your name" << endl;

    // cin >> (extraction operator) dont need std:: bcs we are using the name space
    // all types and cout cin is exactly as it would be in java with different syntax
    cin >> name;

    // entweder '\n' oder std::endl gehen
    cout << "What about your full name?" << '\n';

    // function that gets the whole line, equivalent to scan.nextLine() in java
    // extraction operator from cin to ws is here to not take in the line previous of it (white-space)
    std::getline(cin >> ws, fullname);

    cout << "Hello " << name << "!" << '\n';
    cout << fullname;



    // new chapter --useful math functions

    double y = 2;
    double x = 3;
    double z;

    // std:: unneccesary
    z = std::max(x, y);
    z = std::min(x, y);

    z = pow(2,3);
    z = sqrt(9);
    // absolute value
    z = abs(-5);

    // rounding, rounding up, rounding down
    z = round(x);
    z = ceil(x);
    z = floor(x);

    cout << z;


    return 0;
}