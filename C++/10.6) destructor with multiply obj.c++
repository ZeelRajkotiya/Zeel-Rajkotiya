#include <iostream>
using namespace std;

class Example6 {
public:
    int x;
    // Constructor
    Example6(int a) {
        x = a;
        cout << "Constructor called, x = " << x << endl;
    }
    // Destructor
    ~Example6() {
        cout << "Destructor called, x = " << x << endl;
    }
};

int main() {
    Example6 obj6a(60);
    Example6 obj6b(70);
    return 0;
}
