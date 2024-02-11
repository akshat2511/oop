#include <iostream>
using namespace std;

void avg() {
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    float average = (num1 + num2) / 2.0;
    cout << "Average: " << average << endl;
}

double avg() {
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    return (num1 + num2) / 2;
}

void avg(float num1, int num2) {
    float average = (num1 + num2) / 2.0;
    cout << "Average: " << average << endl;
}

float avg(float num1, float num2) {
    return (num1 + num2) / 2.0;
}


