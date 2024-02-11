#include <iostream>
using namespace std;

void fun(const int i) {
    cout << "void fun(const int i)" << endl;
}

void fun(int i) {
    cout << "void fun(int i)" << endl;
}

void fun(const char* a) {
    cout << "void fun(const char* a)" << endl;
}

void fun(char* a) {
    cout << "void fun(char* a)" << endl;
}

int main() {
    int intVar = 5;
    const int constIntVar = 10;
    char charArray[] = "Hello";
    const char constCharArray[] = "World";
    
    fun(intVar);
    fun(constIntVar);
    fun(charArray);
    fun(constCharArray);
    
    return 0;
}
