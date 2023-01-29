#include <iostream>
#include <time.h>

using namespace std;

int main() {
    // takes random number from computer time??
    // creates a seed of random numbers based on computer time!!
    // in the function, take int NULL or 0
    srand(time(0));

    // when we want a dice, module 6 is used
    // gives value of 0 - 32k
    int num = (rand() % 6) + 1;

    cout << num;
    return 0;
}