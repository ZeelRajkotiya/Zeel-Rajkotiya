#include <iostream>
using namespace std;

// Function to swap two integers using call by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swapByReference(x, y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
