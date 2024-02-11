#include <iostream>
using namespace std;

class Base {
public:
    virtual void Display() {
         cout << "Base class Display()" <<  endl;
    }
};

class Derived : public Base {
public:
    void Display() override {
         cout << "Derived class Display()" <<  endl;
    }
};

int main() {
    Derived derivedObj;
    Base* basePtr = &derivedObj;
    basePtr->Display(); 

    return 0;
}
