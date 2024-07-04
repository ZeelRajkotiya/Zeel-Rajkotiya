#include <iostream>
using namespace std;

// Abstract class
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    c.draw();
    r.draw();
    return 0;
}
