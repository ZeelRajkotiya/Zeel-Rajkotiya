#include <iostream>
using namespace std;

// Forward declaration of class B
class B;

// Define class A
class A {
private:
    int valueA;

public:
    A(int val) : valueA(val) {}

    // Declare class B as friend to access private members of A
    friend class B;
};

// Define class B
class B {
private:
    int valueB;

public:
    B(int val) : valueB(val) {}

    // Function to access private member of class A and perform operation
    void performOperation(A objA) {
        cout << "Value of A: " << objA.valueA << endl;
        cout << "Value of B: " << valueB << endl;
        cout << "Sum of A and B: " << (objA.valueA + valueB) << endl;
    }
};

int main() {
    A a(10);
    B b(20);

    // Call member function of B to access private member of A and perform operation
    b.performOperation(a);

    return 0;
}
