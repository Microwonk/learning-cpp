#include <iostream>

int main() {

    // 'new' keyword lets us allocate memory in the heap, rather than the stack
    // useful if we dont know how much memory we will need -> more flexible (e.g user input)
    // after the program is compiled and running, it is important to allocate in heap

    int *pNum = NULL;
    pNum = new int;

    *pNum = 69;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';

    // if we dont need the value / variable anymore, 
    // deallocate / delete the variable (may cause memory leak otherwise)
    // ONLY on keyword NEW

    delete pNum;

    //###

    char *pGrades = NULL;
    int size;

    std::cout << "Array size: " << '\n';
    std::cin >> size;

    pGrades = new char[size];

    for (int i = 0; i < size; i++) {
        std::cout << i + 1 << " Grade: " << '\n';
        std::cin >> pGrades + i;
        // std::cin >> pGrades[i]; -> both work
    }

    for (int i = 0; i < size; i++) {
        std::cout << pGrades[i] << ", ";
    }

    // [] needed on the delete
    delete[] pGrades;
    

    return 0;
}