#include <iostream>
#include <iomanip> // for setbase()
using namespace std;

int main() {
    int num = 255;

    cout << "Decimal: " << num << endl;
    cout << "Hexadecimal: " << hex << num << endl;
    cout << "Octal: " << oct << num << endl;

    return 0;
}
