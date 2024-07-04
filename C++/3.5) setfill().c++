#include <iostream>
#include <iomanip> // for setfill()
using namespace std;

int main() {
    cout << "Using setfill() to pad output:" << endl;

    cout << setw(10) << setfill('*') << 123 << setw(10) << setfill('#') << 456 << endl;

    return 0;
}
