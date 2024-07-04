#include <iostream>
using namespace std;

// Global variables
int a = 5, b = 10;

int main() {
    // Local variables
    int sum;

    sum = a + b;

    cout << "Sum of global variables a and b: " << sum << endl;

    return 0;
}
