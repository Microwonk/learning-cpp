#include <iostream>

using namespace std;

int main() {

    int grade = 75;

    // can simplify this code using ternary operator ?
    /*
    if (grade >= 60)
    {
        cout << "you pass!";
    } 
    else
    {
        cout << "you fail!";
    }
    */   

   // works EXACTLY like it would in java
   grade >= 60 ? cout << "you pass!" :  cout << "you fail!";
    
    int num = 8;

    num % 2 ? cout << "ODD" : cout << "EVEN";

    bool t = true;


    t ? num = 1 : num = 2;
    cout << num;
    return 0;
}