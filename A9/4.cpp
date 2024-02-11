#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;
    unsigned long long result;
    cout << "Enter a non-negative integer: ";
    cin >> num;
    result = factorial(num);
    cout << "Factorial of " << num << " is " << result << endl;
    return 0;
}