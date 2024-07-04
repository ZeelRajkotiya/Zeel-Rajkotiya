#include <iostream>
using namespace std;

class Example2 {
public:
    int x, y;
    // Parameterized Constructor
    Example2(int a, int b) {
        x = a;
        y = b;
        cout << "Parameterized Constructor called, x = " << x << " and y = " << y << endl;
    }
};

int main() {
    Example2 obj2(20, 30);
    return 0;
}
