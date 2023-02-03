#include <iostream>

// structs are a collection of things (like arrays) which store different datatypes

struct student {
    std::string name;
    double gpa;
    bool enrolled = true; // default value, looks like making an object
};

void printStudent(student &st);

int main() {

    student st1;
    st1.name = "Nicolas";
    st1.gpa = 3.14;

    student st2;
    st2.name = "Hannah";
    st2.gpa = 4.0;

    student st3;
    st3.name = "Popo";
    st3.gpa = 1.0;
    st3.enrolled = false;

    student st4;
    st4.name = "Kaka";
    st4.gpa = 2.0;
    st4.enrolled = false;

    student st5;
    st5.name = "Pipi";
    st5.gpa = 3.0;
    st5.enrolled = false;

    student sts[5] = {st1, st2, st3, st4, st5};

    for (student st : sts) {
        printStudent(st);
        std::cout << '\n';
    }
    
    
    return 0;
}

// & makes us use not a copy of the struct, but instead the call by reference (memory address)
void printStudent(student &st) {
    std::cout << st.name << '\n';
    std::cout << st.gpa << '\n';
    std::cout << st.enrolled << '\n';
}