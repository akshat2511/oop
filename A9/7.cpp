#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int val) : value(val) {}

    Number& operator++() {
        value++;
        return *this;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num(5);

    cout << "Original Value: ";
    num.display();

    ++num;

    cout << "After Prefix Increment: ";
    num.display();

    return 0;
}
