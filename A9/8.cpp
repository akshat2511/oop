#include <iostream>
using namespace std;

// Function to multiply two integers
int multiplication(int a, int b) {
    return a * b;
}

// Function to multiply two floats
float multiplication(float a, float b) {
    return a * b;
}

// Function to multiply two doubles
double multiplication(double a, double b) {
    return a * b;
}

int main() {
    int intResult = multiplication(5, 10);
    float floatResult = multiplication(2.5f, 3.5f);
    double doubleResult = multiplication(2.5, 3.5);

    cout << "Multiplication of integers: " << intResult << endl;
    cout << "Multiplication of floats: " << floatResult << endl;
    cout << "Multiplication of doubles: " << doubleResult << endl;

    return 0;
}