#include <iostream>

using namespace std; 

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }
};

int main() {
    double length, width;

    cout << "Enter the length of the rectangle: ";
    cin >> length;

    cout << "Enter the width of the rectangle: ";
    cin >> width;

    Rectangle rectangle(length, width);

    double area = rectangle.calculateArea();
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
