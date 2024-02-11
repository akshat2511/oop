#include<iostream>
using namespace std;

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

inline int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1 = 5, num2 = 7;
    int maximum = max(num1, num2);
    int minimum = min(num1, num2);
    
    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
    
    return 0;
}
