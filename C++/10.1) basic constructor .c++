#include <iostream>
using namespace std;

class Example1 {
public:
    int x;
    // Constructor
    Example1(int a) {
        x = a;
        cout << "Constructor called, x = " << x << endl;
    }
};

int main() {
    Example1 obj1(10);
    return 0;
}
