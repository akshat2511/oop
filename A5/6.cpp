#include <iostream>
using namespace std;

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByAddress(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 5, num2 = 10;
    
    cout << "Original values: num1 = " << num1 << ", num2 = " << num2 << endl;
    
    swapByValue(num1, num2);
    cout << "After swap by value: num1 = " << num1 << ", num2 = " << num2 << endl;
    
    swapByAddress(&num1, &num2);
    cout << "After swap by address: num1 = " << num1 << ", num2 = " << num2 << endl;
    
    swapByReference(num1, num2);
    cout << "After swap by reference: num1 = " << num1 << ", num2 = " << num2 << endl;
    
    return 0;
}
