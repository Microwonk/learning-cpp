#include <iostream>
#include <time.h>

using namespace std;

char getUserChoice();
char getComputerChoice();
void checkWin(char user, char comp);

int main(){
    char p = getUserChoice();
    char c = getComputerChoice();
    cout << '\n' << p << " " << c << endl;
    checkWin(p, c);

    return 0;
}

char getUserChoice() {
    char res;
    cout << "Rock, Paper, or Scissors? (r, p, s) \n";
    cin >> res;
    return res;
}

char getComputerChoice() {
    // generating a key
    srand(time(NULL));
    int dec = rand() % 3;

    switch (dec) {
    case 0: return 'r';
    case 1: return 's';
    default: return 'p';
    }
}

void checkWin(char user, char comp) {
    if (user == 'r') {
        if (comp == 's') {
            cout << "you won!";
        }
        else if(comp == 'p') {
            cout << "you lost!";
        }
        else {
            cout << "it's a draw!";
        }
    }
    else if(user == 's') {
        if (comp == 's') {
            cout << "it's a draw!";
        }
        else if(comp == 'p') {
            cout << "you won!";
        }
        else {
            cout << "you lost!";
        }
    }
    else {
        if (comp == 's') {
            cout << "you lost!";
        }
        else if(comp == 'p') {
            cout << "it's a draw!";
        }
        else {
            cout << "you won!";
        }
    }
    
}