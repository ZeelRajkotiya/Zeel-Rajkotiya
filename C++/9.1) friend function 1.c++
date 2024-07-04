#include <iostream>
using namespace std;

// Forward declaration of class B
class B;

// Define class A
class A {
private:
    int privateValue;

public:
    A() : privateValue(10) {}

    // Declare friend function that can access private members of A and B
    friend void showValues(A objA, B objB);
};

// Define class B
class B {
private:
    int privateValue;

public:
    B() : privateValue(20) {}

    // Declare friend function that can access private members of A and B
    friend void showValues(A objA, B objB);
};

// Define friend function showValues
void showValues(A objA, B objB) {
    cout << "Private value of A: " << objA.privateValue << endl;
    cout << "Private value of B: " << objB.privateValue << endl;
}

int main() {
    A a;
    B b;

    // Call friend function to display private values of A and B
    showValues(a, b);

    return 0;
}
