#include <bits/stdc++.h>
using namespace std;

class Shape {
public:
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
    virtual void print() const {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double getArea() const override {
        return 3.14159 * radius * radius;
    }

    double getPerimeter() const override {
        return 2 * 3.14159 * radius;
    }

    void print() const override {
        cout << "This is a circle with radius " << radius << "." << endl;
    }
};

int main() {
    Circle c(5.0);
    cout << "Area: " << c.getArea() << endl;
    cout << "Perimeter: " << c.getPerimeter() << endl;
    c.print();
}