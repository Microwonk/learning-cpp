#include <iostream>

using namespace std;

int main() {
    string name = "SSS";

    // almost as in java, just need to put the [] next to the name
    // needs to set a size too
    // iterating works the same way as in java [i] or for each
    // size of array to stop in an iterative for looü
    // explained below
    int prices[3];

    // return the size (in bytes) of a datatype
    cout << sizeof(name) << endl;
    cout << sizeof(prices[0]) << endl;
    // size of array calculated with size of, int takes 4 bytes
    cout << sizeof(prices) / 4;

    return 0;
}