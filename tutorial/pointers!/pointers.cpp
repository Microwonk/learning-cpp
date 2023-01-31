#include <iostream>

int main() {
    using namespace std;
    // pointers are just variables that store addresses, might be easier to work with addresses directly (&)

    // & address-of operator
    // * dereference operator

    string name = "Nicolas";
    int age = 18;
    bool b = false;
    string letters[4] = {"A", "B", "C", "D"};

    string *pName = &name;
    int *pAge = &age;
    bool *pB = &b;
    // when pointing to an array, you do not need the address of operator
    string *pLetters = letters;


    cout << pName << '\n'; // will output the memory address saved inside of the pointer
    cout << *pName << '\n'; // will output the var saved inside of that memory address

    cout << pAge << '\n';
    cout << *pAge << '\n';

    cout << pB << '\n';
    cout << *pB << '\n';

    cout << pLetters << '\n';
    cout << pLetters[1];
    // cout << *pLetters[1]; cannot do this here
    cout << pLetters << '\n'; // returns the address
    cout << *pLetters << '\n'; // gives first element of Array


    // #nullpointers

    int *pointer = nullptr;
    int x = 1234567;

    pointer = &x;

    // checking if the pointer is a nullptr and telling user
    pointer == nullptr ? cout << "Address was not assigned\n" : cout << "Address was assigned\n" << *pointer; 

    return 0;
}