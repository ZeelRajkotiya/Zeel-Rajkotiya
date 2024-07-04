#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(double r, double i) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator + (const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }

    void display() const {
        cout << "Complex number: " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(3.4, 5.6);
    Complex c2(2.1, 3.9);
    Complex c3;

    c3 = c1 + c2; // Using overloaded + operator
    c3.display();
    return 0;
}
