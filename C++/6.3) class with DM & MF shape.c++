#include <iostream>
#include <cmath> // for M_PI
using namespace std;

// Define a class for Shape
class Shape {
public:
    // Virtual function for calculating area (to be overridden)
    virtual double calculateArea() const = 0;

    // Virtual function for displaying shape type (to be overridden)
    virtual void displayShape() const = 0;
};

// Define a class for Circle derived from Shape
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) : radius(r) {}

    // Override calculateArea method
    double calculateArea() const override {
        return M_PI * radius * radius;
    }

    // Override displayShape method
    void displayShape() const override {
        cout << "Circle with radius " << radius << endl;
    }
};

int main() {
    // Create an object of Circle class
    Circle circle(5.0);

    // Display the area of the circle
    cout << "Area of the circle: " << circle.calculateArea() << endl;

    // Display the shape details
    circle.displayShape();

    return 0;
}
