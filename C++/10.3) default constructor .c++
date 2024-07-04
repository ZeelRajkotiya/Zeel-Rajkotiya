#include <iostream>
using namespace std;

class Example3 {
public:
    int x;
    // Default Constructor
    Example3() {
        x = 0;
        cout << "Default Constructor called, x = " << x << endl;
    }
};

int main() {
    Example3 obj3;
    return 0;
}
