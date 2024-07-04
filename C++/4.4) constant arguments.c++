#include <iostream>
using namespace std;

// Function with constant arguments
void display(const int &x, const int &y) {
    // x++; // Error: Cannot modify a const reference parameter
    cout << "x = " << x << ", y = " << y << endl;
}

int main() {
    int a = 10, b = 20;

    display(a, b);

    return 0;
}
