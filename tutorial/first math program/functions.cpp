#include <iostream>

using namespace std;

// can declare a function befor writing it,
// so you can put the actual functions below main()
int multiply(int x, int y);
// overloaded functions need to be declared independantly
int multiply(int x, int y, int z);

// global variables like in java
double myDouble = 3.14159;

void happyBirthday(int count) {
    for (int i = 0; i < count; i++)
    {
        cout << "Happy birthday! \n";
    }
}

int main() {
    double myDouble = 1.23;
    happyBirthday(5);
    cout << multiply(3, 4) << '\n';
    cout << multiply(3, 4, 5) << '\n';

    // local variables will always be first if there is one inside of the func
    cout << myDouble << '\n';
    // to get global variables, do :: to go to global scope
    cout << ::myDouble;

    return 0;
}

// 2 params
int multiply(int x, int y) {
    return x * y;
}
// 3 parameters
int multiply(int x, int y, int z) {
    return x * y * z;
}