#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}


double sum(double a, double b) {
    return a + b;
}

int main() {
    int num1 = 5, num2 = 10, num3 = 15;
    double dbl1 = 2.5, dbl2 = 3.5;

    cout << "Sum of " << num1 << " and " << num2 << " is " << sum(num1, num2) << endl;
    cout << "Sum of " << num1 << ", " << num2 << " and " << num3 << " is " << sum(num1, num2, num3) << endl;
    cout << "Sum of " << dbl1 << " and " << dbl2 << " is " << sum(dbl1, dbl2) << endl;

    return 0;
}