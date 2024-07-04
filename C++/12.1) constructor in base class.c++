#include <iostream>
using namespace std;

class Base {
public:
    int baseValue;
    // Base class constructor
    Base(int val) {
        baseValue = val;
        cout << "Base class constructor called with value: " << baseValue << endl;
    }
};

class Derived : public Base {
public:
    int derivedValue;
    // Derived class constructor
    Derived(int baseVal, int derivedVal) : Base(baseVal) {
        derivedValue = derivedVal;
        cout << "Derived class constructor called with value: " << derivedValue << endl;
    }
};

int main() {
    Derived obj(10, 20);
    return 0;
}
