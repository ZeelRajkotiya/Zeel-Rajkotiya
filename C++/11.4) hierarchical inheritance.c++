#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display" << endl;
    }
};

class Derived1 : public Base {
public:
    void show1() {
        cout << "Derived1 class show" << endl;
    }
};

class Derived2 : public Base {
public:
    void show2() {
        cout << "Derived2 class show" << endl;
    }
};

int main() {
    Derived1 obj1;
    Derived2 obj2;
    obj1.display();
    obj1.show1();
    obj2.display();
    obj2.show2();
    return 0;
}
