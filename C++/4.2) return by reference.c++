#include <iostream>
using namespace std;

// Function to return a reference to the larger of two integers
int & max(int &a, int &b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 5, y = 10;

    cout << "x = " << x << ", y = " << y << endl;
    max(x, y) = 20; // Assigning 20 to the larger of x and y

    cout << "After assigning 20 to the larger value: x = " << x << ", y = " << y << endl;

    return 0;
}
