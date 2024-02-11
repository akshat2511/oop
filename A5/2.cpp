#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    double area() {
        return 0.0; // Default implementation
    }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : side(s) {}
    
    double area() {
        return side * side;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    double area() {
        return length * width;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double area() {
        return M_PI * radius * radius;
    }
};

int main() {
    Square square(4.0);
    Rectangle rectangle(5.0, 3.0);
    Circle circle(2.5);
    
    cout << "Area of Square: " << square.area() << endl;
    cout << "Area of Rectangle: " << rectangle.area() << endl;
    cout << "Area of Circle: " << circle.area() << endl;
    
    return 0;
}
