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

    // Declare class B as friend to access private members of A
    friend class B;
};

// Define class B
class B {
private:
    int privateValue;

public:
    B() : privateValue(20) {}

    // Function to access private member of class A
    void showPrivateValue(A objA) {
        cout << "Private value of A accessed from B: " << objA.privateValue << endl;
    }
};

int main() {
    A a;
    B b;

    // Call member function of B to access private member of A
    b.showPrivateValue(a);

    return 0;
}
