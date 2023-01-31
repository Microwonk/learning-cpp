#include <iostream>

using namespace std;

// memory addressing works with the & operator(address-of operator)

int main() {

    string name = "Nicolas";
    int age = 18;
    bool cool = true;
    cout << &name << endl; 
    cout << &age << endl; // takes 4 bytes, so the next allocation will happen 4 bytes later
    cout << &cool << endl; // takes 1 byte, so the next allocation will happen 1 byte later
    return 0;
}