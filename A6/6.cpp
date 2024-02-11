#include <iostream>

using namespace std;

class FactorialCalculator {
private:
    int number;
    long long factorial;

public:
    FactorialCalculator(int n) {
        number = n;
        factorial = 1;
    }

    FactorialCalculator(const FactorialCalculator& other) {
        number = other.number;
        factorial = other.factorial;
    }

    void calculateFactorial() {
        for (int i = 1; i <= number; ++i) {
            factorial *= i;
        }
    }

    void displayFactorial() {
        cout << "Factorial of " << number << " is " << factorial << endl;
    }
};

int main() {
    int n;

    cout << "Enter a number to calculate its factorial: ";
    cin >> n;

    FactorialCalculator calculator1(n);

    calculator1.calculateFactorial();

    FactorialCalculator calculator2 = calculator1;

    calculator2.displayFactorial();

    return 0;
}
