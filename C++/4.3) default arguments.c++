#include <iostream>
using namespace std;

// Function with default arguments
void printMessage(string message = "Hello, World!") {
    cout << message << endl;
}

int main() {
    // Calling printMessage with default argument
    printMessage();

    // Calling printMessage with custom argument
    printMessage("Welcome to C++!");

    return 0;
}
