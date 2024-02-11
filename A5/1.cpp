#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

int main() {
    int intResult = add(5, 3);
    double doubleResult = add(5.5, 3.3);
    
    cout << "Integer addition: " << intResult << endl;
    cout << "Double addition: " << doubleResult << endl;
    
    return 0;
}
