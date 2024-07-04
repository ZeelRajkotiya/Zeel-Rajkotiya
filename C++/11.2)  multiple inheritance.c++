#include <iostream>
using namespace std;

class Base1 {
public:
    void display1() {
        cout << "Base1 class display" << endl;
    }
};

class Base2 {
public:
    void display2() {
        cout << "Base2 class display" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void show() {
        cout << "Derived class show" << endl;
    }
};

int main() {
    Derived obj;
    obj.display1();
    obj.display2();
    obj.show();
    return 0;
}
