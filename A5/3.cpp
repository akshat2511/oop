#include <iostream>
#include <cmath>
using namespace std;

double power(double m, int n = 2) {
    return pow(m, n);
}

int main() {
    double base;
    int exponent;
    
    cout << "Enter the base (m): ";
    cin >> base;
    cout << "Enter the exponent (n, default is 2 if omitted): ";
    cin >> exponent;
    
    double result = power(base, exponent);
    
    cout << "Result: " << result << endl;
    
    return 0;
}
