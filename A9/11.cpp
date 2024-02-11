#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r, float i) : real(r), imag(i) {}

    // Overload addition operator
    Complex operator +(const Complex& other) {
        Complex temp(real + other.real, imag + other.imag);
        return temp;
    }

    // Overload subtraction operator
    Complex operator -(const Complex& other) {
        Complex temp(real - other.real, imag - other.imag);
        return temp;
    }

    // Overload multiplication operator
    Complex operator *(const Complex& other) {
        Complex temp(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
        return temp;
    }

    // Overload division operator
    Complex operator /(const Complex& other) {
        float denominator = other.real * other.real + other.imag * other.imag;
        Complex temp((real * other.real + imag * other.imag) / denominator,
                     (imag * other.real - real * other.imag) / denominator);
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex num1(20, 16);
    Complex num2(2, 4); 

    Complex sum = num1 + num2;
    Complex diff = num1 - num2;
    Complex product = num1 * num2;
    Complex quotient = num1 / num2;
    
    cout << "Sum: ";
    sum.display();

    cout << "Difference: ";
    diff.display();

    cout << "Product: ";
    product.display();

    cout << "Quotient: ";
    quotient.display();

    return 0;
}