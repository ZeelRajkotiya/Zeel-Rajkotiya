#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display" << endl;
    }
};

class Intermediate1 : virtual public Base {
public:
    void show1() {
        cout << "Intermediate1 class show" << endl;
    }
};

class Intermediate2 : virtual public Base {
public:
    void show2() {
        cout << "Intermediate2 class show" << endl;
    }
};

class Derived : public Intermediate1, public Intermediate2 {
public:
    void showDerived() {
        cout << "Derived class show" << endl;
    }
};

int main() {
    Derived obj;
    obj.display();
    obj.show1();
    obj.show2();
    obj.showDerived();
    return 0;
}
