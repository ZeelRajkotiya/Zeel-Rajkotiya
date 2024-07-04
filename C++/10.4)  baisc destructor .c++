#include <iostream>
using namespace std;

class Example4 {
public:
    int x;
    // Constructor
    Example4(int a) {
        x = a;
        cout << "Constructor called, x = " << x << endl;
    }
    // Destructor
    ~Example4() {
        cout << "Destructor called, x = " << x << endl;
    }
};

int main() {
    Example4 obj4(40);
    return 0;
}
