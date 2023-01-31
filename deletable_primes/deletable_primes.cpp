#include <iostream>
#include <time.h>

using namespace std;

long calcWaysForDelPrime(long primeNum);
bool checkForPrime(long primeNum);
long removeOneDigit(long primeNum, int index);

int main() {
    long prime;
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

long calcWaysForDelPrime(long primeNum) {
    int ways = 0;
    if (primeNum < 10 && checkForPrime(primeNum)) {
        ways++;
        // cout << endl;
    } else {
        for (int i = 0; i < to_string(primeNum).length(); i++) {
            long temp = removeOneDigit(primeNum, i);
            if (checkForPrime(temp)) {
                // cout << temp << endl;
                ways += calcWaysForDelPrime(temp);
            }
        }
    }
    return ways;
}

// is a little slow, could use a mathematical algorithm to remove certain digits
long removeOneDigit(long primeNum, int index) {
    // turning the int into a string
    string temp = to_string(primeNum);
    
    temp.erase(temp.begin() + index);
    // stoi string to integer
    return stoi(temp);
}

bool checkForPrime(long primeNum) {
    if(primeNum == 2) {
        return true;
    } else if (primeNum % 2 == 0) {
        return false;
    }
    for (long i = 3; i < primeNum; i++)
    {
        if (primeNum % i == 0) {
            return false;
        } 
    }
    return true;
}