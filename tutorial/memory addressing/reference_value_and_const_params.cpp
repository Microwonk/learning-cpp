#include <iostream>

using namespace std;
// overloaded functions
// call by value
void swapByVal(string x, string y);
// call by reference with memory & address-of operator
void swapByRef(string &x, string &y);
// const parameters
void printConstShowCase(const string x, const string y);

int main() {
    string x = "X";
    string y = "Y";

    // call by value
    swapByVal(x, y);
    cout << x << " " << y << endl;

    // call by reference
    swapByRef(x, y);
    cout << x << " " << y << endl;

    printConstShowCase(x, y);

    return 0;
}

void swapByVal(string x, string y) {
    string temp = x;
    x = y;
    y = temp;
}

void swapByRef(string &x, string &y) {
    string temp = x;
    x = y;
    y = temp;
}

void printConstShowCase(const string x, const string y) {
    // because of const, it is impossible to overwrite them -> it is read only
    // string temp = x;
    // x = y;
    // y = temp;
    // upper operations would be impossible, bcs of const parameter
    // even if we were to do & memory allocation, it wouldnt work -> code is more secure and conveys intent with params
    cout << x << " " << y;
}