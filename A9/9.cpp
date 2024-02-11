#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() const {
        return 0.0;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14 * radius * radius;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape* shapes[3];

    shapes[0] = new Rectangle(5.0, 3.0);
    shapes[1] = new Circle(4.0);
    shapes[2] = new Triangle(4.0, 6.0);

    for (int i = 0; i < 3; i++) {
        cout << "Shape " << i + 1 << " Area: " << shapes[i]->area() << endl;
        delete shapes[i];
    }

    return 0;
}
