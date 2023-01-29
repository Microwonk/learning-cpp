#include <iostream>

using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin >> ws, name);

    // length method just like in java
    name.length();
    // checks if the string is null (bool)
    name.empty();
    // clears the whole strings content
    name.clear();
    // fügt einfach etwas hinzu danach
    name.append(" poopoo");
    // string.at() exactly like charAt() in java
    char i = name.at(2);

    // name.insert(0, '@'); (inserts charAt certain index)

    // returns the index where the first char of that kind is found in a string
    name.find(' ');
    // delete part of a string
    name.erase(0, 3);


    return 0;
}