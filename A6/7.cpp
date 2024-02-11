#include <iostream>

using namespace std;

class PrimeChecker {
private:
    int number;
    bool isPrime;

public:
    PrimeChecker(int n) {
        number = n;
        isPrime = true;
        checkPrime();
    }

    void checkPrime() {
        if (number <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i * i <= number; ++i) {
                if (number % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
    }

    void displayPrimeStatus() {
        if (isPrime) {
            cout << number << " is a prime number." << endl;
        } else {
            cout << number << " is not a prime number." << endl;
        }
    }
};

int main() {
    int n;

    cout << "Enter a number to check if it's prime: ";
    cin >> n;

    PrimeChecker checker(n);

    checker.displayPrimeStatus();

    return 0;
}
