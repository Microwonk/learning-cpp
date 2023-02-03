#include <iostream>

// T can be seen as a 'Thing' if no Datatype is given
// will work with doubles, ints, floats, chars etc
// only set up to receive things of the same datatype (int, int) (double, double)
template <typename T>
T max(T x, T y) {
    return (x > y) ? x : y;
}
// can have multiple arguments passed (diff datatypes)
// auto deduces what the return type should be in this case
template <typename T, typename U>
auto max(T x, U y) {
    return (x > y) ? x : y;
}


int main() {
    std::cout << max(1, 2) << '\n';
    return 0;
}