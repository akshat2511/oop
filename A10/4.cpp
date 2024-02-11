#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() {
        return 0.0;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override {
        return 3.1415 * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double area() override {
        return side * side;
    }
};

int main() {
    Shape* shapes[] = {new Circle(5.0), new Square(4.0)};

    for (int i = 0; i < 2; i++) {
         cout << "Area: " << shapes[i]->area() <<  endl;
    }

    return 0;
}
