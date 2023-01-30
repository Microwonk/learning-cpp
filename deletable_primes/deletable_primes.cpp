#include <iostream>
#include <time.h>

using namespace std;

int calcWaysForDelPrime(int primeNum);
bool checkForPrime(int primeNum);
int removeOneDigit(int primeNum, int index);

int main() {
    int prime;
    clock_t start, end;

    cout << "Prime num: ";
    cin >> prime;

    start = clock();
    int ways = calcWaysForDelPrime(prime);
    cout << "Ways: " << ways << endl;
    end = clock();

    double time_taken = double(end - start);

    cout << "Time taken: " << fixed << time_taken << " ms";
    return 0;
}

int calcWaysForDelPrime(int primeNum) {
    int ways = 0;
    if (primeNum < 10 && checkForPrime(primeNum)) {
        ways++;
        cout << endl;
    } else {
        for (int i = 0; i < to_string(primeNum).length(); i++) {
            int temp = removeOneDigit(primeNum, i);
            if (checkForPrime(temp)) {
                cout << temp << endl;
                ways += calcWaysForDelPrime(temp);
            }
        }
    }
    return ways;
}

// is a little slow, could use a mathematical algorithm to remove certain digits
int removeOneDigit(int primeNum, int index) {
    // turning the int into a string
    string temp = to_string(primeNum);
    
    temp.erase(temp.begin() + index);
    // stoi string to integer
    return stoi(temp);
}

bool checkForPrime(int primeNum) {
    if(primeNum == 2) {
        return true;
    } else if (primeNum % 2 == 0) {
        return false;
    }
    for (int i = 3; i < primeNum; i++)
    {
        if (primeNum % i == 0) {
            return false;
        } 
    }
    return true;
}