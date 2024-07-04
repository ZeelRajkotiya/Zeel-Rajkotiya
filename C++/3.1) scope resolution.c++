#include <iostream>
using namespace std;

// Global variable
int globalVar = 10;

int main() {
    // Local variable with the same name as global variable
    int globalVar = 20;

    // Accessing local variable
    cout << "Local variable (inside main function): " << globalVar << endl;

    // Accessing global variable using scope resolution operator (::)
    cout << "Global variable (from global scope): " << ::globalVar << endl;

    return 0;
}
