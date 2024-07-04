#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display" << endl;
    }
};

class Intermediate : public Base {
public:
    void showIntermediate() {
        cout << "Intermediate class show" << endl;
    }
};

class Derived : public Intermediate {
public:
    void showDerived() {
        cout << "Derived class show" << endl;
    }
};

int main() {
    Derived obj;
    obj.display();
    obj.showIntermediate();
    obj.showDerived();
    return 0;
}
