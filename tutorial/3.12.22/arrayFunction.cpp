#include <iostream>

using namespace std:

double getTotal(double prices[], int size);

int main() {
    double prices[] = {0.224, 81.1123, 122.233, 3.2};
    // calc size with byte sizes
    int size = prices.size()/prices[0].size();
    total = getTotal();
}

// need to pass in size here, bcs c++ doesnt know size of array -> need to do pointers here later
double getTotal(double prices[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += prices[i];
    }
    return total;
}

// can search for a component in an array / can also search indexes
int search(int nums[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (nums[i] == element) { // == works with strings aswell, no method is needed (unlike java .equals())
            return i; // index returnen
        }
    }
    return -1;
}