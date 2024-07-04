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

class Hybrid : public Derived1, public Derived2 {
public:
    void showHybrid() {
        cout << "Hybrid class show" << endl;
    }
};

int main() {
    Hybrid obj;
    obj.Derived1::display();
    obj.show1();
    obj.show2();
    obj.showHybrid();
    return 0;
}
