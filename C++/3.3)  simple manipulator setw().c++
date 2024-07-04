#include <iostream>
#include <iomanip> // for setw()
using namespace std;

int main() {
    cout << "Using setw() to format output:" << endl;

    cout << setw(10) << "Hello" << setw(10) << "World!" << endl;
    cout << setw(10) << 123 << setw(10) << 456 << endl;

    return 0;
}
