#include <iostream>
#include <cmath>
using namespace std;

// Define a class for Vector
class Vector {
private:
    double x;
    double y;

public:
    // Constructor
    Vector(double xx, double yy) : x(xx), y(yy) {}

    // Member function to calculate magnitude of vector
    double magnitude() const {
        return sqrt(x * x + y * y);
    }

    // Member function to add two vectors
    Vector add(const Vector &other) const {
        return Vector(x + other.x, y + other.y);
    }

    // Member function to display vector components
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Create two objects of Vector class
    Vector v1(3.0, 4.0);
    Vector v2(1.0, 2.0);

    // Display magnitudes of both vectors
    cout << "Magnitude of v1: " << v1.magnitude() << endl;
    cout << "Magnitude of v2: " << v2.magnitude() << endl;

    // Add v1 and v2, and display the result
    Vector sum = v1.add(v2);
    cout << "Sum of v1 and v2: ";
    sum.display();

    return 0;
}
