#include <iostream>
using namespace std;

inline double cube(double x) {
    return x * x * x;
}

int main() {
    double num;
    
    cout << "Enter a number to find its cube: ";
    cin >> num;
    
    double result = cube(num);
    
    cout << "Cube of " << num << " is: " << result << endl;
    
    return 0;
}
