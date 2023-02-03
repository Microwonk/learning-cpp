#include <iostream>

enum Day { // user defined type, that consists of paired named-integer constants. (for a set of potential options)
    sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6
};


int main() {

    Day today = saturday;
    int *Pnum;

    switch (today)
    {
    case sunday: *Pnum = 1; break;
    case monday: *Pnum = 2; break;
    case tuesday: *Pnum = 3; break;
    case wednesday: *Pnum = 4; break;
    case thursday: *Pnum = 5; break;
    case friday: *Pnum = 6; break;
    case saturday: *Pnum = 7; break;
    }
    std::cout << Pnum << " " << *Pnum;

    return 0;
}