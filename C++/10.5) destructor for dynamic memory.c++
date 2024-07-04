#include <iostream>
using namespace std;

class Example5 {
public:
    int* ptr;
    // Constructor
    Example5(int val) {
        ptr = new int;
        *ptr = val;
        cout << "Constructor called, value = " << *ptr << endl;
    }
    // Destructor
    ~Example5() {
        delete ptr;
        cout << "Destructor called and memory freed" << endl;
    }
};

int main() {
    Example5 obj5(50);
    return 0;
}
