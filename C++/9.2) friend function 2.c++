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

    // Declare friend function to access private members of A and B
    friend int sumValues(A objA, B objB);
};

// Define class B
class B {
private:
    int valueB;

public:
    B(int val) : valueB(val) {}

    // Declare friend function to access private members of A and B
    friend int sumValues(A objA, B objB);
};

// Define friend function sumValues to calculate sum of private members
int sumValues(A objA, B objB) {
    return objA.valueA + objB.valueB;
}

int main() {
    A a(10);
    B b(20);

    // Call friend function to calculate sum of values in objects a and b
    int sum = sumValues(a, b);
    cout << "Sum of values in objects A and B: " << sum << endl;

    return 0;
}
