// Create a polymorphic hierarchy of shapes, such as Circle, Rectangle, and Triangle. Implement a virtual function in the base class, Shape, 
// that calculates and returns the area of the shape. Then, write a function that takes a Shape pointer
//  and uses dynamic casting to determine the specific type of shape and calculate its area.

#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double calculateArea() const = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return 3.1416* radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base;
    double height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() const override {
        return 0.5 * base * height;
    }
};

void printArea(const Shape* shape) {
    if (const Circle* circle = dynamic_cast<const Circle*>(shape)) {
        std::cout << "Circle area: " << circle->calculateArea() << std::endl;
    }
    else if (const Rectangle* rectangle = dynamic_cast<const Rectangle*>(shape)) {
        std::cout << "Rectangle area: " << rectangle->calculateArea() << std::endl;
    }
    else if (const Triangle* triangle = dynamic_cast<const Triangle*>(shape)) {
        std::cout << "Triangle area: " << triangle->calculateArea() << std::endl;
    }
    else {
        std::cout << "Unknown shape!" << std::endl;
    }
}

int main() {
    Circle circle(5);
    Rectangle rectangle(4, 6);
    Triangle triangle(3, 8);

    printArea(&circle);
    printArea(&rectangle);
    printArea(&triangle);

    return 0;
}
